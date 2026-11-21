#include<iostream>
using namespace std;
class BankAccount
{
    int accountNumber;
    string name;
    float balance;
public:
    void input()
    {
        cout<<"Enter account number: ";
        cin>>accountNumber;
        cout<<"Enter account holder name: ";
        cin>>name;
        cout<<"Enter balance: ";
        cin>>balance;
    }
    void deposit()
    {
        float amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        if(amount>0)
            balance=balance+amount;
        else
            cout<<"Invalid amount!"<<endl;
    }
    void withdraw()
    {
        float amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        if(amount<=0)
            cout<<"Invalid amount!"<<endl;
        else if(amount<=balance)
            balance=balance-amount;
        else
            cout<<"Insufficient balance!"<<endl;
    }
    void display()
    {
        cout<<"\nAccount Details"<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Holder: "<<name<<endl;
        cout<<"Updated Balance: Rs. "<<balance<<endl;
    }
};
int main()
{
    BankAccount b;
    int choice;
    b.input();
    cout<<"\n1. Deposit"<<endl;
    cout<<"2. Withdraw"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
    if(choice==1)
        b.deposit();
    else if(choice==2)
        b.withdraw();
    else
        cout<<"Invalid choice!"<<endl;
    b.display();
    return 0;
}
