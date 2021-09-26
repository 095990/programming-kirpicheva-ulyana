#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
	int v = 0;
	int t = 0;
	cin >> v >> t;
	cout << (t * v % 109 + 109) % 109;
	return EXIT_SUCCESS;
}