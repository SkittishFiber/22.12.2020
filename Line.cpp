#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2, k, b;
    cout << "Input x1, y1 values:" << endl << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "Input x2, y2 values:" << endl << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    k = (y1 - y2) / (x1 - x2);
    b = y2 - k * x2;
    cout << "y = " << k << "x" << b;
}

