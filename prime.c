#include<stdio.h>

int main() {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    int flag =1;
    for(int i=1; i<n; i++) {
        if(n%i == 0) {
            flag =0;
            break;
        }
    }
    if(flag) printf("Prime Number");
    else printf("Composite Number");

    return 0;
}