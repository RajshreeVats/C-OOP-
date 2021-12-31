#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;

int main()
{
     string test;
     string email;
     bool isChar();
     bool isDigit();
     bool isValidEmailId(string);

     cout<<"\n Enter Email Id : ";
     getline(cin, email);

     test=email;
     try 
     {
          if(isValidEmailId(test) )
               cout<<"\n Email Id is Valid.";
          else
               throw 'c';  
     }
     catch(char c)   
     {
          cout<<"\n Exception Caught... \n Invalid Email Id!!!";
     }
     catch(...) 
     {
          cout<<"\n Default Exception";
     }
     return 0;
}
bool isChar(const char Character)
{
     return ( (Character >= 'a' && Character <= 'z') || (Character >= 'A' && Character <= 'Z'));
}
bool isDigit(const char Character)
{
     return ( Character >= '0' && Character <= '9');
}
bool isValidEmailId(string email)
{

     if(!isChar(email[0]))
          return 0;
     int At = -1;
     int Dot = -1;
     unsigned int Length;
     for(unsigned int i = 0; i < Length; i++)
     {
          if(email[i] == '@')
               At = (int)i;
          else if(email[i] == '.')
               Dot = (int)i;
     }
     if(At == -1 || Dot == -1)
          return 0;
     if(At > Dot)
          return 0;
     return !(Dot >= ((int)Length-1));
}