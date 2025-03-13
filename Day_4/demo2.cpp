#include<iostream>
using namespace std;


int main()
{
    int *arr[5];

    arr[0] = new int(10);
    arr[1] = new int(20);
    arr[2] = new int(30);
    arr[3] = new int(40);
    arr[4] = new int(50);

    for(int i=0; i<5; i++)
    {
        cout<<*arr[i]<<endl;
    }

    for(int i=0; i<5; i++)
    {
        delete arr[i];
         arr[i]=NULL;
    }










    return 0;
}