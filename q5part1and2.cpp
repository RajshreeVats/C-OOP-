#include<iostream>
#include<math.h>
using namespace std;
class complex
{
int real,imag;
public:
  void initialize()
    {
     cout<<"enter real and imag part";
     cin>>real>>imag;
     }
    friend complex sum(complex,complex);
    friend complex diff(complex,complex);

    void display();
    void modulu();
    };
    void complex::display()
    {
    cout<<real<<"+i"<<imag;
    }
    complex diff(complex a,complex b)
    {
    complex t;
    t.real=a.real-b.real;
        t.imag=a.imag-b.imag;
    return t;
    }
    complex sum(complex a,complex b)
    {
    complex t;
    t.real=a.real+b.real;
    t.imag=a.imag+b.imag;
    return t;
    }
    void complex::modulu(){
    cout<<"modulus is "<<sqrt((pow(real,2))+(pow(imag,2)));
}

int main()

{

    complex a,b,c,d;
    a.initialize();
    b.initialize();
    cout<<"sum of numbers is: ";
    c=sum(a,b);
    c.display();
    cout<<"\nsubstraction of numbers are: ";
    d=diff(a,b);
    d.display();
    cout<<endl;
    a.modulu();
    cout<<endl;
    b.modulu();
    return(0);
}