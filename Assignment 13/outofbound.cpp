
#include <iostream>
using namespace std;
int main () {
  int myarray[10];
  try
  {
    for (int n=0; n<=10; n++)
    {
      if (n>9) 
          throw(n);
      myarray[n]= 11;
       
    }
    
  }
  
  catch (int n)
  {
    cout << "Out of bound" << endl;
    cout << "Exception: " <<  myarray[n]+1<< endl;
  }
  return 0;
}