#include<iostream>
using namespace std;


class InvalidTimeException
{
private:
    string message;

public:
    InvalidTimeException()
    {
        message = "";
    }

    InvalidTimeException(string messages)
    {
        this->message = message;
    }

    void printStackTrace()
    {
        cout<<"InvalidTimeException "<<message<<endl;
    }

};

class Time
{
private:
    int hr;
    int min;

public:
    void setHr(int hr)
    {
        if(hr<0 || hr>23)
            throw 1;
        this->hr = hr;
    }

    void setMin(int min)
    {
        if(min<0 || min>59)
            throw 3.6;
        this->min = min;
    }

    void display()
    {
        cout<<"The time is "<<hr<<":"<<min<<endl;
    }

};


int main()
{
    Time t1;

    try
    {
    t1.setHr(87);
    t1.setMin(7);
    t1.display();
    }

    catch(InvalidTimeException e)
    {
        e.printStackTrace();
    }

    cout<<"The program successfully terminated "<<endl;




    return 0;
}