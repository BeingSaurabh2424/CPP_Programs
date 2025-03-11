#include<iostream>
inline void add(int n1,int n2,int n3=1, int n4 = 3)
{
    int result = n1+n2+n3+n4;
    printf("The addition is %d\n",result);
}

int main()
{
    add(24,24);

    return 0;
}