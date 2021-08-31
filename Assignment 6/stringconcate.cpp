#include <iostream>
#include <string.h>
 
using namespace std;
 

class String {
 
public:
    char s1[20], s2[20];
 
    // Parameterized Constructor
    String(char str1[], char str2[])
    {
        strcpy(this->s1, str1);
        strcpy(this->s2, str2);
    }
 
   
    void operator+()
    {
        cout << "\nConcatenation: " << strcat(s1, s2);
    }
};
 

int main()
{
    
    char str1[] = "Hello";
    char str2[] = "World";
 
    String a(str1, str2);
    +a;
    return 0;
}
