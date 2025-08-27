#include <stdio.h>

int main()
{
    int number;
    printf("enter youre number: ");
    scanf("%d", &number);
    if (number % 3 == 0)
    {
        printf("three");
    }
    else if (number % 4 == 0)
    {
        printf("Four");
    }
    else if (number % 5 == 0)
    {
        printf("five");
    }
    else
    {
        printf("not divided by anyone");
    }

    return 0;
}