#include<stdio.h>
int linearSearch(int arr[5],int n);
int main(){
    int n,m;
    printf("enter your array size: ");
    scanf("%d",&m);
    int arr[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter your target value : ");
    scanf("%d",&n);
    linearSearch(arr,n);
}
int linearSearch(int arr[5],int n){
    for(int i=0;i<5;i++){
if (arr[i]==n){
    printf("Position of your target values %d \n",i);
              }
else{
    continue;
    }
                         }
                                  }
