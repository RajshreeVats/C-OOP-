#include<iostream>
using namespace std;

class complex {
    int real;
    int img;
    public:
   
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int r, int i){
    real = r;
    img = i;
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    ~complex()
    {
        cout << "Destructor invoked";
    }
};

int main(){
    int a,b;
    cout<<"enter real and img part : "<<endl;
    cin>>a>>b;
    complex c1,c2(a,b);
    c1.display();
    c2.display();
    complex c3(c1);

    return 0;
}
