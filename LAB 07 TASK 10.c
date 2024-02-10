#include<stdio.h>
int remov(int arr[5]);
int main(){
int arr[5]={10,20,30,40,50};
remov(arr);
for(int i=0; i<4;i++){
    printf("%d \n",arr[i]);
}}
int remov(int arr[5]){
for (int i=1;i<4;i++){
    arr[i]=arr[i+1];
}
return arr[5];
}

