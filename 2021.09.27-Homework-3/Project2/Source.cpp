#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const int count = 2;
	int n = 0;
	int rez = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		rez *= count;
	}
	cout << rez;
	return EXIT_SUCCESS;
}
