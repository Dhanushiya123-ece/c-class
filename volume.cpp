#include <iostream>
using namespace std;
float cube(float a)
{
    float c = a * a * a;
    return c;
}
int main()
{
    float x, result;
    cout << "enter the area of the cube: " << endl;
    cin >> x;
    result = cube(x);
    cout << "the volume of the cube is: " << result << endl;
}