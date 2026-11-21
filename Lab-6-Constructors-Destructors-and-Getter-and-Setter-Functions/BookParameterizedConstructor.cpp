#include<iostream>
using namespace std;
class Book
{
    string title,author;
    float price;
public:
    Book(string t,string a,float p)
    {
        title=t;
        author=a;
        price=p;
    }
    void display()
    {
        cout<<"Book Information"<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main()
{
    Book b("C++ Programming","Saif",1500);
    b.display();
    return 0;
}
