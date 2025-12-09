#include <cstdio>


    int my_sum(int x, int y) { //define a function name: my_sum, output: int, inputs: int, int
        return x + y;           // describes the output
    }

    //anytime you use a function you must call it in the form <name>(<inputs>)
    
    int main() {

        std::printf("%d\n", my_sum(80,3)); //
    return 0;
}

class CalcP2 {
    enum { MAXSTACK = 100 };
    double stack[MAXSTACK];
    int sp; // stack pointer

   public:
    CalcP2() : sp(0) {}

    void push(double val) {
        if (sp < MAXSTACK) {
            stack[sp++] = val;
        } else {
            printf("Stack overflow\n");
        }
    }

    double pop() {
        if (sp > 0) {
            return stack[--sp];
        } else {
            printf("Stack underflow\n");
            return 0.0;
        }
    }

    void add() {
        if (sp >= 2) {
            double b = pop();
            double a = pop();
            push(a + b);
        } else {
            printf("Not enough values on stack for addition\n");
        }
    }

    void sub() {
        if (sp >= 2) {
            double b = pop();
            double a = pop();
            push(a - b);
        } else {
            printf("Not enough values on stack for subtraction\n");
        }
    }

    void mul() {
        if (sp >= 2) {
            double b = pop();
            double a = pop();
            push(a * b);
        } else {
            printf("Not enough values on stack for multiplication\n");
        }
    }

    void div() {
        if (sp >= 2) {
            double b = pop();
            double a = pop();
            if (b != 0) {
                push(a / b);
            } else {
                printf("Division by zero\n");
                push(a); // push back the first operand
                push(b); // push back the second operand
            }
        } else {
            printf("Not enough values on stack for division\n");
        }
    }

    void printTop() const {
        if (sp > 0) {
            printf("Top of stack: %f\n", stack[sp - 1]);
        } else {
            printf("Stack is empty\n");
        }
    }
};  





    




