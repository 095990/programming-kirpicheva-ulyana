#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a;
	cin >> b;
	for (int i = a; i <= b; i++)
	{
		int Sqrt = sqrt((double)i);
		if (Sqrt * Sqrt == i)
		{
			cout << i << " ";
		}
	}
	return EXIT_SUCCESS;
}