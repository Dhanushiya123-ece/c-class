#include <iostream>
using namespace std;
class person{
    public:
    string name;
    void setname(){
        cout<<"Enter the name: ";
        cin>>name;
    }
    void getname(){
        cout<<name<<endl;
    }
};
int main(){
    person *listofpeople=new person[3];
    for(int i=0;i<3;i++){
        listofpeople[i].setname();
    }
    for(int i=0;i<3;i++){
        listofpeople[i].getname();
    }
}