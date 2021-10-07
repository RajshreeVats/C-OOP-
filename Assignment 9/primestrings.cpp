/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for (int i=0; i<a; i++) {
		string b,c;
		cin>>b>>c;
		int sumodd1=0, sumeven1 = 0, sumodd2=0, sumeven2 = 0;
	    int ab1=0, ab2=0;
	 for(int j=0; j<b.size(); j++)
     { 
       if(j%2==0) 
		   sumeven1 = sumeven1 + b[j];
	   if(j%2!=0) 
	       sumodd1 = sumodd1 + b[j];
    }
	
    ab1 = abs(sumodd1 - sumeven1);
    
	  if ( ab1%3==0 || ab1%5==0 || ab1%7==0 ) {
          cout<<"Prime String"<<endl;
      }
		 
	  
	  else if ( ab1%3!=0 || ab1%5!=0 || ab1%7!=0 ) {
            cout<<"Casual String"<<endl; 
      }
      else {
          return -1;
      }

      for(int k=0; k<c.size(); k++)
     { 
       if(k%2==0) 
		   sumeven2 = sumeven2 + c[k];
	   if(k%2!=0) 
	       sumodd2 = sumodd2 + c[k];
    }
	
    ab2 = abs(sumodd2 - sumeven2);
    
	  if (ab2%3==0 || ab2%5==0 || ab2%7==0 ) {
          cout<<"Prime String"<<endl;
      }
		 
	  
	  else if ( ab2%3!=0 || ab2%5!=0 || ab2%7!=0 ) {
            cout<<"Casual String"<<endl; 
      }
      else {
          return -1;
      }
	}
	return 0;
	//Write code here
}

/* #include <iostream>
using namespace std;
#include <iostream>
#include <cstring>
#include <cstdlib>

int main() {
    int n;
    string s;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        char chr[s.length() + 1];
        strcpy(chr, s.c_str());
        int k = 0;
        int even = 0;
        int odd = 0;
        for (char c : chr) {
            if (k % 2 == 0) even += c;
            else odd += c;
            k += 1;
        }
        int diff = labs(odd - even);
        if (diff % 3 == 0 || diff % 5 == 0 || diff % 7 == 0) 
            cout << "Prime String" << endl;
        else cout << "Casual String" << endl;
    }
    return 0;
} */