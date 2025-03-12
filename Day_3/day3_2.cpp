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
        cout<<"Enter the hrs"<<endl;
        cin>>hr;

        cout<<"Enter thr mins "<<endl;
        cin>>min;

        cout<<"Enter thr secs "<<endl;
        cin>>sec;

    }

    void display()
    {
        cout<<"Clock :"<<hr<<":"<<min<<":"<<sec<<endl;
    }

};


int main()
{
    Time t1;
    t1.display();
    
    Time t2;
    t2.display();
    return 0;
}