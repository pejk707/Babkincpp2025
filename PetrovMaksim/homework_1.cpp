#include <iostream>

float square(float side) {
    return side * side;
}

float trapezoid(float aSide, float bSide, float height) {
    return (aSide + bSide) * height / 2.;
}

int main()
{
    // CHECKING SQUARE
    float squareSide;
    std::cout << "Enter the side of a square: ";
    std::cin >> squareSide;

    std::cout << "Area of square: " << square(squareSide) << std::endl;

    // CHECKING TRAPEZOID
    float aSide, bSide, height;
    std::cout << "Enter first side of the trapezoid: ";
    std::cin >> aSide;
    std::cout << "Enter the second side of the trapezoid: ";
    std::cin >> bSide;
    std::cout << "Enter the height of the trapezoid: ";
    std::cin >> height;

    std::cout << "Area of trapezoid: " << trapezoid(aSide, bSide, height) << std::endl;
}

