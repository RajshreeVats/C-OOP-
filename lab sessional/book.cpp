#include <iostream>
using namespace std;

class Book
{
protected:
    string name;
    string author;
    int page;
    float size;

public:
    Book(string n, string a, int p, float s)
    {
        name = n;
        author = a;
        page = p;
        size = s;
    }
    virtual void getinfo() = 0;
};

class print_book : public Book
{
public:
    print_book(string n, string a, int p, int s) : Book(n, a, p, s){};

    void getinfo()
    {
        cout << "The name of the book : : " << name<< endl;
        cout << "Author of the book : : " << author<< endl;
        cout << "Number of Pages in the book : : " << page<< endl;
        cout << "Size of book in kb : : Not Available " << size<< endl;
    }
};

class e_book : public Book
{
public:
    e_book(string n, string a, int p,  int s) : Book(n, a, p, s){};

    void getinfo()
    {
        cout<<" \n\n E-book Info \n\n"<<endl;
        cout << "The name of the book : : " << name<< endl;
        cout << "Author of the book : : " << author<< endl;
        cout << "Number of Pages in the book :: " << page<< endl;
        cout << "Size of book in kb : : " << size<<"kb"<< endl;
    }
};

int main()
{
    Book *ptr;
    print_book pbook("oop in c++", "rajshree", 779, 0);
    ptr = &pbook;
    ptr->getinfo();

    e_book ebook("oop in c++", "rajshree", 120, 75);
    ptr = &ebook;
    ptr->getinfo();
    
    return 0;
}