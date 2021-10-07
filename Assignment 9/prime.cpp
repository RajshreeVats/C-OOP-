#include <iostream>
using namespace std;


int absolute(int x, int y) {
    string s;
    x=0; y=0;
    for(int i=0; i<s.size(); i++)
     { 
       if(i%2==0) 
		   x = x + s[i];
	   if(i%2!=0) 
	       y = y + s[i];
     }
     return abs(y - x);
}
int main()
{
	int i,n,j;
	int sumodd=0, sumeven = 0;
	int ab;
    string s;
	cin>> n;
	for (j = 1; j<=n; j++) {
		cin >> s;
    }
    for(int k = 0; k<n; k++) {
     ab = absolute(sumeven,sumodd);
    }
    for(int k = 0; k<n; k++) {
         if ( ab%3==0 || ab%5==0 || ab%7==0 ) 
		  cout<<"Prime String"<<endl;
	  
	  else if ( ab%3!=0 || ab%5!=0 || ab%7!=0 ) 
		  cout<<"Casual String"<<endl;
	  else 
	      return -1;
    }
	  
	
	return 0;
}