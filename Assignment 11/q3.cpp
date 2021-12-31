#include<math.h>
#include <iostream>
using namespace std;

class test
{
  int *a;
  int n;
public:
  void input ()
  {
    cout << "enter number of elements in the array\n";
    cin >> n;
    a = new int[n];
    for (int j = 0; j < n; j++)
        cin >> a[j];
  }
  void display ()
  {
    for (int j = 0; j < n; j++)
      cout << a[j];
    cout << endl;
  }
  void increment ()
  {
    for (int j = 0; j < n; j++)
      a[j]++;
  }
  test operator= (test T)
  {
    n = T.n;
    a = new int[n];
    for (int j = 0; j < n; j++)
      a[j] = T.a[j];
    return *this;
  }
};

int
main ()
{
  test T1, T2;
  T1.input ();
  T2 = T1;
  T2.display ();
  T1.increment ();
  T1.display ();
  T2.display ();
  return 0;
}