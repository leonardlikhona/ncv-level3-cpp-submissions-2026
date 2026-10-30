#include <iostream>
#include <string>

const double PI = 3.14159265358979;
const int LITRES_PER_CUBIC_METRE = 1000;
double radius, height;

cout << "Tank radius (m): ";
cin >> radius;
cout << "Tank height (m): ";
cin >> height;

if (cin.fail())
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Error: enter numbers only." << endl;
}
else if (radius <= 0 || height <= 0)
    cout << "Error: must be greater than zero." << endl;
