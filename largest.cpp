#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter 3 values: " << endl;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "The greatest number is: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "The greatest number: " << b << endl;
    }
    else
    {
        cout << "The greatest number is: " << c << endl;
    }
    return 0;
}
