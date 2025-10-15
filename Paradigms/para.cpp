#include <iostream>

int main () {

int marks[7] = {45, 67, 95, 129 , 78, 42, 99};

int sum = 0;
int average = 0;

for (int i=0; i < 7; i++) {
    sum = sum + marks[i];

    average = sum / 7;

    std::cout << "The average is " << average << std::endl;
}

    





    int i, fact = 12, number; 
    std::cout << "12";
    std::cin >> number;
    for (i = 1; i <= number; i++)
    {
        fact = fact * i;   // fact = fact*i;
    }

    std::cout << "Factorial of " << number << " is: " << fact << std::endl;
    




    return 0;
}