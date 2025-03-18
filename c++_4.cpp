#include<iostream>
using namespace std;

template <typename T>
void mySwap(T &n1,T &n2)
{
    T temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    char n1 = 'A';
    char n2 = 'B';

    cout << "Before swapping - n1 = " << n1 << ", n2 = " << n2 << endl;
    mySwap(n1, n2);
    cout << "After swapping - n1 = " << n1 << ", n2 = " << n2 << endl;
    return 0;
}