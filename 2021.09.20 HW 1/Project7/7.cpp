#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
	int a, b, c;
	cin >> a, b;
	c = a;
	a = b;
	b = c;
	cout << a << " " << b;
	return EXIT_SUCCESS;
}