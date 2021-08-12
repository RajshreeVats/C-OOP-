#include<iostream>
    using namespace std;
    float vol(int,int);
    float vol(float);
    int vol(int, int, int);
     
    int main()
    {
        int r,h,a,l,b;
        float r1;
        cout<<"Enter radius and height of a cylinder:";
        cin>>r>>h;
        cout<<"Enter width, height and length of cubiod:";
        cin>>a>>l>>b;
        cout<<"Enter radius of sphere: ";
        cin>>r1;
        cout<<"Volume of cylinder is "<<vol(r,h);
        cout<<"\nVolume of cubiod is "<<vol(l,a,b);
        cout<<"\nVolume of sphere is "<<vol(r1);
        return 0;
    }
    float vol(int r,int h)
    {
        return(3.14*r*r*h);
    }
    float vol(float r1)
    {
        return((4*3.14*r1*r1*r1)/3);
    }
    int vol(int a, int l, int b)
    {
        return(a*l*b);
    }