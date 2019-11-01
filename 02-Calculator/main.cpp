
#include <iostream>

#include "Calculator.h"

using namespace std;

int main()
{
    double a = 7.4;
    int b = 99;

    cout << "a + b = " << Calculator::MyCalculator::add(a, b) << endl;
    cout << "a - b = " << Calculator::MyCalculator::subtract(a, b) << endl;
    cout << "a * b = " << Calculator::MyCalculator::multiply(a, b) << endl;
    cout << "a / b = " << Calculator::MyCalculator::divide(a, b) << endl;

    return 0;
}
