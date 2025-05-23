#include <iostream>
using namespace std;
class car{
    public:
    string model;
    float price;
    car(string m,float p){
        model=m;
        price=p;
        cout<<"car created:"<<model<<endl;
    }
    ~car(){
        cout<<"car destroyed:"<<model<<endl;
    }
};
int main(){
    car c("Tesla",50000);
    return 0;
}
