#include<iostream>

inline void add(int s1, int s2)
{
    int result = s1+s2;
    printf("The addition is %d\n",result);
}
int main()
{
    add(24,24);
    return 0;

}