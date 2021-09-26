#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	cin >> k;
	cin >> m;
	cin >> n;
	int res = 0;
	if (n < k) 
	{
		res = 2 * m;
	}
	else 
	{
		res = 2 * n / k * m;
		if (2 * n % k != 0)
		{
			res += m;
		}
	}
	cout << res;
	return EXIT_SUCCESS;
}