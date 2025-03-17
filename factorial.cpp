#include<iostream>
using namespace std;

static int factorial(int num)
{
    if(num==0 || num==1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num-1);
    }
}

int menu()
{
    int choice;
    cout<<"Enter the choice"<<endl;
    cout<<"___________________________________________"<<endl;
    cout<<"0 Exit"<<endl;
    cout<<"1 Calculate Factorial"<<endl;
    cout<<"___________________________________________"<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    int choice;
    int num;
    

    while((choice = menu()) !=0)
    {
        switch(choice)
        {
            case 1:
                cout<<"Enter the number you want multiplication table of"<<endl;
                cin>>num;
                cout<<factorial(num)<<endl;
                break;
            
            default:
                cout<<"Invalid Choice"<<endl;
                break;
        }

    }
   


    return 0;
}