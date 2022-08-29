proc runQueries(description, A) {
  writeln("Given a ", description, ": ");
  if isDomain(A) {
    writeln("  isRectangularDom() = ", isRectangularDom(A));
    writeln("  isIrregularDom()   = ", isIrregularDom(A));
    writeln("  isAssociativeDom() = ", isAssociativeDom(A));
    writeln("  isSparseDom()      = ", isSparseDom(A));
  }
  if isArray(A) {
    writeln("  isRectangularArr() = ", isRectangularArr(A));
    writeln("  isIrregularArr()   = ", isIrregularArr(A));
    writeln("  isAssociativeArr() = ", isAssociativeArr(A));
    writeln("  isSparseArr()      = ", isSparseArr(A));
  }
}

var rectangularDom = {1..2, 1..2};
var rectangularArr : [rectangularDom] int;

var assocDom : domain(string);
assocDom += "Hello";
assocDom += "World";
var assocArr : [assocDom] int;

var sparseDom : sparse subdomain(rectangularDom);
var sparseArr : [sparseDom] int;

runQueries("rectangular domain", rectangularDom);
runQueries("rectangular array", rectangularArr);
runQueries("associative domain", assocDom);
runQueries("associative array", assocArr);
runQueries("sparse domain", sparseDom);
runQueries("sparse array", sparseArr);

// Type subtype relations (operators now deprecated in favor of named
// functions)

writeln("Compare 1.type op int");
writeln("op <= returns ", 1.type <= int);
writeln("op <  returns ", 1.type <  int);
writeln("op >= returns ", 1.type >= int);
writeln("op >  returns ", 1.type >  int);

class BaseClass {}
class DerivedClass : BaseClass {}

writeln("Compare BaseClass op DerivedClass");
writeln("op <= returns ", BaseClass <= DerivedClass);
writeln("op <  returns ", BaseClass <  DerivedClass);
writeln("op >= returns ", BaseClass >= DerivedClass);
writeln("op >  returns ", BaseClass >  DerivedClass);

writeln("Compare DerivedClass.type op BaseClass.type");
writeln("op <= returns ", BaseClass <= DerivedClass);
writeln("op <  returns ", BaseClass <  DerivedClass);
writeln("op >= returns ", BaseClass >= DerivedClass);
writeln("op >  returns ", BaseClass >  DerivedClass);

// isFloat* functions are being deprecatd
// (in favor of doing isReal(x) || isImag(x) instead)

writeln("isFloat(1.2) returns ", isFloat(1.2));
writeln("isFloatType(real) returns ", isFloatType(real));
writeln("isFloatValue(1.2) returns ", isFloatValue(1.2));
