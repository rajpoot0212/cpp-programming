#include<iostream>
using namespace std;
class BankAccount
{
    int accountNumber;
    float balance;
public:
    void setData(int acc,float bal)
    {
        accountNumber=acc;
        if(bal>=0)
            balance=bal;
        else
            balance=0;
    }
    int getAccountNumber()
    {
        return accountNumber;
    }
    float getBalance()
    {
        return balance;
    }
    void display()
    {
        cout<<"\nAccount Number: "<<getAccountNumber()<<endl;
        cout<<"Balance: "<<getBalance()<<endl;
    }
};
int main()
{
    BankAccount b;
    int acc;
    float bal;

    cout<<"Enter account number: ";
    cin>>acc;
    cout<<"Enter balance: ";
    cin>>bal;

    b.setData(acc,bal);
    b.display();

    return 0;
}
