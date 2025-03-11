#include<iostream>
using namespace std;

class Employee
{
private:
    int empid;
    string name;
    double salary;

public:
    void initEmployee()
    {
        empid = 000;
        name = "null";
        salary = 0.0;
    }

    void acceptEmployee()
    {
        cout<<"Enter the empid"<<endl;
        cin>>empid;
        cout<<"Enter the name"<<endl;
        cin>>name;
        cout<<"Enter the salary"<<endl;
        cin>>salary;
    }

    void displayEmployee()
    {
        cout<<"Empid = "<<empid<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Salary = "<<salary<<endl;
    }


};

int menu()
{
    int choice;
    cout<<"0. Exit"<<endl;
    cout<<"1. Accept Employee"<<endl;
    cout<<"2. Display Employee"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;    
    return choice;
}

int main()
{
    int choice;
    Employee e1;
    e1.initEmployee();
    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 1:
                e1.acceptEmployee();
                break;
            case 2:
                e1.displayEmployee();
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }



    return 0;
}