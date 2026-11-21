#include<iostream>
using namespace std;
struct BankAccount
{
    int accountNumber;
    string name;
    float balance;
};
int main()
{
    BankAccount b;
    int choice;
    float amount;
    cout<<"Enter account number: ";
    cin>>b.accountNumber;
    cout<<"Enter account holder name: ";
    cin>>b.name;
    cout<<"Enter balance: ";
    cin>>b.balance;
    cout<<"\n1. Deposit"<<endl;
    cout<<"2. Withdraw"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    cout<<"Enter amount: ";
    cin>>amount;
    if(amount<=0)
        cout<<"Invalid amount!"<<endl;
    else if(choice==1)
        b.balance=b.balance+amount;
    else if(choice==2)
    {
        if(amount<=b.balance)
            b.balance=b.balance-amount;
        else
            cout<<"Insufficient balance!"<<endl;
    }
    else
        cout<<"Invalid choice!"<<endl;
    cout<<"\nAccount Number: "<<b.accountNumber<<endl;
    cout<<"Account Holder: "<<b.name<<endl;
    cout<<"Updated Balance: Rs. "<<b.balance<<endl;
    return 0;
}
