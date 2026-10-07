#include<stdio.h>
// #include<climit>

int main() {
    int arr[100] = {0};
    int n;
    printf("Enter the size of array :");
    scanf("%d", &n);

    printf("Enter the array elements : \n");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n");

    int max=arr[0];
    int min=arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("max : %d \n", max);
    printf("min : %d \n", min);

    return 0;
}