#include <stdio.h>
void bubbleSort(int arr[],int n) ;
int main() {
    int size;
    int n;
    scanf("%d",&n);
int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr,n);
   for(int i=0; i<=n;i++){
    printf("%d \n",arr[i]);
}

    return 0;
}
void bubbleSort(int arr[],int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <n; j++) {
            if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                arr[j] = arr[j + 1];
            arr[j+1]=temp;
            }
        }
    }}

