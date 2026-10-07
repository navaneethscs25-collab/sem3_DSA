#include<stdio.h>

int main() {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    int intial =n;
    int rev = 0;
    while (n>0) {
        int last =n%10;
        rev = 10*rev + last;
        n /= 10;
    }

    if(rev == intial) printf("Pallindrone");
    else printf("Not a pallindrone");
    return 0;
}