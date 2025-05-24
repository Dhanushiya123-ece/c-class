#include <iostream>
#include <vector>
using namespace std;
class person{
    public:
    string name;
    string aadhar;
    string pan;
    person(string person_name, string person_aadhar,string person_pan )
    {
        name=person_name;
        aadhar=person_aadhar;
        pan=person_pan;
    }
    void display_details()
    {
        cout<<"USER DETAILS:"<<endl;
        cout<<"USERNAME: "<<name<<endl;
        cout<<"AADHAR NUMBER: "<<aadhar<<endl;
        cout<<"PAN CARD NUMBER: "<<pan<<endl;
        cout<<"============================="<<endl;
    }
    

};
int main(){
    
}