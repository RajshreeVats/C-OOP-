#include <iostream>
#include <regex>
using namespace std;
 

bool isValidURL(string url)
{
 

  const regex pattern("(www.)((http|https)://)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");

  if (url.empty())
  {
     return false;
  }
  if(regex_match(url, pattern))
  {
    return true;
  }
  else
  {
    return false;
  }
}
 
int main()
{
  string url = "www.classroom.google.com/u/0/c/MzcxODk1MzUxMzY5/a/NDM0Nzg3OTM5NzYw/details";
 try
 {
     if (isValidURL(url))
      cout << "YES url is valid"<<endl;
    else 
     throw 'c';
 }
 catch(char c)
 {
    cout << "Exception caught"<< endl;
    cout << "NO url is not valid"<< endl;
 }
 
  return 0;
}