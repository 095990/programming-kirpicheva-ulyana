#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	long long n = 0;
	long long k = 0;
	cin >> n;
	cin >> k;
	long long res = 1;
	for (int i = 1; i <= k; i++)
	{
		res *= (n - k + i);
		res /= i;
	}
	cout << res;
	return EXIT_SUCCESS;
}