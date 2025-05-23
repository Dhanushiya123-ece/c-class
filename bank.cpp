#include <iostream>
using namespace std;

class person{
    public:
    string name;
    string aadhar;
    

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
    
    
    aadhar_number[0].aadhar="1";
    aadhar_number[1].aadhar="2";
    aadhar_number[2].aadhar="3";
    for (int i=0;i<5;i++)
    {
        cout<< aadhar_number[i].aadhar<<endl;
    }

 }