#include <iostream>


int square(int a) { // Square calculation
    return a*a;
}


float trap(int a, int b, int h) { // Trapezoid area calculation
    return 0.5 * (a + b) * h;
}


int main() {
    // Square calculation
    int to_square;
    std::cout << "Enter the number to square it: ";
    std::cin >> to_square;
    std::cout << "The square of " << to_square << " is " << square(to_square) << "\n";

    // Trapezoid area calculation
    int a, b, h;
    std::cout << "Enter the lengths of the two parallel sides and the height of the trapezoid: ";
    std::cin >> a >> b >> h;
    std::cout << "The area of the trapezoid is " << trap(a, b, h) << "\n";
    return 0;
}
