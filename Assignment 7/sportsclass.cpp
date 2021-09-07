#include<iostream>
#include<stdio.h>
using namespace std;

class Student
{
        int roll;
        char name[25];
        int age;
    public:
        void getinfo()
        {
            cout<<"\n Enter Roll No.            : ";
            cin>>roll;
            cout<<"\n Enter Student Name        : ";
            cin>>name;
            cout<<"\n Enter Student Age       : ";
            cin>>age;

        }
         void display()
        {
            cout<<"\n Roll No.  :  "<<roll;
            cout<<"\n Student Name  :  "<<name;
            cout<<"\n Roll No.  :  "<<roll<<endl;
        }
};
class Sports { 

    protected:
     int totalsc, x;
    public:
    void sportsmarks() {
        cout<<"\n Enter Marks for Sports : ";
        cin>>x;
    }
    void sp_display() {
        cout<<"\n Marks of Sports   :  "<<x;
    }
    

};
class Test : public Student     
{
    public:
        int sub1, sub2, sub3, sub4, sub5, total;
        float per;
    public:
       void getmarks()
        {
            getinfo();
            cout<<"\n Enter Marks for Subject 1 : ";
            cin>>sub1;
            cout<<"\n Enter Marks for Subject 2 : ";
            cin>>sub2;
            cout<<"\n Enter Marks for Subject 3 : ";
            cin>>sub3;
            cout<<"\n Enter Marks for Subject 4 : ";
            cin>>sub4;
            cout<<"\n Enter Marks for Subject 5 : ";
            cin>>sub5;      
        }
        void display_marks()
        {
            display();
            cout<<"\n Marks of Subject 1   :  "<<sub1;
            cout<<"\n Marks of Subject 2   :  "<<sub2;
            cout<<"\n Marks of Subject 3   :  "<<sub3;
            cout<<"\n Marks of Subject 4   :  "<<sub4;
            cout<<"\n Marks of Subject 5   :  "<<sub5;
        }
};


class result : public Test, public Sports
 { 
     public:
      void Totalmarks ()
        {
            sportsmarks();
            total = sub1+sub2+sub3+sub4+sub5+x;
            cout<<"\n\n Total marks    :  "<<total; 
            per = (sub1+sub2+sub3+sub4+sub5+x)/6.0;
            cout<<"\n\n Total Percentage     :  "<<per;       
        }

};

int main()
{
        result str;     
        int cnt, i;
        cout<<"\n Enter No. of Students  : ";
        cin>>cnt;
        for(i=0; i<cnt; i++)
        {
            str.getmarks();
            str.display_marks();
            str.Totalmarks();
        }
        return 0;
}