#include <bits/stdc++.h>
using namespace std;

class employee {
    
    public:
};
class Regular : public employee {
    int salary, gross;
    int num;
    int id;
    int age;
    char name[50];
    public:
    void getinfoem() {
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
    void displayem() {
        gross  = salary + salary*0.8 + salary*0.1;
        
        cout<<"N0  :"<<num<<endl;
        cout<<"NAME  :"<<name<<endl;
        cout<<"AGE  :"<<age<<endl;
        cout<<"ID  :"<<id<<endl;
        cout<<"SALARY  :"<<salary<<"per hour"<<endl;
        cout<<"GROSS  :"<<gross<<endl;
    }



};
class Parttime : public employee {
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
        cout<<"Enter salary per hour: ";
        cin>>salary;
    }
    void display() {
        gross  = salary + salary*0.8 + salary*0.1;
        
        cout<<"N0  :"<<num<<endl;
        cout<<"NAME  :"<<name<<endl;
        cout<<"AGE  :"<<age<<endl;
        cout<<"ID  :"<<id<<endl;
        cout<<"SALARY  :"<<salary<<endl;
        cout<<"GROSS  :"<<gross<<endl;
    }

};


int main () {
    Regular e1; 
    Parttime e2;   
    int i, cnt;
    char ch;
    cout<<"\n Enter Type  of employment [1/0]  : ";
    cin>>ch;
    cout<<"\n Enter no  of employees  : ";
    cin>>cnt;
    if (cnt == '1'){
        for(i=0; i<cnt; i++)
      {
            e1.getinfoem();
            e1.displayem();
      }

    }
    else {
        for(i=0; i<cnt; i++)
      {
            e2.getinfo();
            e2.display();
      }
    }
    
    return 0;
}