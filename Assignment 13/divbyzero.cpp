#include<iostream>
using namespace std;
class Error{ };

int main() {
    int a, b;
    float c;
    cout << "Enter two numbers :";
    cin>>a>>b;

    try {
        if (b == 0) {
           throw(a);
        } 
        else {
            c = (float) a/b;
            cout << "Answer :" << c;
        }
    } 
    catch (int a) {
        { cout <<" Divide by zero error"<< endl; }
        
    }

}