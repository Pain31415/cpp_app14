#include <iostream>

struct Fraction {
    int whole;
    int numerator;
    int denominator;
};

void simplify(Fraction& f);
void toProper(Fraction& f);
Fraction add(Fraction f1, Fraction f2);
Fraction subtract(Fraction f1, Fraction f2);
Fraction multiply(Fraction f1, Fraction f2);
Fraction divide(Fraction f1, Fraction f2);