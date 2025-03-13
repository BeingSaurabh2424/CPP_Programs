#include<iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    Point()
    {
        cout<<"Inside Constructor"<<endl;
    }

    ~Point()
    {
        cout<<"Inside Destructor"<<endl;
    }

};

int main1()
{
    int *ptr = new int; //heap
    *ptr = 10;
    cout<<"Value at *ptr = "<<*ptr<<endl;
    delete ptr;
    ptr = NULL;
    return 0;
}


int main()
{

    Point *p = new Point;
    delete p;
    p = NULL;
    return 0;
}