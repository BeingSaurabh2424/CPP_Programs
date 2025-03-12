#include<iostream>
using namespace std;

class Time
{
    int hr;
    int min;

public:

    void accept()
    {
        cout<<"Enter hrs "<<endl;
        cin>>hr;

        cout<<"Enter mins"<<endl;
        cin>>min;

    }

    void display()
    {
        cout<<"Clock: "<<hr<<":"<<min<<endl;

    }

    void setMin(int min)
    {
        this->min = min;
    }

    void setHr(int hr)
    {
        this->hr = hr;
    }

    int getMin()
    {
        return min;
    }

    int getHr()
    {
        return hr;
    
    }
};

int main()
{
    Time t1;
    t1.accept();
    t1.display();

    t1.setHr(10);
    t1.setMin(7);
    t1.display();

    return 0;
}