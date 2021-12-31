#include<iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    friend ostream &operator<<(ostream &output, const Distance &D)
    {
        output << "F : " << D.feet << " I : " << D.inches;
        return output;
    }
    friend istream &operator>>(istream &input, Distance &D)
    {
        input >> D.feet >> D.inches;
        return input;
    }
    
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        return temp;
    }
};
int main()
{
    Distance D1(20, 15), D2(15, 9), D3, D4;
    cout << "Enter the value of object : " << endl;
    cin >> D3;
    cout << "D1 : " << D1 << endl;
    cout << "D2 :" << D2 << endl;
    cout << "D3 :" << D3 << endl;
    cout << "Add : d1 and d2 -" << endl;
    D4 = D1 + D2;
    cout << D4 << endl;
    return 0;
}