#include <iostream>
#include "box.h"

using namespace std;

int main() {
    Point point1{}, point2{};

    cout << "Enter coordinates for the first point:\n";
    cout << "x: ";
    cin >> point1.x;
    cout << "y: ";
    cin >> point1.y;

    cout << "\nEnter coordinates for the second point:\n";
    cout << "x: ";
    cin >> point2.x;
    cout << "y: ";
    cin >> point2.y;

    double distance = calculateDistance(point1, point2);

    cout << "\nDistance between the points: " << distance << endl;

    return 0;
}