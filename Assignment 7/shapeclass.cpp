#include<iostream>
#include<stdio.h>
using namespace std;

class Shape {
    public :
};
class circle: public Shape
{
   float r; 
   public:
    void area()
   {
       cout<<"\nEnter radius : ";
       cin>>r;
       cout<<"\nArea of circle : "<<(2.146*r*r);
   }
};
class rectangle: public Shape
{
	int l,b; 
	public:
   void area()
   {
       cout<<"\nEnter length : ";
       cin>>l;
       cout<<"\nEnter breadth : ";
       cin>>b;
       cout<<"\nArea of rectangle : "<<l*b;
   }
};
class triangle: public Shape
{

	int h,b;
       float a;
	public:
       void area()
       {
   	    cout<<"\nEnter height : ";
            cin>>h;
            cout<<"\nEnter breadth : ";
            cin>>b;
            a=0.5*h*b;
            cout<<"\nArea of triangle : "<<a;
       }
};
int main()
{
   circle a; 
   rectangle b; 
   triangle c; 
   a.area();
   b.area();
   c.area();
   return(0);
}