#include <iostream>
#include <string>
#include <algorithm>
#include <format>

std::string convertToBase(int c, int s)
{
	std::string result;
	while (c > 0)
	{
		std::string A = "0123456789ABCDEFGH";
		result += A.at(c % s);
		c = c / s;
	}
	std::reverse(result.begin(), result.end());
	return result;
}
//способ 1. С написанием своей функции конвертера в разные в системы счисления
std::string myConvert_8_16(int c) 
{
	std::string result = "";
	result += "\nв 8-ричной системе: ";
	result += convertToBase(c, 8);
	result += "\nв 16-ричной системе: ";
	result += convertToBase(c, 16);
	return result;
}
//способ 2. Через встроенные функции oct, hex
std::string convert_8_16(int c)
{
	std::string result = "";
	result += "\nв 8-ричной системе: ";
	result += std::format("{:o}", c);
	result += "\nв 16-ричной системе: ";
	result += std::format("{:x}", c);
	return result;
}

//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	int c;
//	std::cin >> c;
//	std::cout << myConvert_8_16(c);
//	std::cout << convert_8_16(c);
//}
