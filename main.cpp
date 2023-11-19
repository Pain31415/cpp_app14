#include "box.h"

int main() {
    ComplexNumber c1, c2, result;

    cout << "Enter the real part of the first complex number: ";
    cin >> c1.real;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> c1.imag;

    cout << "Enter the real part of the second complex number: ";
    cin >> c2.real;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> c2.imag;

    result = add(c1, c2);
    cout << "Sum: ";
    printComplexNumber(result);

    result = subtract(c1, c2);
    cout << "Difference: ";
    printComplexNumber(result);

    result = multiply(c1, c2);
    cout << "Product: ";
    printComplexNumber(result);

    result = divide(c1, c2);
    cout << "Quotient: ";
    printComplexNumber(result);

    return 0;
}