#include <iostream>
using namespace std;

double trapezoidArea(double a, double b, double h) {
	return (a + b) * h / 2;
}

int main() {
	double a, b, h;
	cout << "Enter the lengths of the two bases and the height of the trapezoid: ";
	cin >> a >> b >> h;
	double area = trapezoidArea(a, b, h);
	cout << "The area of the trapezoid = " << area << endl;
	return 0;
}