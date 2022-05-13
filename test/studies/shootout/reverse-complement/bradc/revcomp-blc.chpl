/* The Computer Language Benchmarks Game
   https://salsa.debian.org/benchmarksgame-team/benchmarksgame/

   contributed by Brad Chamberlain
   based on the Chapel #3 version with some inspiration taken from the
   C gcc #6 version by Jeremy Zerfas
*/

use IO;

param eol = '\n'.toByte(),  // end-of-line, as an integer
      cols = 61,            // # of characters per full row (including '\n')

      // A 'bytes' value that stores the complement of each base at its index
      cmpl = b"          \n                                                  "
           + b"    TVGH  CD  M KN   YSAABW R       TVGH  CD  M KN   YSAABW R";
             //    ↑↑↑↑  ↑↑  ↑ ↑↑   ↑↑↑↑↑↑ ↑       ↑↑↑↑  ↑↑  ↑ ↑↑   ↑↑↑↑↑↑ ↑
             //    ABCDEFGHIJKLMNOPQRSTUVWXYZ      abcdefghijklmnopqrstuvwxyz

const stdinBin = openfd(0).reader(iokind.native, locking=false,
                                  hints = QIO_CH_ALWAYS_UNBUFFERED),
      stdoutBin = openfd(1).writer(iokind.native, locking=false,
                                   hints=QIO_CH_ALWAYS_UNBUFFERED);

proc main(args: [] string) {
  // read in the data using an incrementally growing buffer
  var bufLen = 8 * 1024,
      bufDom = {0..<bufLen},
      buf: [bufDom] uint(8),
      end = 0;

  do {
    const more = stdinBin.read(buf[end..]);
    if more {
      end = bufLen;
      bufLen += min(1024**2, bufLen);
      bufDom = {0..<bufLen};
    }
  } while more;
  end = stdinBin.offset()-1;

  // process the buffer a sequence at a time, working from the end
  var hi = end;
  while (hi >= 0) {
    // search for the '>' that marks the start of a sequence
    var lo = hi;
    while buf[lo] != '>'.toByte() do
      lo -= 1;

    // skip past header line
    var seqlo = lo;
    do {
      seqlo += 1;
    } while buf[seqlo-1] != eol;

    // reverse and complement the sequence
    revcomp(buf, seqlo, hi);

    hi = lo - 1;
  }

  // write out the transformed buffer
  stdoutBin.write(buf[..end]);
}


proc revcomp(buf, lo, hi) {
  // shift all of the linefeeds into the right places
  const len = hi - lo + 1,
        off = (len - 1) % cols,
        shift = cols - off - 1;

  if off {
    forall m in lo+off..<hi by cols {
      for i in m..#shift by -1 do
        buf[i+1] = buf[i];
      buf[m] = eol;
    }
  }

  // walk from both ends of the sequence, complementing and swapping
  forall (i,j) in zip(lo..#(len/2), ..<hi by -1) do
    (buf[i], buf[j]) = (cmpl[buf[j]], cmpl[buf[i]]);
}
