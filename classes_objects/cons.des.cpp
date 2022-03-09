
#include<iostream>
using namespace std;
class Account
{
private:
    int acc_no;
    string cust_name;
    float balance;
public:
    Account()
    {
        cout<<"enter customer acc_no."<<endl;
        cin>>acc_no;
        cout<<"enter customer name"<<endl;
        cin>>cust_name;
        cout<<"enter initial balance"<<endl;
        cin>>balance;
    }
    Account(float amount)
    {

        cout<<"enter amount of deposite"<<endl;
        cin>>amount;
        balance=balance+amount;
        cout<<"balance after deposite"<<balance<<endl;
    }
    Account(int amount)
    {

        cout<<"enter amount of withdraw"<<endl;
        cin>>amount;
        balance=balance-amount;
        cout<<"balance after withdraw"<<endl;
    }
};
    int main()
    {

      Account ob1;
      Account ob2(200);
      Account ob3(300);


    }


