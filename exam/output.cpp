#include <iostream>
using namespace std;
class B;
class A
{ int a1;
public:
A(int x1)
{ a1=x1; }
friend void fun(A &x, B y);
void show(){ cout << al<<"\n";}};
friend void fun(A &x, B y);
};
void fun(A &x, B y)
{
y.bı=(y.b1)*(x.a1);
x.a1=(y.b1)-(x.a1);
}
int main()
{
A p(20);
B q(30);
fun(p.q); p.show();
q.show();return o;
}