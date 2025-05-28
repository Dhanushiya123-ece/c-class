#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string *food_address = &food;

    cout<<"Value of Food:"<<food<<endl;
    cout<<"Address of Food:"<<food_address<<endl;

    *food_address ="Biriyani";
    cout<<"Value of Food:" <<food<<endl;
    cout<<"Address of Food:"<<food_address<<endl;
}