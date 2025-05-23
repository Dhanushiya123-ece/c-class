#include <iostream>
#include <vector>
using namespace std;
class person{
    public:
    string name;
   
    string pancard;
    person(string person_name,string person_pan=0 )
    {
        name=person_name;
       
        pancard="";
    }
    void display_details()
    {
        cout<<"USER DETAILS:"<<endl;
        cout<<"USERNAME: "<<name<<endl;
        
        cout<<"PAN CARD NUMBER: "<<pancard<<endl;
        cout<<"============================="<<endl;
    }
    

};
int main()
{
    string name,pancard;
    vector <person> list_of_users;
    for(int i=0;i<2;i++){
        cout<<"Enter the name "<<i+1<<":"<<endl;
        cin>>name;
        cout<<"enter the pancard"<<i+1<<":"<<endl;
        cin>>pancard;
        list_of_users.push_back(person(name,pancard));
    }

    for (person user : list_of_users)
    {
        user.display_details();


    }
}