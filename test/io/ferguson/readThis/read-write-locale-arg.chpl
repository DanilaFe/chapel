use IO;

class A {
  var x:int;
  proc writeThis(writer) throws {
    var loc = writer.readWriteThisFromLocale();
    writeln("in A.writeThis loc= ", loc.id);
    writer.writeln(x);
  }
}

class B {
  var x:int;
  proc init(x: int = 0) { this.x = x; }
  proc init(r: fileReader(?)) {
    var loc = r.readWriteThisFromLocale();
    writeln("in B.readThis loc= ", loc.id);
    this.x = r.readln(int);
  }
  proc readThis(writer) throws {
    var loc = writer.readWriteThisFromLocale();
    writeln("in B.readThis loc= ", loc.id);
    writer.readln(x);
  }
}

class C {
  var x:int;
  proc init(x: int = 0) { this.x = x; }
  proc init(r: fileReader(?)) {
    var loc = r.readWriteThisFromLocale();
    writeln("in C.readWriteHelper loc= ", loc.id);
    this.x = r.read(int);
  }

  proc readThis(r) throws {
    var loc = r.readWriteThisFromLocale();
    writeln("in C.readThis loc= ", loc.id);
    r.read(x);
  }

  proc writeThis(w) throws {
    var loc = w.readWriteThisFromLocale();
    writeln("in C.writeThis loc= ", loc.id);
    w.write(x);
  }
}


var a = new A(1);
var b = new B(1);
var c = new C(1);

var f = openMemFile();
var w = f.writer();

writeln("Writes from Locale 1");
on Locales[1] {
  w.writeln(a);
  // w.writeln(b); B is not writeable
  w.writeln(c);
}

writeln("Writes from Locale 2");
on Locales[2] {
  w.writeln(a);
  // w.writeln(b); B is not writeable
  w.writeln(c);
}


var r = f.reader();

writeln("Reads from Locale 1");
on Locales[1] {
  //r.readln(a); A is not readable
  r.readln(b);
  r.readln(c);
}

writeln("Reads from Locale 2");
on Locales[2] {
  //r.readln(a); A is not readable
  r.readln(b);
  r.readln(c);
}
