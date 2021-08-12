#include <bits/stdc++.h>
using namespace std;

class employee {
    int salary, gross;
    int num;
    int id;
    int age;
    char name[50];
    public:
    void getinfo() {
        cout<<"Enter employee no.: ";
        cin>>num;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter salary: ";
        cin>>salary;
    }

    void display() {
        gross  = salary + salary*0.8 + salary*0.1;
        
        cout<<"N0"<<num<<endl;
        cout<<"NAME"<<name<<endl;
        cout<<"AGE"<<age<<endl;
        cout<<"ID"<<id<<endl;
        cout<<"SALARY"<<salary<<endl;
        cout<<"GROSS"<<gross<<endl;
    }
};

int main () {
    employee e1;
    e1.getinfo();
    e1.display();
    return 0;
}