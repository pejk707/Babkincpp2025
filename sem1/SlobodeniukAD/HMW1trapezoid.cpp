#include <iostream>

using namespace std;

int main()
{
	int area, a, b, h;
	cout << "Enter the length of the first side of trapezoid:";
	cin >> a;

	cout << "Enter the length of the second side of trapezoid:";
	cin >> b;

	cout << "Enter the length of the trapezoid height:";
	cin >> h;

	area = (a + b) * h / 2;
	cout << "Square:" << area << endl;

	return 0;
}