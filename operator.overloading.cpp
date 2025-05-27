#include <iostream>
using namespace std;
class distance
{
public:
    int meters, centimeters;
    distance(int m = 0, int cm = 0)
    {
        meters = m;
        centimeters = cm;
    }
    distance operator+(distance d)
    {
        distance temp;
        temp.centimeters = centimeters + d.centimeters;
        temp.meters = meters + d.meters + temp.centimeters / 100;
        temp.centimeters %= 100;
        return temp;
    }
    void display()
    {
        cout << meters << "m" << centimeters << "cm" << endl;
    }
    int main()
    {
        distance d1(1, 80), d2(2, 30);
        distance d3 = d1 + d2;
        d3.display();
        return 0;
    }
};
