/*if a number is divided by both 3 and 4 let say 24*/
#include <stdio.h>

int main()
{
    int number;
    printf("Enter your number: \n");
    scanf("%d", &number);
    if (number % 60 == 0)
    {
        printf("Number is divisible by 3, 4 and 5 "); // can be "number is divided by 3 \n number is divided by 4"
    }
    else if (number % 12 == 0)
    {
        printf("number is divisible by 3 and 4 ");
    }
    else if (number % 20 == 0)
    {
        printf("number is divisible by 4 and 5 ");
    }
    else if (number % 15 == 0)
    {
        printf("number is divisible by 3 and 5 ");
    }
    else if (number % 3 == 0)
    {
        printf("number is by 3 only ");
    }
    else if (number % 4 == 0)
    {
        printf("number is by 4 only ");
    }
    else if (number % 5 == 0)
    {
        printf("number is by 5 only ");
    }
    else
    {
        printf("number is neither divisible by 3 neither by 4 nor by 5");
    }

    return 0;//git push origin main
}