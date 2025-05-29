#include <iostream>
using namespace std;
float rec(float a, float b)
{
    float c = a * b;
    return c;
}
int main()
{
    float x, y, result;
    cout << "enter the width of the rectangle: " << endl;
    cin >> x;
    cout << "enter the length of the rectangle: " << endl;
    cin >> y;
    result = rec(x, y);
    cout << "The area of the rectangle: " << result << endl;
}