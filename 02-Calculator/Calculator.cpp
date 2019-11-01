// Calculator.cpp

#include "Calculator.h"

#include <stdexcept>

using namespace std;

namespace Calculator
{
    double MyCalculator::add(double a, double b)
    {
        return a + b;
    }

    double MyCalculator::subtract(double a, double b)
    {
        return a - b;
    }

    double MyCalculator::multiply(double a, double b)
    {
        return a * b;
    }

    double MyCalculator::divide(double a, double b)
    {
        return a / b;
    }
}
