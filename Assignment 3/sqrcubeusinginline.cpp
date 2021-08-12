#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class line
{
  public:
  inline float multi(float a)
   {
     return(a*a);
    }
  inline float cube(float a)
   {
     return(a*a*a);
   }
};
int main()
{
  line obj;
  float a1;
  cout<<"\n Enter Value ";
  cin>>a1;
  cout<<" square of value is :"<<obj.multi(a1)<<endl;
  cout<<" Cube of value is :"<<obj.cube(a1)<<endl;
  return 0;
}