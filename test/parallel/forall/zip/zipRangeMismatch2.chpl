var A: [1..4] real;

forall (i,j) in zip(1..4, 1..3 by 2) with (ref A) do
  A[i] = j;

writeln(A);

