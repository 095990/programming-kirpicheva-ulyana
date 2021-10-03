#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int zero = 0;
	int pos = 0;
	int neg = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		if (x == 0)
		{
			zero++;
		}
		else if (x > 0)
		{
			pos++;
		}
		else
		{
			neg++;
		}
	}
	cout << zero << " " << pos << " " << neg;
	return EXIT_SUCCESS;
}