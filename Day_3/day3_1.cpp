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
        cin>>this->hr;

        cout<<"Enter the mins "<<endl;
        cin>>this->hr;

        cout<<"Enter the secs "<<endl;
        cin>>this->hr;

    }

    void display()
    {
        cout<<"Clock "<<hr<<":"<<this->min<<":"<<sec<<endl;
    }

};


int main()
{
    Time t1;
    t1.accept();
    t1.display();

    
    return 0;
}

int main1()
{
    Time t1;
    Time t2;

    cout<<"Address of t1 in main "<<&t1<<endl;
    cout<<"Address of t2 in main "<<&t2<<endl;

    t1.accept();
    t1.display();
}