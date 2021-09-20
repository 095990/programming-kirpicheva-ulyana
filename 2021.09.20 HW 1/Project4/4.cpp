#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
	int v, t;
	cin >> v >> t;
	cout << (t * v % 109 + 109) % 109;
	return EXIT_SUCCESS;
}