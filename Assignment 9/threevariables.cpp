#include<iostream>
using namespace std;

int x = 10;  //global variable


int main()
{ 
    int x=20;
   cout<<"Enter x for global scope:";
   cin>>::x;
   cout<<"Enter x for outer nested  scope (local variable in main):";
   cin>>x;
   cout<<::x<<" is x of global scope"<<endl;
   cout<<x<<" is x of outer nested scope (local variable in main)"<<endl;
   {
   	int x=30;
   	cout<<"Enter x for inner nested  scope:";
   cin>>x;
   	cout<<x<<" is x of inner  nested scope"<<endl;
   }
   return 0;
}