#include<iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    double salary;

public:
    Employee()
    {
        id=0;
        name = "";
        salary = 0.0;
    
    }

    Employee(int id, string name, double salary)
    {
        this->id = id;
        this->name =name;
        this->salary= salary;

    }

    void accept()
    {
        cout<<"Employee::accept()"<<endl;
        cout<<"Enter employee id"<<endl;
        cin>>id;
        cout<<"Enter employee name"<<endl;
        cin>>name;
        cout<<"Enter salary"<<endl;
        cin>>salary;
    }

    void display()
    {
        cout<<"Id "<<id<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Salary "<<salary<<endl;

    }

};


int main()
{
    Employee **ptr = new Employee *[5];
    ptr[0] = new Employee(1,"Anil",10000);
    ptr[1] = new Employee(2,"Mukesj",20000);
    ptr[2] = new Employee(3,"Ramesh",30000);
    ptr[3] = new Employee(4,"Suresh",40000);
    ptr[4] = new Employee(5,"Ram",50000);

    for(int i=0; i<5; i++)
    {
        ptr[i]->display();

    }

    //deallocating memory

    for(int i =0; i<5; i++)
    {
        delete ptr[i];
        ptr[i]=NULL;
    }

    delete[] ptr;
    ptr = NULL;
    return 0;
}

