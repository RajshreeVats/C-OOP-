#include<bits/stdc++.h>
using namespace std;
class comp{
    int real;
    int img;
    public:
    void input()
    {
        cout<<"enter real part"<<endl;
        cin>>real;
        cout<<"enter virtual part"<<endl;
        cin>>img;
    }
    void display()
    {
        cout<<"complex number"<<endl;
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    class comp number[10];
    for(int i=0;i<10;i++)
    {
        number[i].input();
        number[i].display();
    }
}