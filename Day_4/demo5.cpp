#include <iostream>

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
    Employee *ptr = new Employee[5];
    
    ptr[0] = Employee(1,"Saurabh",5000);
    ptr[1] = Employee(2,"Aditya",6000);
    ptr[2] = Employee(3,"Suraj",7000);
    ptr[3] = Employee(4,"Manoj",8000);
    ptr[4] = Employee(5,"Sanjeevni",9000);


    for(int i = 0; i<5; i++)
    {
        ptr[i]->display();
    }
    
    return 0;
}


  


