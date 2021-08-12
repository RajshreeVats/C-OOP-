#include <iostream>

using namespace std;

void displayChar(int n = 80, char ch = '*')
{
    for (int i = 0; i < n; i++)
    {
        cout << ch << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    char ch;
    cin >> n >> ch;

    displayChar(n, ch);

    return 0;
}
