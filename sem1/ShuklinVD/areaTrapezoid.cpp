#include <iostream>
#include <locale>
float areaTrapezoid(float bigSide, float smallSide, float height) {
    if (bigSide > 0 and smallSide > 0 and height > 0) {
        return 0.5 * (bigSide + smallSide) * height;
    }
    else
    {
        return 0;
    }
}
int main()
{
    setlocale(LC_ALL, "");
    float trapezoidBigSide;
    float trapezoidSmallSide;
    float trapezoidHeight;
    std::cout << "Введи большую сторону трапеции ";
    std::cin >> trapezoidBigSide;
    std::cout << "Введи малую сторону трапеции ";
    std::cin >> trapezoidSmallSide;
    std::cout << "Введи высоту сторону трапеции ";
    std::cin >> trapezoidHeight;
    if (areaTrapezoid(trapezoidBigSide, trapezoidSmallSide, trapezoidHeight)) {
        std::cout << areaTrapezoid(trapezoidBigSide, trapezoidSmallSide, trapezoidHeight) << " - площадь трапеции";
    }
    else
    {
        std::cout << "Ошибка: в геометрии нет чисел меньше 0 или 0 - размер стороны";
    }
    return 0;
}