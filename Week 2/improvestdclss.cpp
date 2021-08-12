#include <bits/stdc++.h>
using namespace std;

class student {
    int roll;
    int marks[5];
    char name[50];
    float total = 0;
    float percent;
    public:
    void getinfo() {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll: ";
        cin>>roll;
        cout<<"Enter marks in 5 subjects: ";
        for(int i = 0; i<5; i++) {
            cin>>marks[i];
            total+=marks[i];
        }
        percent = total/0.05;
        
    }

    void display() {
        cout<<"NAME"<<name<<endl;
        cout<<"ROLL"<<roll<<endl;
        cout<<"TOTAL MARKS"<<total<<endl;
        cout<<"Percentage"<<percent<<endl;
    }
};

int main () {
    student s1;
    s1.getinfo();
    s1.display();

    return 0;
}