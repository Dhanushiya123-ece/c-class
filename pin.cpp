#include <iostream>
using namespace std;
class passwordchecker{
    private:
    int pin;
    public:
    void setpin(int p){
        pin=p;

    }
    void login(int pin_number)
    {
        if(pin==pin_number)
        {
            cout<<"loggedin"<<endl;

        }
        else
        {
            cout<<"wrong pin"<<endl;
        }
    }
};
int main(){
    passwordchecker p1;
    p1.setpin(1234);
    p1.login(2345);
    p1.setpin(2345);
    p1.login(2345);

}