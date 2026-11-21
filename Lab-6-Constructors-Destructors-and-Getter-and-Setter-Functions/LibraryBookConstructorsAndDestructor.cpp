#include<iostream>
using namespace std;
class LibraryBook
{
    int bookID;
    string title,author;
    float price;
    bool available;
public:
    LibraryBook()
    {
        bookID=0;
        title="Unknown";
        author="Unknown";
        price=0;
        available=true;
        cout<<"Default constructor called"<<endl;
    }
    LibraryBook(int id,string t,string a,float p)
    {
        bookID=id;
        title=t;
        author=a;
        price=p;
        available=true;
        cout<<"Parameterized constructor called"<<endl;
    }
    void setData(int id,string t,string a,float p)
    {
        bookID=id;
        title=t;
        author=a;
        price=p;
    }
    int getID()
    {
        return bookID;
    }
    string getTitle()
    {
        return title;
    }
    string getAuthor()
    {
        return author;
    }
    float getPrice()
    {
        return price;
    }
    bool getStatus()
    {
        return available;
    }
    void issueBook()
    {
        if(available)
        {
            available=false;
            cout<<"Book issued successfully"<<endl;
        }
        else
            cout<<"Book is not available"<<endl;
    }
    void returnBook()
    {
        available=true;
        cout<<"Book returned successfully"<<endl;
    }
    void display()
    {
        cout<<"Book ID: "<<getID()<<endl;
        cout<<"Title: "<<getTitle()<<endl;
        cout<<"Author: "<<getAuthor()<<endl;
        cout<<"Price: "<<getPrice()<<endl;
        if(getStatus())
            cout<<"Status: Available"<<endl;
        else
            cout<<"Status: Issued"<<endl;
    }
    ~LibraryBook()
    {
        cout<<"Book object destroyed: "<<bookID<<endl;
    }
};
int main()
{
    LibraryBook books[5]={
        LibraryBook(101,"C++","Ali",1200),
        LibraryBook(102,"Java","Ahmed",1500),
        LibraryBook(103,"Python","Sara",1800),
        LibraryBook(104,"HTML","Usman",900),
        LibraryBook(105,"Database","Hassan",1300)
    };
    cout<<"\nAll Book Records"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"\nBook "<<i+1<<endl;
        books[i].display();
    }
    cout<<"\nIssuing First Book"<<endl;
    books[0].issueBook();
    books[0].display();
    cout<<"\nReturning First Book"<<endl;
    books[0].returnBook();
    books[0].display();
    return 0;
}
