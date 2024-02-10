#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Output: ");
    for (int i = 0; i < n-1; i++) {
        printf("%d,", arr[i]);
    }
    printf("%d", arr[n-1]);
    printf("\n");
    return 0;
}

