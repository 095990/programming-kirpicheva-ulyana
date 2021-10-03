#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 15;
	int j = 1;
	cin >> j;
	cin >> n;
	for (int m = 0 : m <= n; m++)
	{
		for (int i = 0; i <= j; i++)
		{
			cout << m + 1 << " ";
		}
		cout << endl;
		j++;
	}

	return EXIT_SUCCESS;
}