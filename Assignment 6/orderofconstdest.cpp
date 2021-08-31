#include <iostream>
using namespace std;
 

class One
{  
    public: 
    One()
    {
        cout << "Inside first class" << endl;
    }
};
class two
{
    public:
    two()
    {
        cout << "Inside second class" << endl;
    }
};
class Subone : public One, public two
{
    public:
     
    Subone()
    {
        cout << "Inside Sub class" << endl;
    }
};
 

int main() {
     
    Subone obj;
    return 0;
}