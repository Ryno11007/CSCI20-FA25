#include <cstdio>
#include<stack>

using std::printf;
using std::stack;
/*
stack calcultor using a monolithic object.

this means that the object obfuscate the strutcture of evaluation

this obj represents a simple calc taking numbers and evaluating


-problem: representing numbers and operations, solved.
we need an encoding for the numbers. lets use a struc and operations of our calculator, lets use a struct.
     strucure houses numbers for eval and characters for operations
    the operations will be represented by the folowing:
        '+' addition
        '-' subtraction
        '*' multiplication
        '/' division
        'e' evaluate

    - problem: what are the basic operations of our calculator, solved.
    binary operators on which two numbers will be given (a, b)
    -addition: a + b
    -subtraction: a - b
    -multiplication: a * b
    -division: a / b
    -evaluation: symbolizes number for evaluation, termination operation

    - problem: what structure defines the equations integrity preserving order. solved.
        stack<dicho> st.
        stack of type dicho because dicho assist in evaluation operation encoding

- problem: we need to be able to load the stack in the proper order [unsolved]

- we need a way to evaluate a full stack. [unsolved]


*/

class calcp2 {
    private:
    struct dicho {
    int num;
    char op;
};
stack<dicho> st;
int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);
public:

};
