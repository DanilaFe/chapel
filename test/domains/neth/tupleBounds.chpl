//1, 2, and 3 dimensional int tuples
var low1 = (0,);
var high1 = (10,);
var correct1 = {low1[0]..high1[0]};
var dom1 = low1..high1;
if (dom1 != correct1) {
    writeln("1 dimensional domain from tuple failed.");
}

var low2 = (0,8);
var high2 = (10,17);
var correct2 = {low2[0]..high2[0],low2[1]..high2[1]};
var dom2 = low2..high2;
if (dom2 != correct2) {
    writeln("2 dimensional domain from tuple failed.");
}

var low3 = (0,0,1);
var high3 = (10,7,5);
var correct3 = {low3[0]..high3[0],low3[1]..high3[1],low3[2]..high3[2]};
var dom3 = low3..high3;
if (dom3 != correct3) {
    writeln("3 dimensional domain from tuple failed.");
}

//enum tuples
enum colors {seafoam, eggshell, periwinkle, canary};
use colors;
var colorLow = (seafoam, seafoam, eggshell);
var colorHigh = (periwinkle, eggshell, canary);
var colorCorrect = {seafoam..periwinkle, seafoam..eggshell, eggshell..canary};
var colorDom = colorLow..colorHigh;
if (colorDom != colorCorrect) {
    writeln("tuple bounded domain fails for 3tuples of enums");
}

//bool tuples
var boolLow = (false, false, true);
var boolHigh = (true, false, false);
var boolCorrect = {false..true, false..false, true..false};
var boolDom = boolLow..boolHigh;
if (boolDom != boolCorrect) {
    writeln("tuple bounded domain fails for 3tuple of bools");
}

//int(32) to int(64)
var tuple32Low: 2*int(32) = (0:int(32),0:int(32));
var tuple32High: 2*int(32) = (10:int(32),10:int(32));
var tuple64Low: 2*int(64) = (0,0);
var tuple64High: 2*int(64) = (10,10);

var correct32To64 = {tuple32Low[0]..tuple64High[0],tuple32Low[1]..tuple64High[1]};
var dom32To64 = tuple32Low..tuple64High;
if (dom32To64 != correct32To64) {
    writeln("tuple bounded domains fails for 32bit lower with 64bit upper");
}

var correct64To32 = {tuple64Low[0]..tuple32High[0],tuple64Low[1]..tuple32High[1]};
var dom64To32 = tuple64Low..tuple32High;
if (dom64To32 != correct64To32) {
    writeln("tuple bounded domains fails for 64bit lower with 32bit upper");
}

//uint(32) to int(64)
var tuple32uLow: 2*uint(32) = (0:uint(32),0:uint(32));
var tuple32uHigh: 2*uint(32) = (10:uint(32),10:uint(32));

var correct32uTo64 = {tuple32uLow[0]..tuple64High[0],tuple32uLow[1]..tuple64High[1]};
var dom32uTo64 = tuple32uLow..tuple64High;
if (dom32uTo64 != correct32uTo64) {
    writeln("tuple bounded domains fails for 32bit unsigned lower with 64bit upper");
}

var correct64To32u = {tuple64Low[0]..tuple32uHigh[0],tuple64Low[1]..tuple32uHigh[1]};
var dom64To32u = tuple64Low..tuple32uHigh;
if (dom64To32u != correct64To32u) {
    writeln("tuple bounded domains fails for 64bit lower with 32bit unsigned upper");
}
