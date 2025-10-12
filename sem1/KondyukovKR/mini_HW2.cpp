#include <iostream>

int main() {

	float osn_first = 0; 
	float osn_second = 0;
	float height = 0; 

	while (true) {

		std::cout << "first baze of the trapezoid:";
		std::cin >> osn_first;

		std::cout << "second baze of the trapezoid:";
		std::cin >> osn_second;

		std::cout << "height:";
		std::cin >> height;

		if (osn_first <= 0 or osn_second <= 0 or height <= 0) {

			std::cout << "Error" << std::endl;
		}

		else {
			std::cout << "square of the trapezoid:" << (osn_first + osn_second) / 2 * height << std::endl;
		}

	}

}