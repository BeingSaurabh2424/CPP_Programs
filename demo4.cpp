#include <iostream>

struct Time
{
private:
    int hr;
    int min;
    int sec;

public:
    void accept()
    {
        printf("Enter the hrs\n");
        scanf("%d",&hr);

        printf("Enter the mins\n");
        scanf("%d",&min);

        printf("Enter the sec\n");
        scanf("%d",&sec);
    }

    void display()
    {
        printf("The time is %d : %d: %d\n",hr,min,sec);
    }
};

int main()
{
    struct Time t1;

    t1.accept();
    t1.display();
    return 0;
}
