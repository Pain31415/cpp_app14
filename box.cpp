#include "box.h"

int gcd(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplify(Fraction& f)
{
    int divisor = gcd(f.numerator, f.denominator);
    f.numerator /= divisor;
    f.denominator /= divisor;
}

void printFraction(const Fraction& f)
{
    if (f.whole != 0) {
        cout << "{ " << f.whole << " ";
        if (f.numerator != 0) {
            cout << f.numerator << "/" << f.denominator;
        }
        cout << " },";
    }
    else if (f.numerator != 0) {
        cout << "{ " << f.numerator << "/" << f.denominator << " },";
    }
    else {
        cout << "{ '  ' },";
    }
}

Fraction add(Fraction f1, Fraction f2)
{
    Fraction result;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    simplify(result);
    return result;
}

Fraction subtract(Fraction f1, Fraction f2)
{
    Fraction result;
    result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    simplify(result);
    return result;
}

Fraction multiply(Fraction f1, Fraction f2)
{
    Fraction result;
    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    simplify(result);
    return result;
}

Fraction divide(Fraction f1, Fraction f2)
{
    Fraction result;
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    simplify(result);
    return result;
}