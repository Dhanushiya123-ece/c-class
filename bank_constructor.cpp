#include <iostream>
using namespace std;
class person{
    public:
    string name;
    int aadhar;
    int pan;
    person(string person_name,int person_aadhar,int person_pan)
    {
        name=person_name;
        aadhar=person_aadhar;
        pan=person_pan;
    }
    void intro()
    {
        cout<<"USER NAME: "<<name<<endl<<"AADHAR NUMBER: "<<aadhar<<endl<<"PAN CARD NUMBER: "<<pan<<endl;
    }
 
};
int main(){
    person p1("Latha",12345678,987654454);
    person p2("Dhanushiya",89076541,981627181);
    p1.intro();
    p2.intro();
}