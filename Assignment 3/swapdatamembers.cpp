#include <iostream>
   
using namespace std;   
class Swap {   
    int num;  
public:
    Swap(int num)
    {
        this->num = num;
    }
    friend void swap(Swap&, Swap&);
};
void swap(Swap& s1, Swap& s2)
{
    int temp;
    cout << "\nBefore Swapping: " << s1.num << " " << s2.num;
    temp = s1.num;
    s1.num = s2.num;
    s2.num = temp;
    cout << "\nAfter Swapping: " << s1.num << " " << s2.num;
}
int main()
{
    
    int a,b;
    cout<<"\nEnter the nos\n";
    cin>>a>>b;
	Swap s1(a), s2(b);
    swap(s1,s2);
    return 0;
}

