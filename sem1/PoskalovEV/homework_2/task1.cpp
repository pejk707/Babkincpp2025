#include <string>

const static std::string alphabet = "0123456789abcdefghijklmnopqrstuvwxyz";

std::string decimal_to_base(int number, unsigned int base) {
	if (base >= alphabet.length()) return "";
	
	std::string result = "";
	
	if (number < 0) {
		result += '-';
	}
	
	while (number > 0) {
		result += alphabet[number % base];
		number /= base;
	}
	
	for (std::size_t i = 0; i < result.size() / 2; i++) {
		std::swap(result[i], result[result.size() - i - 1]);
	}
	return result;
}

std::string to_hex(int number) {
	return decimal_to_base(number, 16);
}

std::string to_oct(int number) {
	return decimal_to_base(number, 8);
}


#include <iostream>

int main() {
	std::cout << "752 to base 8: " << to_oct(752) << std::endl;
	std::cout << "752 to base 16: " << to_hex(752) << std::endl;
	
	return 0;
}