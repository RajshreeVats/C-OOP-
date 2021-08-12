#include <bits/stdc++.h>
using namespace std;

class student {
    int roll;
    int marks;
    char name[50];
    public:
    void getinfo() {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll: ";
        cin>>roll;
        cout<<"Enter marks: ";
        cin>>marks;
    }

    void display() {
        cout<<"NAME"<<name<<endl;
        cout<<"ROLL"<<roll<<endl;
        cout<<"TOTAL MARKS"<<marks<<endl;
    }
};

int main () {
    student s;
    s.getinfo();
    s.display();

    return 0;
}