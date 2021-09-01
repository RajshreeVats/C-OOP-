#include<iostream>
using namespace std;

class swapnum {
        public:
        void swap (int &num1, int &num2)  {
           int temp;
           temp=num1;
           num1=num2;
           num2=temp;
      }
};


int main()
{
        swapnum s;
        int a=5,b=10;
        cout<<"\n Before swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        s.swap(a,b);
        cout<<"\n After swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        return 0;
}
