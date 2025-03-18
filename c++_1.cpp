#include<iostream>
using namespace std;


class Time
{
private:
    int hr;
    int min;

public:
    void setHr(int hr)
    {
        if(hr<0 || hr>23)
            throw 3;
        this->hr = hr;
    }

    void setMin(int min)
    {
        if(min<0 || min>59)
            throw 6.8;
        this->min = min;
    }

    void display()
    {
        cout<<"The time is:- "<<hr<<":"<<min<<endl;
    }

};

int main()
{
    Time t;

    try
    {
        t.setHr(-1);
        t.setMin(54);
        t.display();

    }

    catch(...) 
    {
        cout<<"Something went wrong"<<endl;
    }

    cout<<"Program Finished"<<endl;



    return 0;
}