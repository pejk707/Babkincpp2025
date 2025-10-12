#include <iostream>

double sqwidward(double a) {

    if (a > 0) {
        std::cout << "Area of square = "; 
        return a*a;

    }
    else {

    std::cout << "Unfortunately, you have been banned.";
    exit(0);

    }
}

double trapezoid(double a,  double b,  double h) {
    double L = (a+b)/2;
    if (a && b && h > 0) {
        std::cout << "Area of trapezoid = "; 
        return L * h;
    }
    else {

        std::cout << "Unfortunately, you have been banned.";
        exit(0);
        
    }

}

int main()
{
    int choise = 0;
    double a, b, h = 0;
    std::cout << "Area of which shape you want to calculate?" << std::endl << "1. Square" << std::endl << "2. Trapezoid " << std::endl;
    std::cin >>  choise;
    if (choise == 1) {
        std::cout << "Enter side lenght of your square: ";
        std::cin >> a;
        std::cout << sqwidward(a);
    }
    else if (choise == 2) {
        std::cout << "Enter the lower base of your trapezoid: ";
        std::cin >> a;
        std::cout << "Enter the upper base of your trapezoid: ";
        std::cin >> b;
        std::cout << "Enter the height of your trapezoid: ";
        std::cin >> h;
        std::cout << trapezoid(a,b,h);
    }
    return 0;

}