#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "It is even" << endl;
    }
    else
    {
        cout << "It is odd" << endl;
    }
    return 0;
}
