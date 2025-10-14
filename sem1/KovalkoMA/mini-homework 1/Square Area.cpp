#include <iostream>
using namespace std;

double squareArea(double side) {
	return side * side;
}

int main() {
		double side;
	cout << "Please, input the length of the side fo your square: ";
	cin >> side;
	if (side < 0) {
		cout << "A square's side cannot be negative!" << endl;
		return 1;
	}
	double area = squareArea(side);
	cout << "The area of your square = " << area << endl;
	return 0;
}