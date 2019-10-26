
#include <iostream>

#include "Calculadora.h"

using namespace std;

int main()
{
    double a = 7.4;
    int b = 99;

    cout << "a + b = " << Calculadora::MyCalculadora::add(a, b) << endl;
    cout << "a - b = " << Calculadora::MyCalculadora::subtract(a, b) << endl;
    cout << "a * b = " << Calculadora::MyCalculadora::multiply(a, b) << endl;
    cout << "a / b = " << Calculadora::MyCalculadora::divide(a, b) << endl;

    return 0;
}
