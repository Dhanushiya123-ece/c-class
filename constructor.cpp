#include <iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(int person_age,string person_name)
    {
        name=person_name;
        age=person_age;
    }
    void intro()
    {
        cout<<"my name is "<< name << endl <<"my age is "<< age <<endl;
        
    }
};
int main(){
    person P1(20, "Latha doddmani");
    person P2(19, "Dhanushiya ");
    P1.intro();
    P2.intro();

}