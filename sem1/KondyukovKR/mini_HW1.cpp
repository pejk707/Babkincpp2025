# include <iostream>

int main() {

	float sqS = 0;

	while (true) {

		std::cout << "side of the square:";
		std::cin >> sqS;

		if (sqS <= 0) {

			std::cout << "Error" << std::endl;
		}

		else {
			std::cout << "square:" << sqS * sqS << std::endl;
		}
	}

}