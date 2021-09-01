#include<iostream>
#include<iomanip>
using namespace std;
 
class Time
{
        int hour;
        int minute;
    public :
        Time(int h = 0, int m  = 0); 
        void setTime(int h, int m);
        void print();
        
};
 
Time :: Time(int h, int m)
{
    hour = h;
    minute = m;
}
 
void Time :: setTime(int h, int m )
{
    hour = h;
    minute = m;  

}        
 
void Time :: print()
{
    cout<< setw(2) << setfill('0') << hour<< ":" << setw(2) << setfill('0') << minute << ":"<<endl;
         
}
 
 
int main()
{
    int a,b;
    cout<<"enter hour and minute : "<<endl;
    cin>>a>>b;
    Time t1(a, b);
    t1.print(); 
    Time t2;  
    t2.print(); 
    t2.setTime(2, 40);
    t2.print();  
   
    
    return 0;
}