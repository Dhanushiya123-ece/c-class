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
    int a;
    string name,pancard;
    vector <person> list_of_users;
    
    
    while (true)
    {
        cout<<"choose an option 1 or 2: "<<endl;
    cin>>a;
        switch (a) 
        {
            case 1:
            cout<<"create account."<<endl;
            cout<<"Enter the name: "<<endl;
        cin>>name;
        cout<<"enter the pancard: "<<endl;
        cin>>pancard;
            break;
            case 2:
            cout<<"view account."<<endl;
            cout<<"Enter the name: "<<endl;
        cin>>name;
        cout<<"enter the pancard: "<<endl;
        cin>>pancard;
            break;
            default:
            cout<<"invalid "<<endl;
        }
        break; 
    }
} 