#include <iostream>
using namespace std;
class A{
    private:
    int x=5;
    int y=10;
    void greet()
    {
        cout<<"greeting"<<endl;
       
    }
     friend void show(A);
};
void show(A obj)
{
    cout<<"value of x: "<<obj.x<<endl;
    cout<<"value of y: "<<obj.y<<endl;
    obj.greet();
} 
int main(){
    A a; 
    return 0;

}