#include "box.h"

int main()
{
    Fraction f1, f2, result;

    cout << "Enter the whole part of the first fraction: ";
    cin >> f1.whole;

    cout << "Enter the numerator of the first fraction: ";
    cin >> f1.numerator;

    cout << "Enter the denominator of the first fraction: ";
    cin >> f1.denominator;

    cout << "Enter the whole part of the second fraction: ";
    cin >> f2.whole;

    cout << "Enter the numerator of the second fraction: ";
    cin >> f2.numerator;

    cout << "Enter the denominator of the second fraction: ";
    cin >> f2.denominator;

    result = add(f1, f2);
    cout << "Sum: ";
    printFraction(result);
    cout << endl;

    result = subtract(f1, f2);
    cout << "Difference: ";
    printFraction(result);
    cout << endl;

    result = multiply(f1, f2);
    cout << "Product: ";
    printFraction(result);
    cout << endl;

    result = divide(f1, f2);
    cout << "Quotient: ";
    printFraction(result);
    cout << endl;

    return 0;
}