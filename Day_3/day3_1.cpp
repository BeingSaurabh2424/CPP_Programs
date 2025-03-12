#include<iostream>
using namespace std;

class Time
{

    int hr;
    int min;
    int sec;

public:
    void accept()
    {
        cout<<"Enter the hrs "<<endl;
        cin>>hr;

        cout<<"Enter the hrs "<<endl;
        cin>>hr;

        cout<<"Enter the hrs "<<endl;
        cin>>hr;

    }

    void display()
    {
        cout<<"Clock "<<hr<<":"<<min<<":"<<sec<<endl;
    }

};


int main()
{
    Time t1;
    t1.accept();
    t1.display();

    
    return 0;
}