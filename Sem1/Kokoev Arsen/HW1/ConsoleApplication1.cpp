#include <iostream>
#include <locale.h>
#include <cstdlib>
double squareA(double a)
{
    return(a * a);
}
double trapA(double a, double b, double h)
{
    return((a + b)/2 *h);
}
int main()
{
    setlocale(LC_ALL, "Russian");
    double a = 0;
    double b = 0;
    double h = 0;
    Start: std::cout << "Найти площадь: \n 1.Квадрата \n 2.Трапеции\n";
    std::cin >> a;
    if (a != 2 and a != 1) {
        std::cout << "Nuh uh\n";
        goto Start;
    }
    if (a == 1) {
        std::cout <<"Введите длину стороны квадрата:\n";
        std::cin >> a;
        std::cout <<"Площадь квадрата равна = " << squareA(a);
    }
    if (a == 2) {
        std::cout << "Введите длину первого основания трапеции:\n";
        std::cin >> a;
        std::cout << "Введите длину второго основания квадрата:\n";
        std::cin >> b;
        std::cout << "Введите длину высоты трапеции:\n";
        std::cin >> h;
        std::cout << "Площадь трапеции равна = " << trapA(a,b,h)<<std::endl;
    }

}
