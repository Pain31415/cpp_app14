#ifndef BOX_H
#define BOX_H

#include <iostream>

using namespace std;

struct ComplexNumber {
    double real;
    double imag;
};

ComplexNumber add(ComplexNumber c1, ComplexNumber c2);
ComplexNumber subtract(ComplexNumber c1, ComplexNumber c2);
ComplexNumber multiply(ComplexNumber c1, ComplexNumber c2);
ComplexNumber divide(ComplexNumber c1, ComplexNumber c2);
void printComplexNumber(ComplexNumber c);

#endif