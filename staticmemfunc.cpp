#include <iostream>
#include <string.h>
using namespace std;

class Message
{
	private:
		char st[30];
		static int count;
		
	public:
		
		Message()
		{
			count++;
		}				
		
		static int totalObjects(void)
		{
			return count;
		}
};


int Message::count =0;

int main()
{
	Message M1;
	Message M2;
	Message M3;
	
	
	
	cout << "Total objects created: " << Message::totalObjects() << endl;
	
	return 0;
}