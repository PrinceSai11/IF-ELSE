#include <stdio.h>

int main() {
    int networth;
    printf("enter your networth: \n $");
    scanf("%d", &networth);
    if (networth>=1000000000)
    {
        printf("you are eligible for black card");
    }
    else
    {
        printf("you are not eligible for black card");
    }
    return 0;
}