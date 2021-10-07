#include<bits/stdc++.h>
using namespace std;

class date
{
public:
    int dd;
    int mm;
    int yyyy;
};

class student: public date{
    string name;
    date dob;
    date doj;

    public:
    void input()
    {
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Date of Birth:(dd-mm-yyyy): ";
        cin >> dob.dd >> dob.mm >> dob.yyyy;
        cout << "Enter the Date of Joining:(dd-mm-yyyy): ";
        cin >> doj.dd >> doj.mm >> doj.yyyy;
    }
    void display()
    {
        cout << name<<"\t";
        cout << dob.dd << "-" << dob.mm << "-" << dob.yyyy << "\t\t";
        cout << doj.dd << "-" << doj.mm << "-" << doj.yyyy << endl;
    }
};

int main()
{
    student s[10];
    for (int i = 0; i < 10;i++)
    {
        cout << endl;
        cout << i << endl;
        s[i].input();
    }

    cout << "Name\tDate_of_birth\tDate_of_joining\n";
    for (int i = 0; i < 10;i++)
        s[i].display();
    
    return 0;
}
