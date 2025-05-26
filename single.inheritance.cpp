#include <iostream>
using namespace std;
class person
{
public:
    string name;
    char gender;
    int age;
};
class student : public person
{
public:
    string college;
    string department;
};

class teacher : public person
{
public:
    string college;
    int salary;
    string designation;
};
int main()
{
    student s1;
    teacher t1;
    s1.name = "latha";
    s1.gender = 'F';
    s1.age = 20;
    s1.college = "CITY Engineering College";
    s1.department = "ECE";
    t1.name = "varshini";
    t1.gender = 'F';
    t1.age = 40;
    t1.college = "CITY Engineering College";
    t1.designation = "TGT";
    t1.salary = 20000;
    cout << s1.name << endl;
    cout << s1.gender << endl;
    cout << s1.age << endl;
    cout << s1.college << endl;
    cout << s1.department << endl;
    cout << "====================" << endl;
    cout << t1.name << endl;
    cout << t1.gender << endl;
    cout << t1.age << endl;
    cout << t1.college << endl;
    cout << t1.designation << endl;
    cout << t1.salary << endl;
}