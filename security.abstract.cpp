#include <iostream>
using namespace std;
class security
{
    public:
    virtual void cctv(string c)=0;
    virtual void dogs(string d)=0;
    virtual void security(string s)=0;
};
class home: public security{
    public:
    void cctv(string c)override
    {
        cout<<"axis"<<endl;
    }
    void dogs(string d)override
    {
        cout<<"german shephard"<<endl;
    }
    void security(string s)override
    {
        cout<<"crown security agencies"<<endl;
    }
};
int main(){
    home h1;
    h1.cctv("INSTALLED SUCCESSFULLY!!!");
    h1.dogs("BOW BOW!!");
    h1.security("ARRIVED!!!!");
}