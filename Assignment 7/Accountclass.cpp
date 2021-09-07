#include <bits/stdc++.h>
using namespace std;

class Account {
    
    public:
    protected:

        char name[30];
        int ano;
        char type[15];
    public:
        Account(){}
};

class savings:private Account
{
    float balance;
    float deposit;
    float withdraw;
    float rate;
    int term;
    public:
        savings()
        {
            balance=0.0;
            deposit=0.0;
            withdraw=0.0;  
        }
        void getdata()
        {
            cout<<"\n\nACCOUNT HOLDERS NAME      :";
            cin>>name;
            cout<<"\nACCOUNT NUMBER            :";
            cin>>ano;
            cout<<"\nACCOUNT TYPE              :";
            cin>>type;
            cout<<"\nENTER THE BALANCE         :";
            cin>>balance;
                if(balance<=0)
                {
                    cout<<"\nBALANCE MUST BE GREATER THAN ZERO";
                   
                }
                
            
        }
        void sdeposit()
        {

                cout<<"\nMONEY DEPOSIT SCREEN";
                cout<<"\n\nENTER THE AMOUNT YOU WANT TO DEPOSIT        :";
                cin>>deposit;
                balance=balance+deposit;
                cout<<"\n\nTHE BALANCE AFTER MAKING DEPOSIT IS        :"<<balance;
            
        }
        void swithdraw()
        {
            cout<<"\n\nENTER THE WITHDRAWAL AMOUNT            :";
            cin>>withdraw;
            balance=balance-withdraw;
            cout<<"\n\nTHE BALANCE AFTER WITHDRAWAL IS    :"<<balance;
        }
         void sdisplay()
        {
            cout<<"\n\nACCOUNT HOLDERS NAME      :"<<name;
            cout<<"\nACCOUNT NUMBER            :"<<ano;
            cout<<"\nACCOUNT TYPE              :"<<type;
            cout<<"\n\nLATEST BALANCE IS        : Rs. "<<balance;
            cout<<"\n\nLATEST BALANCE IS        : Rs. "<<balance;
        }

            
};
class current:private Account {
    float balance;
    float deposit;
    float withdraw;
    float rate;
    int term;
    public:
       current()
        {
            balance=0.0;
            deposit=0.0;
            withdraw=0.0;  
        }
        void cgetdata()
        {
            
            cout<<"\n\nACCOUNT HOLDERS NAME      :";
            cin>>name;
            cout<<"\nACCOUNT NUMBER            :";
            cin>>ano;
            cout<<"\nACCOUNT TYPE              :";
            cin>>type;
        }
        void cdeposit()
        {
                cout<<"\n\nENTER THE AMOUNT YOU WANT TO DEPOSIT        :";
                cin>>deposit;
                balance=balance+deposit;
                cout<<"\n\nTHE BALANCE AFTER MAKING DEPOSIT IS        :"<<balance;
        }
        void cwithdraw()
        {
            cout<<"\n\nENTER THE WITHDRAWAL AMOUNT            :";
            cin>>withdraw;
            balance=balance-withdraw;
            cout<<"\n\nTHE BALANCE AFTER WITHDRAWAL IS    :"<<balance;
        }
         void cdisplay()
        {
            cout<<"\n\nACCOUNT HOLDERS NAME      :"<<name;
            cout<<"\nACCOUNT NUMBER            :"<<ano;
            cout<<"\nACCOUNT TYPE              :"<<type;
            cout<<"\n\nLATEST BALANCE IS        : Rs. "<<balance;

        }

};

int main () {
    savings s1; 
    current c1;   
    s1.getdata();
    s1.sdeposit();
    s1.swithdraw();
    s1.sdisplay();
    c1.cgetdata();
    c1.cdeposit();
    c1.cwithdraw();
    c1.cdisplay();

    return 0;
}
