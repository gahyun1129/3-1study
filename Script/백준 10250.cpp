#include <iostream>
int main() {
	int t = 0;
	std::cin >> t;
	while (t--) {
		int h = 0, w = 0, n = 0;
		std::cin >> h >> w >> n;

		int roomFloor = n % h;
		int roomNum = (n / h) + 1;

		if (roomFloor == 0) {
			roomFloor = h;
			roomNum = (n / h);
		}
		std::cout << (roomFloor * 100) + roomNum << '\n';
	}
}