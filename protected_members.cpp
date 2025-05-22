#include <iostream>
using namespace std;
class base
{
    protected:
    int x; 
};
class derived:public base
{
    public:
    void setX(int val)
    {
        x=val;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
main(){
    derived d;
    d.setX(20);
    d.display();
    return 0;

}
