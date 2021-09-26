#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
    int a = 0;
    int b = 0;
    int c = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    cin >> a >> b >> c >> x >> y >> z;
    cout << x * 3600 + y * 60 + z - a * 3600 - b * 60 - c;
    return EXIT_SUCCESS;
}