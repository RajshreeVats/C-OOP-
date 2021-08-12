#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class DB;
 
class DM
{	public:
	float meter;
	void getdata()
		{cout<< "enter distance in meters and centimeters :" ;
			cin>> meter  ;
		}
	friend void compare();
} a1;

class DB
{	public:
	float inch;
	void getdata() 
		{cout<< "enter distance in feets and inches :" ;
			cin>> inch  ;
		}
	friend void compare();
} a2;

void compare()
{	float a, res;
	a=a1.meter*39.37;
	res=a+a2.inch;
		cout<< " total inches = " << res <<endl;
	a=a2.inch/39.37;
	res=a+a1.meter;
		cout<< " total meters = " << res ;
} 
main()
{	a1.getdata();
	a2.getdata();
	compare();
	getch();
	return 0;
	
}