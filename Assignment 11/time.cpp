#include <bits/stdc++.h>
using namespace std;
class Time
{
    int hour, min, sec;

public:
    Time()
    {
        hour = 0, min = 0; sec = 0;
    }

    Time(int h, int m, int s)
    {
        hour = h, min = m;
        sec = s;
    }

    friend bool operator==(Time &t1, Time &t2);
};
bool operator==(Time &t1, Time &t2)
{
    return (t1.hour == t2.hour && t1.min == t2.min && t1.sec == t2.sec);
}
int main()
{
    int h1,m1,s1,h2,m2,s2;
    cout<<"Enter the fist hour minute and second:"<<endl;
    cin>>h1>>m1>>s1;
    cout<<"Enter the second hour minute and second:"<<endl;
    cin>>h2>>m2>>s2;
    Time t1(h1,m1,s1);
    Time t2(h2, m2, s2);
    if (t1 == t2)
    {
        cout << "Times values are equal";
    }
    else
    {
        cout << "Times values are not equal";
    }
}