#include <iostream>
using namespace std;
int main() {
	int v, t;
	cin >> v >> t;
	cout << (t * v % 109 + 109) % 109;
	return 0;
}