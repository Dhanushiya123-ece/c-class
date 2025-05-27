#include <iostream>
using namespace std;
int main()
{
    float weight, height, bmi;
    cout << "Enter the weight in kilograms: " << endl;
    cin >> weight;
    cout << "Enter the height in meters: " << endl;
    cin >> height;
    bmi = weight / (height * height);
    cout << "BMI: " << bmi << endl;
    return 0;
}