#include <iostream>

double squareA(double x)
{
    return(x * x);
}
double trapeze(double x, double y, double h)
{
    return((x + y) / 2 * h);
}
int main()
{
    system("chcp 1251");
    system("cls");

    double x = 0;
    double y = 0;
    double h = 0;
    int num = 0;

    std::cout << "Найти площадь:  1.Квадрата  2.Трапеции";
    std::cin >> num;
    switch (num)
    {
    case (1):
            std::cout << "Введите длину стороны квадрата:\n";
            std::cin >> x;
            std::cout << "Площадь квадрата равна = " << squareA(x);
            break;
        
    case (2):
            std::cout << "Введите длину первого основания трапеции:\n";
            std::cin >> x;
            std::cout << "Введите длину второго основания квадрата:\n";
            std::cin >> y;
            std::cout << "Введите длину высоты трапеции:\n";
            std::cin >> h;
            std::cout << "Площадь трапеции равна = " << trapeze(x, y, h) << std::endl;
            break;
    }
    return 0;
}