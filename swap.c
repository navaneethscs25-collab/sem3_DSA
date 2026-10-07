#include <stdio.h>
#include <stdlib.h>

// Swap 2 variables 
int main()
{
    int a,b;
    printf("Enter 2 numbers :");
    scanf("%d %d", &a, &b);
    printf("A :%d \n", a);
    printf("B :%d \n", b);
    a =a+b;
    b =a-b;
    a =a-b;
    printf("After Swapping \n");
    printf("A :%d \n", a);
    printf("B :%d \n", b);
    return 0;
}
