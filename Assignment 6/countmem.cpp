#include <iostream>
#include <string.h>
using namespace std;

class object
{
	private:
		char str[30];
		static int count;
		
	public:
		object()
		{
			count++;
		}
		
		static int totalObjects(void)
		{
			return count;
		}
};


int object::count =0;


int main()
{
	object M1;
	object M2;
	object M3;

	
	cout << "Total objects created: " << object::totalObjects() << endl;
	
	return 0;
}