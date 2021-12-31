#include<iostream>
using namespace std;

class Distance
{
    int feet;
    int inch;
public:
    void getData()
    {
        cout<<"\nEnter distance(ft/in) :"<<endl;
        cin>>feet>>inch;
    }
    void putData()
    {
        cout<<"\nFeet = "<<feet<<", Inch = "<<inch<<endl;
    }
    void operator +=(Distance D2)
    {
        feet+=D2.feet;
        inch+=D2.inch;
        feet += inch / 12;
        inch = inch % 12;
    }
};

int main()
{
    Distance D1,D2;
    D1.getData();
    D2.getData();
    D1+=D2;
    D1.putData();
    return 0;
}