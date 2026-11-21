#include<iostream>
using namespace std;
class BankAccount
{
    int accountNumber;
    string holderName;
    float balance;
public:
    BankAccount()
    {
        accountNumber=0;
        holderName="Unknown";
        balance=0;
    }
    BankAccount(int a,string n,float b)
    {
        accountNumber=a;
        holderName=n;
        balance=b;
    }
    void setData(int a,string n,float b)
    {
        accountNumber=a;
        holderName=n;
        if(b>=0)
            balance=b;
        else
            balance=0;
    }
    int getAccountNumber()
    {
        return accountNumber;
    }
    string getHolderName()
    {
        return holderName;
    }
    float getBalance()
    {
        return balance;
    }
    void deposit(float amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<"Amount deposited successfully"<<endl;
        }
        else
            cout<<"Invalid deposit amount"<<endl;
    }
    void withdraw(float amount)
    {
        if(amount>0 && amount<=balance)
        {
            balance-=amount;
            cout<<"Amount withdrawn successfully"<<endl;
        }
        else
            cout<<"Insufficient balance or invalid amount"<<endl;
    }
    void display()
    {
        cout<<"Account Number: "<<getAccountNumber()<<endl;
        cout<<"Holder Name: "<<getHolderName()<<endl;
        cout<<"Balance: "<<getBalance()<<endl;
    }
    ~BankAccount()
    {
        cout<<"BankAccount object is destroyed"<<endl;
    }
};
int main()
{
    BankAccount b1;
    BankAccount b2(1,"saif",10000);
    cout<<"Account Information"<<endl;
    b2.display();
    b2.deposit(2000);
    b2.withdraw(3000);
    cout<<"\nUpdated Account Information"<<endl;
    b2.display();
    return 0;
}
