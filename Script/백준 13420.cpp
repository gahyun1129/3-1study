#include <iostream>

int main() {

	int t = 0;
	std::cin >> t;
	while (t > 0) {
		long long int a = 0, b = 0, result = 0;
		char operation, equal;
		std::cin >> a >> operation >> b >> equal >> result;

		if (operation == '+') {
			std::cout << (a + b == result ? "correct" : "wrong answer") << '\n';
		}
		else if (operation == '-') {
			std::cout << (a - b == result ? "correct" : "wrong answer") << '\n';
		}
		else if (operation == '*') {
			std::cout << (a * b == result ? "correct" : "wrong answer") << '\n';
		}
		else if (operation == '/') {
			std::cout << (a / b == result ? "correct" : "wrong answer") << '\n';
		}
		t--;
	}
}