#include<stack>
#include<cstdio>

using std::stack;
using std::printf;

/*
stack arithmatic
single stack

prefix stacking (unstacked operations)

encode all operations b/c stack of int

ops:
    addition = 9999
    subraction = 9998
    multiplication = 9997
    division = 10001
*/

int main();

int addition (int , int);

int subtraction (int , int);

int multiplication (int , int);

int division (int , int);

// evaluates a loaded stack
stack<int> evaluate( stack<int> ); 