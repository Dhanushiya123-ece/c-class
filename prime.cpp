#include <iostream>
using namespace std;

bool primechecking(int number)
{

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num, result;
    cout << "enter a number: " << endl;
    cin >> num;
    result = primechecking(num);
    if (result)
    {
        cout << "it is prime number" << endl;
    }
    else
    {
        cout << "it is not prime number" << endl;
    }
}