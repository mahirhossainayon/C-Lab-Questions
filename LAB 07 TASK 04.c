#include<stdio.h>
void reverse(int x);
int main(){
int number;
printf("Input any number : ");
scanf("%d",&number);
reverse(number);
}
void reverse(int x){
    int flag =0;
    int a[100];
    for(int i=0;i<100;i++){
    if(x == 0){
    break;}
    a[i]=x%10;
    x = x/10;
    flag++;}
    printf("Output Reverse : ");
    for(int i=0;i<flag;i++){
    printf("%d",a[i]);}
}







