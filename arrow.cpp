#include <iostream>
using namespace std;

class Person
{
    public:
    string name ="Default Name";

    Person(string name)
    {
        this->name=name;
    }

    void Print()
    {
        cout<<name<<endl;
    }
};

int main()
{
    Person P1("rose");
    P1.Print();
}