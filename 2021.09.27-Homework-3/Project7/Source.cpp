#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	long a = 0;
	long b = 0;
	long c = 0;
	long d = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	for (int x = 0; x <= 1000; x++)
	{
		if (a * x * x * x + b * x * x + c * x + d == 0)
		{
			cout << x << " ";
		}
	}
	return EXIT_SUCCESS;
}