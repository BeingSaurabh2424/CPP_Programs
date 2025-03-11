#include <iostream>
using namespace std;

class Time
{
    int hr;
    int min;
    int sec;

public:
    void accept()
    {
        cout<<"Enter the hrs - ";
        cin>>hr;    
        cout<<"Enter the mins - ";      
        cin>>min;
        cout<<"Enter the secs - ";
        cin>>sec;
    }

    void display()
    {
        cout<<"The time is "<<hr<<" : "<<min<<" : "<<sec<<endl;
    }
};

int main()
{
    cout<<"Hello World"<<endl;

    Time t1;
    cout<<"The size of the class Time is "<<sizeof(Time)<<endl;
    cout<<"Address of t1 = "<<&t1<<endl;
    
    return 0;

}