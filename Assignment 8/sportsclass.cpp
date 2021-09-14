#include<iostream>
#include<string.h>
using namespace std;

class student
{
protected:
    char name[50];
    int roll;
    int age;
public:
    student(char *n, int r, int a)
    {
        strcpy(name,n);
        roll=r;
        age=a;
    }
};

class test: public student
{
protected:
    float marks1, marks2, marks3, marks4, marks5;
public:
    test(char *n, int r, int a, int m1, int m2, int m3, int m4, int m5): student(n, r, a)
    {
        marks1=m1;
        marks2=m2;
        marks3=m3;
        marks4=m4;
        marks5=m5;
    }
};

class sports
{
protected:
    float sa;
public:
    sports(int s)
    {
        sa=s;
    }
};

class result: public test, public sports
{
    float total=0, percentage=0;
public:
    result(char *n, int r, int a, int m1, int m2, int m3, int m4, int m5, int s): test(n,r,a,m1,m2,m3,m4,m4), sports(s)
    {
        total=m1+m2+m3+m4+m5+s;
        percentage=total/6;
    }
    void display_r()
    {
        cout<<"RESULT:\n";
        cout<<"Total: "<<total;
        cout<<"\nPercentage: "<<percentage<<endl;
    }

};

int main()
{
    char name[50];
    int m[5];
    int sa;
    int age, roll;
    cout<<"Enter the details of the student:\n";
    cout<<"\nNAME: ";
    cin>>name;
    cout<<"ROLL NO.: ";
    cin>>roll;
    cout<<"AGE: ";
    cin>>age;
    cout<<endl;
    cout<<"Enter Marks:\n";
    for(int i=0; i<5; i++)
    {
        cout<<"m"<<i+1<<": ";
        cin>>m[i];
    }
    cout<<"\n Sports Activity: ";
    cin>>sa;
    cout<<endl;
    result r(name, roll, age, m[0],m[1],m[2],m[3],m[4], sa);
    r.display_r();
}
