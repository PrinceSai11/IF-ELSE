/*if a number is divided by both 3 and 4 let say 24*/
#include <stdio.h>

int main()
{
    int number;
    printf("Enter your number: \n");
    scanf("%d", &number);
    if (number % 12 == 0)
    {
        printf("Number is divisible by 3 and 4 both "); // can be "number is divided by 3 \n number is divided by 4"
    }
    else if (number % 3 == 0)
    {
        printf("number is divisible by 3 only ");
    }
    else if (number % 4 == 0)
    {
        printf("number is by 4 only ");
    }
    else
    {
        printf("number is neither divisible by 3 neither by 4");
    }

    return 0;
}