#include <iostream>

using namespace std;

void displayChar(int n, char ch)
{
    for (int i = 0; i < n; i++)
    {
        cout << ch << " ";
    }
    cout << endl;
}
void display1(int n = NULL, char ch = NULL) {
    for (int i = 0; i < 81; i++) {
        cout << ch << " ";
    }
    cout << endl;
}
void display2(int n = NULL, char ch = ' ') {
    for (int i = 0; i < 81; i++) {
        cout << ch << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    char ch;
    cin >> n >> ch;
    if (n!=NULL ) {
        displayChar(n, ch);
    }
    else if (n==0 && ch == ' ') {
        display1(n,ch);
    }
    else if (n == 0 && ch != ' ') {
        display2(n, ch);
    }
    else {
        cout<<" end "<<endl;
    }
    

    return 0;
}
