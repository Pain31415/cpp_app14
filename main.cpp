#include "box.h"

int main() {
    Rectangle myRectangle;

    cout << "Enter the length of the rectangle: ";
    cin >> myRectangle.length;

    cout << "Enter the width of the rectangle: ";
    cin >> myRectangle.width;

    cout << "Enter the x-coordinate of the axis: ";
    cin >> myRectangle.origin.x;

    cout << "Enter the y-coordinate of the axis: ";
    cin >> myRectangle.origin.y;

    printRectangle(myRectangle, true);

    double deltaX, deltaY;
    cout << "Enter the movement along the x-axis: ";
    cin >> deltaX;

    cout << "Enter the movement along the y-axis: ";
    cin >> deltaY;

    moveRectangle(myRectangle, deltaX, deltaY);
    printRectangle(myRectangle, true);

    double newLength, newWidth;
    cout << "Enter the new length of the rectangle: ";
    cin >> newLength;

    cout << "Enter the new width of the rectangle: ";
    cin >> newWidth;

    resizeRectangle(myRectangle, newLength, newWidth);
    printRectangle(myRectangle, true);

    return 0;
}