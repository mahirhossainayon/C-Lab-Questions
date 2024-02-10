#include<stdio.h>
void reverse(int arr[5]);
int main(){
int n;
    scanf("%d",&n);
int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

reverse(arr);
for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}
void reverse(int arr[5]){

for (int i=0; i<3;i++){
        int temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i]=temp;
}



}
