

#include <iostream>
void to16And8System(const int x);
int main() {
  int x;
  std::cout << "input int: ";
  std::cin >> x;
  std::cout << std::endl;
  to16And8System(x);
}
void to16And8System(const int x) {
  std::string result = "";
  const std::string symbols = "0123456789abcdef";
  int vremX = x;
  while (vremX) {
    result = symbols[vremX % 16] + result;
    vremX /= 16;
  }
  std::cout << "in 16 system " << result << std::endl;
  vremX = x;
  result = "";
  while (vremX) {
    result = symbols[vremX % 8] + result;
    vremX /= 8;
  }
  std::cout << "in 8 system " << result << std::endl;
}
