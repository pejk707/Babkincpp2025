#include <iostream>
int trapezeS(int side_a, int side_b, int hight) {
  int square_tra = ((side_a + side_b) * hight) / 2;
  return square_tra;
}
int main() {
  int side_a = 24, side_b = 13, hight = 15;
  std::cout << trapezeS(side_a, side_b, hight);

  return 0;
}
