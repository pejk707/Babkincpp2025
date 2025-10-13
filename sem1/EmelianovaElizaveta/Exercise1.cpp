#include <iostream>

// A function for finding the area of a square
long long squareS(long long a) {
	return a * a;
}
// A function for finding the area of a trapezoid
long long trapezeS(long long a,long long b,long long h) {
	long long s = ((a + b) * h) / 2;
	return s; 

}
int main(){
	int a = 24, b = 13,c = 27, h = 15;
	std::cout << squareS(a) << " " << trapezeS(b, c, h);

	return 0;
}