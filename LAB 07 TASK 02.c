#include<stdio.h>
int prime(int n);
int main(){
int number,flag,x;
printf("Input any number : ");
scanf("%d",&number);
x = prime(number);
printf("return %d",x);
}
int prime(int n){
int flag =1;
for(int i=2;i<n;i++){
    if(n%i==0){
        flag--;
        break;
    }}
    return flag;
}






