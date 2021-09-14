#include <iostream>
using namespace std;
 
class order
{
    protected:
    int x;
public:
  order (void){
      cout << " constructor of class \n";
    }

   ~order () {
      cout << " destructor of class \n";
   }
 
};
 
class base1 : virtual public order
{
    protected:
    int a;
    
    public:
    base1(void)
    {
        cout << " constructor of class base1\n";     
    }
    ~base1()
    {  
        cout << " destructor of class base1\n";
    }
    
};
class base2
{  
    protected:
    int y;
    public:
    base2(void)
    {
        cout << " constructor of class base2\n";     
    }
    ~base2()
    {  
        cout << " destructor of class base2\n";
    }
    
};
class derive : public base1, public base2
{ 
    public:
    derive(void)
    {
     cout << " constructor of class derive1\n";
    }
    ~derive()
    {
        cout << " destructor of class derive1\n";    
    }
};
 
int main ()
{
    derive x;
    cout << " Destructors are: "<<endl;
 
 return 0;
}