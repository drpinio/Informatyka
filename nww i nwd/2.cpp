

#include <iostream>
using namespace std;
int nwd(int x, int y)
{
    do
    {
        if (x > y)
        {
            x = x - y;
        }
        if (y > x)
        {
            y = y - x;
        }

    } while (x != y);
    return x;
}
int nww(int x, int y)
{
    int c;
    c = x * y / nwd(x, y);
    return c;

}
int main()
{
    int a = 0;
    int b = 0;
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    cout << "Nwd to" << nwd(a, b) << endl;
    cout << "Nww to" << nww(a, b) << endl;
    return 0;
}


