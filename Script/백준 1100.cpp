#include <iostream>

int main() {
	char user;
	int count = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			std::cin >> user;
			if (user == 'F') {
				if (i % 2 == 0 && j % 2 == 0) {
					count++;
				}
				if (i % 2 == 1 && j % 2 == 1) {
					count++;
				}
			}
		}
	}
	std::cout << count;
}