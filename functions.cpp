#include <iostream>
using namespace std;
void myfunction()
{
    int a, b;
    cout << "enter the value for a: ";
    cin >> a;
    cout << "enter the value for b: ";
    cin >> b;
    cout << a + b << endl;
}
int main()
{
    myfunction();
    return 0;
}