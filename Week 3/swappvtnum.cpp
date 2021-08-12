#include <iostream>
using namespace std;

class b;
class a
{
	int x;
	public:
	a(int c)
	{
		x=c;
	}
	friend void swap(a,b);
};
class b
{
	int y;
	public:
	b(int d)
	{
		y=d;
	}
	friend void swap(a,b);
};
void swap(a e,b f)
{
	int temp;
	temp=e.x;
	e.x=f.y;
	f.y=temp;
	cout<<"after swapping value of class a="<<e.x<<endl;
	cout<<"after swapping value of class b="<<f.y<<endl;
}
int main() {
	a e(5);
	b f(7);
	swap(e,f);
	return 0;
}