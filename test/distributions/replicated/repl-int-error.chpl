use ReplicatedDist;

config const n = 8;
const Space = {1..n, 1..n};
const ReplicatedSpace = Space dmapped replicatedDist();
var RA: [ReplicatedSpace] int;

coforall loc in Locales with (ref RA) do
  on loc do
    forall ra in RA do
      ra = here.id;

for loc in Locales do
  on loc do
    writeln(loc, ":\n", RA);
