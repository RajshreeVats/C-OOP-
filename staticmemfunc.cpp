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
		
		void initMessage(char s[])
		{
			strcpy(st,s);
		}
				
		void printMessage(void)
		{
			cout << st << endl;
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
	
	M1.initMessage("Message one");
	M2.initMessage("Message two");
	M3.initMessage("Message three");
	
	M1.printMessage();
	M2.printMessage();
	M3.printMessage();
	
	//printing object count 
	cout << "Total objects created: " << Message::totalObjects() << endl;
	
	return 0;
}