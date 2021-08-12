#include <bits/stdc++.h>
using namespace std;

class MyClass {    
    float x1, y1, x2, y2, dist;     
  public: 
  void distance ()     {
      cout<<"enter 4 points: ";
      cin>>x1>>y1>>x2>>y2;
      dist =  sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
      cout<<"Distance is : "<<dist<<endl;
  }        
   
};

int main() {
  MyClass myObj;
  myObj.distance();
  return 0;
}