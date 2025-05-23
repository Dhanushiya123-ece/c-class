#include <iostream>
using namespace std;

class person{
    public:
    string name;
};
 int main(){
    person list_of_person[5];
    list_of_person[0].name="user 1";
    list_of_person[1].name="user 2";
    list_of_person[2].name="user 3";
    for (int i=0;i<5;i++)
    {
        cout<< list_of_person[i].name<<endl;
    }
    

 }