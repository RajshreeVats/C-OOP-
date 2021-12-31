#include<iostream>
using namespace std;
class array
{
    int ar[5];
    public:
    void input()
    {
        cout<<"Enter the elemnts:"<<endl;
        int i;
        for(i=0;i<5;i++)
         cin>>ar[i];
    }
    void display()
    {
        int i;
        for(i=0;i<5;i++)
         cout<<ar[i]<<" ";
        cout<<endl;
    }
    array operator+(array a)
    {
        int i;
        array temp;
        for(i=0;i<5;i++)
         temp.ar[i]=ar[i]+a.ar[i];
        return temp;
    }
    array operator*(array a)
    {
        int i;
        array temp;
        for(i=0;i<5;i++)
         temp.ar[i]=ar[i]*a.ar[i];
        return temp;
    }
};
int main()
{
    class array a;
    cout<<"For first array ";
    a.input();
    class array b;
    cout<<"For array 2 ";
    b.input();
    cout<<"The arrays are:\n";
    a.display();
    b.display();
    class array c;
    c=a+b;
    cout<<"After addition:\n";
    c.display();
    c=a*b;
    cout<<"After multiplication:\n";
    c.display();
    return 0;
}