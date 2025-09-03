use Reflection;
use Types;

compilerAssert(useProcedurePointers);

inline proc printType(type t) do writeln(t:string);

var flag: atomic bool;

proc foo(): void { flag.write(true); }

inline proc invokeAndCheck(procPtr) {
  flag.clear();
  procPtr();
  assert(flag.read());
}

proc test0() {
  writeln(getRoutineName());

  const p = foo;
  param ok1 = chpl_enableProcPtrs(p.type);
  compilerAssert(ok1);
}

proc test1() {
  writeln(getRoutineName());

  const p1 = foo;
  assert(p1 != nil);

  assert(p1 == foo);
  invokeAndCheck(p1);

  const p2 = chpl_toLocalProc(p1);
  assert(p2 != nil);
  invokeAndCheck(p2);

  // Not legal to call as given, but we just check for 'nil'. 
  const p3 = __primitive("cast", chpl_toExternProcType(p2.type), p2);
  assert(p3 != nil);

  // Not legal to call as given, but we just check for 'nil'.
  const p4 = __primitive("cast", chpl_toExternProcType(p1.type), p1);
  assert(p4 != nil);
}

proc main() {
  test0();
  test1();
}
