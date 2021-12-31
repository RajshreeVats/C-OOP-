#include <iostream>
#include <string.h>
 
using namespace std;
 

class Multiplystr {
 
public:

    char str[100];
 
  
    Multiplystr() {}
 

    Multiplystr (char str[])
    {
        strcpy(this->str, str);
    }

    Multiplystr  operator+(Multiplystr & S)
    {
        int n;
        Multiplystr S1;
 
         strcat(this->str, S.str);
        strcpy(S1.str, this->str);

         for (int i=1; i<n;i++)
           S = S + S1;
 
     
        return S1;
    }
};
 

int main()
{
   int n;
     cout<<"enter number of times :- ";
     cin>>n;
    char str1[] = "Rajshree";
 
  
    Multiplystr a1(str1);
    Multiplystr a2;
    for(int i=1;i<=n;i++) {
        a2 = a1 + a2;
    }
    cout << "Concatenation: " << a2.str;
 
    return 0;
}