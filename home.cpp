#include <iostream>
using namespace std;
float areaofcircle(float r)
{
    return 3.14 * r * r;
}

float areaofrectangle(float h, float b)
{

    return h * b;
}

float areaoftraingle(float b, float h)
{
    return 0.5 * b * h;
}
int main()
{
    float fullarea = areaofrectangle(10, 10) + areaoftraingle(5, 12);
    float subarea = areaofrectangle(3, 7) + areaofcircle(2) + areaoftraingle(2, 3);
    cout << fullarea - subarea << endl;
}