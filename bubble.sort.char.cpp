#include <iostream>
using namespace std;
void BubbleSort(char arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            char temp;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void print(char arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    char array[] = {'a', 'g', 'b', 'j', 'z', 't', 'c'};
    int arraysize = sizeof(array) / sizeof(array[0]);
    print(array, arraysize);
    BubbleSort(array, arraysize);
    print(array, arraysize);
}