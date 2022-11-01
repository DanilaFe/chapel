// check bytes (and while here string) casts to/from regular expressions

use Regex;

var s = "contains";
var b = b"contains";

var rs = s:regex(string);
var rb = b:regex(bytes);

writeln("contains regular expression".find(rs));
writeln(b"contains regular expression".find(rb));

writeln("doesn't contain regular expression".find(rs));
writeln(b"doesn't contain regular expression".find(rb));


var rcs = compile(s);
var rcb = compile(b);

writeln("contains regular expression".find(rcs));
writeln(b"contains regular expression".find(rcb));

writeln("doesn't contain regular expression".find(rcs));
writeln(b"doesn't contain regular expression".find(rcb));
