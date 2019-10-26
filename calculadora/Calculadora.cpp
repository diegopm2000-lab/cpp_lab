// Calculadora.cpp

#include "Calculadora.h"

#include <stdexcept>

using namespace std;

namespace Calculadora
{
    double MyCalculadora::add(double a, double b)
    {
        return a + b;
    }

    double MyCalculadora::subtract(double a, double b)
    {
        return a - b;
    }

    double MyCalculadora::multiply(double a, double b)
    {
        return a * b;
    }

    double MyCalculadora::divide(double a, double b)
    {
        return a / b;
    }
}
