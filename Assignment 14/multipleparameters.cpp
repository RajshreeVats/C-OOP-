 #include<iostream>
using namespace std;
  

template<class T1, class T2>
class Test
{
        T1 a;
        T2 b;
    public:
        Test(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        void show()
        {
            cout << a << " and " << b << endl;
        }
};
  

int main()
{

    Test <string, int> test1 ("Hello!!", 56700);
      

    Test <float, char> test2 (56.700, 'W');   
      
    test1.show();
    test2.show();
      
    return 0;
}