#include<iostream>
using namespace std;

class two;
class one {
    int i,j;
    public:
    void getinfo(){
        cout<<"enter 2 numbers";
        cin>>i>>j;
    }
    friend void swap(one, two);

};
class two {
    int x,y;
    public:
    void getinfo(){
        cout<<"enter 2 numbers";
        cin>>x>>y;
    }
    friend void swap(one, two);

};

int main(){
    one a;
    two b;
    a.getinfo();
    b.getinfo();
    swap(a,b);
    return 0;

}

void swap(one p , two q) {
    int temp;
    temp = p.i;
    p.i=q.x;
    q.x=temp;
    temp=p.j;
    p.j=q.y;
    q.y=temp;
    cout<<"swaped values : "<<p.i<<endl<<p.j<<endl<<q.x<<endl<<q.y;
    
}