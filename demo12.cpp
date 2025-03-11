#include<iostream>


class Time
{
    int hr;
    int min;
    int sec;

public:
    void accept()
    {
        printf("Enter the hrs - ");
        scanf("%d", &hr);
        printf("Enter the mins - ");
        scanf("%d", &min);
        printf("Enter the secs - ");
        scanf("%d", &sec);
    }

    void display()
    {
        printf("The time is %d : %d : %d\n", hr, min, sec);

    }
};
int main()
{
    Time t1;
    printf("The size of the class Time is %d\n",sizeof(Time));

}