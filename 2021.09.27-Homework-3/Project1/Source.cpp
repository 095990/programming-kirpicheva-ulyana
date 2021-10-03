#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int nf = 1;
	cin >> n;
	for(int i = 2; i <= n; i++)
	{
		nf *= i;
	}
	cout << nf;
	return EXIT_SUCCESS;
}