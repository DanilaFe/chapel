use GPU;
use CTypes;

param N = 16;

proc main() {
  on here.gpus[0] {
    var A: [0..<N] real;

    foreach i in 0..<N {
	add1(A, i);
	assertOnGpu();
    }
    writeln(A);

    foreach i in 0..<N {
        add2(A, i);
        assertOnGpu();
    }
    writeln(A);
  }
}

inline proc add1(ref A: [] real, idx: int) {
  // gpuWrite(c"Setting a value on A!");
  A[idx] = 59;
}

proc add2(ref A: [] real, idx: int) {
  // gpuWrite(c"Setting a value on A!");
  A[idx] = 61;
}
