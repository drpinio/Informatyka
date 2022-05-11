// 1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, i;
    a = 1;
    b = 1;
    c = a + b;
    i = 1;
    int x;
    cout << "podaj x" << endl;
    cin >> x;
    do
    {
        a = b;
        b = c;
        c = a + b;
        i++;
        cout << "Fibb" << "=" << a << endl;
    } while (x != i);
    return 0;
}


