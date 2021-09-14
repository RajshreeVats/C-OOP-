#include <iostream>
using namespace std;
 
class base1
{
    protected:
    int y;
   public:

  base1 (void){
      cout << " constructor of class base1\n";
    }

   ~base1 () {
      cout << " destructor of class base1\n";
   }
 
};
 
class derive1 : public base1
{
    
    public:
    derive1(void)
    {
     cout << " constructor of class derive1\n";
    }
    ~derive1()
    {
        cout << " destructor of class derive1\n";    
    }
};
 
int main ()
{
    derive1 x;
    cout << " Destructors are: "<<endl; 
}