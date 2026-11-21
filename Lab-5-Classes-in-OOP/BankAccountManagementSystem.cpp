#include<iostream>
using namespace std;
class BankAccount
{
    int accountNumber;
    string holderName,accountType;
    float balance;
public:
    void input()
    {
        cout<<"Enter account number: ";
        cin>>accountNumber;
        cout<<"Enter holder name: ";
        cin>>holderName;
        cout<<"Enter account type: ";
        cin>>accountType;
        cout<<"Enter balance: ";
        cin>>balance;
    }
    int getNumber()
    {
        return accountNumber;
    }
    void deposit()
    {
        float amount;
        cout<<"Enter deposit amount: ";
        cin>>amount;
        if(amount>0)
        {
            balance=balance+amount;
            cout<<"Money deposited successfully!"<<endl;
        }
        else
            cout<<"Invalid amount!"<<endl;
    }
    void withdraw()
    {
        float amount;
        cout<<"Enter withdrawal amount: ";
        cin>>amount;
        if(amount>0 && amount<=balance)
        {
            balance=balance-amount;
            cout<<"Money withdrawn successfully!"<<endl;
        }
        else
            cout<<"Insufficient balance or invalid amount!"<<endl;
    }
    void transfer(BankAccount &b)
    {
        float amount;
        cout<<"Enter transfer amount: ";
        cin>>amount;
        if(amount>0 && amount<=balance)
        {
            balance=balance-amount;
            b.balance=b.balance+amount;
            cout<<"Money transferred successfully!"<<endl;
        }
        else
            cout<<"Insufficient balance or invalid amount!"<<endl;
    }
    void display()
    {
        cout<<"\nAccount Number: "<<accountNumber<<endl;
        cout<<"Holder Name: "<<holderName<<endl;
        cout<<"Account Type: "<<accountType<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    BankAccount b[5];
    int choice,num,found,index1,index2;

    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter account "<<i+1<<" details:"<<endl;
        b[i].input();
    }

    do
    {
        cout<<"\n--- Bank Management System ---"<<endl;
        cout<<"1. Search Account"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Transfer Money"<<endl;
        cout<<"5. Display All Accounts"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;

        if(choice>=1 && choice<=4)
        {
            cout<<"Enter account number: ";
            cin>>num;
            found=0;

            for(int i=0;i<5;i++)
            {
                if(b[i].getNumber()==num)
                {
                    index1=i;
                    found=1;
                    break;
                }
            }

            if(found==0)
                cout<<"Account not found!"<<endl;
            else if(choice==1)
                b[index1].display();
            else if(choice==2)
                b[index1].deposit();
            else if(choice==3)
                b[index1].withdraw();
            else if(choice==4)
            {
                cout<<"Enter receiver account number: ";
                cin>>num;
                found=0;

                for(int i=0;i<5;i++)
                {
                    if(b[i].getNumber()==num)
                    {
                        index2=i;
                        found=1;
                        break;
                    }
                }

                if(found==1 && index1!=index2)
                    b[index1].transfer(b[index2]);
                else
                    cout<<"Receiver account not found or same account!"<<endl;
            }
        }
        else if(choice==5)
        {
            for(int i=0;i<5;i++)
                b[i].display();
        }
        else if(choice==6)
            cout<<"Program ended."<<endl;
        else
            cout<<"Invalid choice!"<<endl;

    }while(choice!=6);

    return 0;
}
