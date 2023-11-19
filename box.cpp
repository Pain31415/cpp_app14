#include "box.h"

ComplexNumber add(ComplexNumber c1, ComplexNumber c2)
{
    ComplexNumber result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

ComplexNumber subtract(ComplexNumber c1, ComplexNumber c2)
{
    ComplexNumber result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

ComplexNumber multiply(ComplexNumber c1, ComplexNumber c2)
{
    ComplexNumber result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

ComplexNumber divide(ComplexNumber c1, ComplexNumber c2)
{
    ComplexNumber result;
    double denominator = c2.real * c2.real + c2.imag * c2.imag;
    result.real = (c1.real * c2.real + c1.imag * c2.imag) / denominator;
    result.imag = (c1.imag * c2.real - c1.real * c2.imag) / denominator;
    return result;
}

void printComplexNumber(ComplexNumber c)
{
    cout << c.real;
    if (c.imag >= 0)
        cout << " + " << c.imag << "i";
    else
        cout << " - " << -c.imag << "i";
    cout << endl;
}