#include<stdio.h>
int main(){
       int n;
    scanf("%d",&n);
int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
int max01=0,max02=0;
for(int i=0; i<n;i++){
    if(arr[i]>max01){
        max02=max01;
        max01=arr[i];
    }
    else if((arr[i]<max01)&&(arr[i]>max02)){
        max02=arr[i];
    }
}
printf("%d , %d",max01,max02);

}

