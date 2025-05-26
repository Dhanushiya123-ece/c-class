#include <iostream>
using namespace std;
int main()
{
    int largest, i;
    int array[5] = {1, 2, 30, 4, 5};
    {
        largest = array[0]; // starting from first number
        for (i = 1; i < 5; i++)
        {
            if (array[i] > largest)
            { // comparing the first number with others
                largest = array[i];
            }
        }
        cout << "the largest number is: " << largest << endl;
        return 0;
    }
}
