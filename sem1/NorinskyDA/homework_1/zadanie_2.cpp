
#include <iostream>
using namespace std;

int main() {
  setlocale(0, "");

  float up_side, down_side, height;
  cout << "Для подсчёта площади трапеции введите следующие параметры: " << endl
       << "Длина верхнего основания: " << endl;
  cin >> up_side;
  cout << "Длина нижнего основания: " << endl;
  cin >> down_side;
  cout << "Высота: " << endl;
  cin >> height;
  cout << "Площадь трапеции: " << (up_side + down_side) / 2 * height << endl;

  return 0;
}
