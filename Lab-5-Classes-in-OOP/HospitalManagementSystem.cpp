#include<iostream>
using namespace std;
class Patient
{
    int patientID,age;
    string name,disease,doctorName;
    float charges;
public:
    void registerPatient()
    {
        cout<<"Enter patient ID: ";
        cin>>patientID;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter disease: ";
        cin>>disease;
        cout<<"Enter doctor name: ";
        cin>>doctorName;
        cout<<"Enter hospital charges: ";
        cin>>charges;
    }
    void update()
    {
        cout<<"Enter new disease: ";
        cin>>disease;
        cout<<"Enter new doctor name: ";
        cin>>doctorName;
        cout<<"Enter new charges: ";
        cin>>charges;
    }
    float treatmentCharges()
    {
        return charges;
    }
    int getID()
    {
        return patientID;
    }
    void display()
    {
        cout<<"\nPatient ID: "<<patientID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Disease: "<<disease<<endl;
        cout<<"Doctor Name: "<<doctorName<<endl;
        cout<<"Hospital Charges: "<<treatmentCharges()<<endl;
    }
};
int main()
{
    Patient p[10];
    Patient *ptr;
    int count=0,choice,id,found;

    do
    {
        cout<<"\n--- Hospital Management System ---"<<endl;
        cout<<"1. Register Patient"<<endl;
        cout<<"2. Update Patient"<<endl;
        cout<<"3. Search Patient"<<endl;
        cout<<"4. Display All Patients"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;

        if(choice==1)
        {
            if(count<10)
            {
                ptr=&p[count];
                ptr->registerPatient();
                count++;
                cout<<"Patient registered successfully!"<<endl;
            }
            else
                cout<<"Patient record is full!"<<endl;
        }
        else if(choice==2)
        {
            cout<<"Enter patient ID: ";
            cin>>id;
            found=0;

            for(int i=0;i<count;i++)
            {
                ptr=&p[i];
                if(ptr->getID()==id)
                {
                    ptr->update();
                    cout<<"Patient updated successfully!"<<endl;
                    found=1;
                    break;
                }
            }
            if(found==0)
                cout<<"Patient not found!"<<endl;
        }
        else if(choice==3)
        {
            cout<<"Enter patient ID: ";
            cin>>id;
            found=0;

            for(int i=0;i<count;i++)
            {
                ptr=&p[i];
                if(ptr->getID()==id)
                {
                    ptr->display();
                    found=1;
                    break;
                }
            }
            if(found==0)
                cout<<"Patient not found!"<<endl;
        }
        else if(choice==4)
        {
            for(int i=0;i<count;i++)
            {
                ptr=&p[i];
                ptr->display();
            }
            if(count==0)
                cout<<"No patient records available!"<<endl;
        }
        else if(choice==5)
            cout<<"Program ended."<<endl;
        else
            cout<<"Invalid choice!"<<endl;

    }while(choice!=5);

    return 0;
}
