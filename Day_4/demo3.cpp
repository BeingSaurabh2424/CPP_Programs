#include<iostream>
using namespace std;


int main()
{

    int **ptr = new int*[5];


    ptr[0] = new int(10);
    ptr[1] = new int(20);
    ptr[2] = new int(30);
    ptr[3] = new int(40);
    ptr[4] = new int(50);

    for(int i=0; i<5;i++)
    {
        cout<<*ptr[i]<<endl;
    }

    for(int i=0; i<5; i++)
    {
        delete ptr[i];
         ptr[i]=NULL;
    }

    delete[] ptr;
    ptr = NULL;


    return 0;
}