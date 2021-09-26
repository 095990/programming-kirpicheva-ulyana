#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a > b)
    {
        swap(a, b);
    }
    if (b > c)
    {
        swap(b, c);
    }
    if (a > b)
    {
        swap(a, b);
    }

    if ((b + c) > a && (c + a) > b && (b + a) > c)
    {
        if (c * c == a * a + b * b)
        {
            cout << "right";
        }
        else if (c * c < a * a + b * b)
        {
            cout << "acute";
        }
        else
        {
            cout << "obtuse";
        }
    }
    else
    {
        cout << "impossible";
    }
    return EXIT_SUCCESS;
}