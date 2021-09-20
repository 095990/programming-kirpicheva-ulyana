#include <iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x;
	y = x * x;
	cout << (y + 1) * (y + x) + 1;
	return 0;
}