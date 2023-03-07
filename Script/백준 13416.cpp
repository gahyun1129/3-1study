#include <iostream>
int main() {

	int testCase;
	std::cin >> testCase;
	while (testCase > 0) {
		int days;
		int total = 0;
		std::cin >> days;
		while (days > 0) {
			int A, B, C;
			std::cin >> A;
			std::cin >> B;
			std::cin >> C;

			if (A < 0 && B < 0 && C < 0) {
				total += 0;
			}
			else if (A >= B && A >= C) {
				total += A;
			}
			else if (B >= A && B >= C) {
				total += B;
			}
			else if (C >= A && C >= B) {
				total += C;
			}
			days--;
		}
		std::cout << total << '\n';
		testCase--;
	}
}