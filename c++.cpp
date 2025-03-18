#include<iostream>
using namespace std;

void division(int num, int division)
{
    if(division==0)
        throw 1;
    

    int result = num/division;
    cout<<"Division "<<result<<endl;
}

int main()
{

    try
    {
        division(10,0);

    }
    catch(int saurabh)
    {
        cout<<"Division by 0 is not possible"<<endl;

    }

    cout<<"Program Finished"<<endl;



    return 0;
}