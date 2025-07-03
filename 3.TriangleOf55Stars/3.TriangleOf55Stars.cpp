#include <iostream>

int main() {

	int n = 11;

	for (int r = 1; r <= n; ++r) {
		for (int c = 1; c <= r; ++c) std::cout << '*';
		std::cout << '\n';
	}

	std::cin.get(); std::cin.get();
	return 0;
}