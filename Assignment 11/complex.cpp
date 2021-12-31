#include <bits/stdc++.h>

using namespace std;

 
class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)
    {  real = r;   imag = i; }
    friend  ostream & operator << (ostream &out,  Complex &c);
    friend  istream & operator >> (istream &in,  Complex &c1);
     friend void operator++(Complex &c);
 };
 
ostream & operator<<(ostream &out, Complex &c)
{
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}
 
istream & operator>>(istream &in,  Complex &c1)
{
    cout << "Enter Real Part ";
    in >> c1.real;
    cout << "Enter Imaginary Part ";
    in >> c1.imag;
    return in;
}
 void operator++(Complex &c1){
	int mod=0;
	mod=sqrt(pow(c1.real,2.0)+pow(c1.imag,2.0));
	printf("The mod is:%d",mod);
}

int main()
{
   Complex c1;
   cin >> c1;
   cout << "The complex object is ";
   cout << c1;
   ++c1;
   return 0;
}