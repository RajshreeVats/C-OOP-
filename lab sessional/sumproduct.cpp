#include<iostream>
using namespace std;

void sum(int a, int b, int c=0, int d=0) {
    int sum=0;
    sum = a+b+c+d;
    cout<<"sum : "<<sum<<endl;
}
void product(int a, int b, int c=1, int d=1) {
    int res;
    res = a*b*c*d;
    cout<<"product : "<<res<<endl;
}

int main(){
    int a,b,c,d;
    cout<<"enter 4 numbers : "<<endl;
    cin>>a>>b>>c>>d;
    sum(a,b);
    sum(a,b,c,d);
    product(a,b);
    product(a,c);
    product(a,b,c);
}