#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int x = 0;
	int y = 0;
	cin >> m;
	cin >> n;
	cin >> x;
	cin >> y;

	if (x != 1)
	{
		cout << x - 1 << " " << y << endl;
	}
	if (x != m)
	{
		cout << x + 1 << " " << y << endl;
	}
	if (y != 1)
	{
		cout << x << " " << y - 1 << endl;
	}
	if (y != n)
	{
		cout << x << " " << y + 1 << endl;
	}
	return EXIT_SUCCESS;
}