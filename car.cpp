#include <iostream>
using namespace std;
class car{
    public:
    void show(){
        cout<<"stop the car! where is your license???"<<endl;
    }
};
int main(){
    car* c=new car;
    c->show();
    delete c;
    return 0;
}