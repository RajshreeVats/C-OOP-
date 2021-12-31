#include <iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout << "Base Constructor \n";
}

  virtual ~Base(){
      cout << "Base Destructor \n";
 }
};
class Derived: public Base{
public:
  int *n;
  Derived(){
      cout << "Derived Constructor \n";
      n = new int(10);
      }
      void display(){
          cout<< "Value: "<< *n << endl;
          }
          ~Derived(){
              cout << "Derived Destructor \n";
              delete(n);
              }
};
int main()
{
    Base *obj = new Derived();
    delete(obj);
    return 0;
}