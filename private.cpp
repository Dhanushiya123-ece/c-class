#include <iostream>
using namespace std;
class person{
    public:
    void hello(){
        cout<<"hello"<<endl;
    }
    private:  //private doesn't allow the body present inside it outside
    void hello2(){
        cout<<"hello 2"<<endl;
    }
};

int main(){
    person p1;
    p1.hello();
   
}