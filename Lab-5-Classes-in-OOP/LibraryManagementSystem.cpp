#include<iostream>
using namespace std;
class Library
{
    int bookID;
    string title,author;
    float price;
    int available;
public:
    void addBook()
    {
        cout<<"Enter book ID: ";
        cin>>bookID;
        cout<<"Enter book title: ";
        cin>>title;
        cout<<"Enter author name: ";
        cin>>author;
        cout<<"Enter price: ";
        cin>>price;
        available=1;
    }
    int getID()
    {
        return bookID;
    }
    int searchTitle(string t)
    {
        return title==t;
    }
    void issueBook()
    {
        if(available==1)
        {
            available=0;
            cout<<"Book issued successfully!"<<endl;
        }
        else
            cout<<"Book is already issued!"<<endl;
    }
    void returnBook()
    {
        if(available==0)
        {
            available=1;
            cout<<"Book returned successfully!"<<endl;
        }
        else
            cout<<"Book is already available!"<<endl;
    }
    void display()
    {
        cout<<"\nBook ID: "<<bookID<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
        if(available==1)
            cout<<"Status: Available"<<endl;
        else
            cout<<"Status: Issued"<<endl;
    }
    void showAvailable()
    {
        if(available==1)
            display();
    }
};
int main()
{
    Library b[10];
    int choice,id,found;

    for(int i=0;i<10;i++)
    {
        cout<<"\nEnter book "<<i+1<<" details:"<<endl;
        b[i].addBook();
    }

    do
    {
        cout<<"\n--- Library Management System ---"<<endl;
        cout<<"1. Search Book by ID"<<endl;
        cout<<"2. Search Book by Title"<<endl;
        cout<<"3. Issue Book"<<endl;
        cout<<"4. Return Book"<<endl;
        cout<<"5. Display Available Books"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;

        if(choice==1 || choice==3 || choice==4)
        {
            cout<<"Enter book ID: ";
            cin>>id;
            found=0;

            for(int i=0;i<10;i++)
            {
                if(b[i].getID()==id)
                {
                    found=1;
                    if(choice==1)
                        b[i].display();
                    else if(choice==3)
                        b[i].issueBook();
                    else
                        b[i].returnBook();
                    break;
                }
            }
            if(found==0)
                cout<<"Book not found!"<<endl;
        }
        else if(choice==2)
        {
            string t;
            cout<<"Enter book title: ";
            cin>>t;
            found=0;

            for(int i=0;i<10;i++)
            {
                if(b[i].searchTitle(t))
                {
                    b[i].display();
                    found=1;
                }
            }
            if(found==0)
                cout<<"Book not found!"<<endl;
        }
        else if(choice==5)
        {
            for(int i=0;i<10;i++)
                b[i].showAvailable();
        }
        else if(choice==6)
            cout<<"Program ended."<<endl;
        else
            cout<<"Invalid choice!"<<endl;

    }while(choice!=6);

    return 0;
}
