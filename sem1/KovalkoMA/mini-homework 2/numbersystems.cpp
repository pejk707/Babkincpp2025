#include <iostream>
#include <sstream>
using namespace std;

std::string decimalToHex(int decimal) {
    std::stringstream ss;
    ss << std::hex << decimal;
    return ss.str();
}

std::string decimalToOct(int decimal) {
    std::stringstream ss;
    ss << std::oct << decimal;
    return ss.str();
}

int main() {
    int n;
    std::cout << "Enter your decimal value: ";
    std::cin >> n;

    std::string hexStr = decimalToHex(n);
    std::cout << "Hexadecimal value = " << hexStr << std::endl;

    std::string octStr = decimalToOct(n);
    std::cout << "Octal value = " << octStr << std::endl;

    return 0;
}