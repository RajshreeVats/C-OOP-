#include <iostream>
using namespace std;
class book
{
    public:
    string name;
    string author;
    float price;
    int pages;
    float size;
    book();
    book(string n, string a, float p, int pa, float s) {
        n = name;
        a = author;
        p = price;
        pa = pages;
        s = size;
    }
    void info()
    {
         cout<<"Enter the name of the book: "<<endl;
         cin>>name;
         cout<<"Enter the author: "<<endl;
         cin>>author;
         cout<<"Enter the price: "<<endl;
         cin>>price;
         cout<<"Enter the number of pages: "<<endl;
         cin>>pages;
         cout<<"enter the size in kb : ";
         cin>>size;
    }
    

  virtual void sa() = 0;
};
class print_book : public book
{
    public:
    print_book();
    print_book(string n, string a, float p, int pa) {
        n = name;
        a = author;
        p = price;
        pa = pages;
    }
    void sa()
    {
        cout << "\nsize not found "<< endl;
        }
};
class e_book : public book
{
    e_book();
    e_book(string n, string a, float p, int pa,float s) {
        n = name;
        a = author;
        p = price;
        pa = pages;
         s = size;
    }
    public:
    void sal()
    {
        cout << "\nsize in kb " <<size << endl;
        }
};
int main()
{
    book *b;
    print_book pk;
    e_book ek;
    b = &pk;
    pk->print_book("OOP", "Rajshree", 500, 800 );
    pk->sa();
    
    ep->info();
    ep->part();
    ep->sal();
    return 0;
}