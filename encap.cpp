#include <iostream>
using namespace std;
class person{
    private:
    string name;
    string age;
    public:
    void setName(string n)
    {
        name=n;     

    }
    void setage(string a){
        age=a;
    }
    string getName(){
        return name;

    }
    string getage(){
        return age;
    }
};
int main(){
    person p1;
    p1.setName("jack");
    p1.setage("20");
    cout<<p1.getName()<<endl;
    cout<<p1.getage()<<endl;
}