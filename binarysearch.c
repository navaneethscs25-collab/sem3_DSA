#include<stdio.h>

int main() {
    // Sorted array for binary search
    int arr[100] = {0};
    int n;
    printf("Enter the size of array :");
    scanf("%d", &n);

    printf("Enter the array elements : \n");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("\nEnter a number to search :");
    scanf("%d", &key);

    int st=0;
    int end=n-1;
    int idx = -1;

    while(st<=end) {
        int mid = (st+end)/2;
        if(arr[mid] == key) {
            idx = mid;
            break;
        } else if (arr[mid] > key) {
            end = mid-1;
        } else {
            st = mid+1;
        }
    }

    printf("Key is at index : %d", idx);
    return 0;
}