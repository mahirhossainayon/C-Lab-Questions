#include<stdio.h>
#include<math.h>
void armstrong(int x);
int main(){
int number;
printf("Input any number : ");
scanf("%d",&number);
armstrong(number);
}
void armstrong(int x){
    int original = x;
    int flag =0,sum=0;
    int a[100];
    for(int i=0;i<100;i++){
    if(x == 0){
    break;}
    a[i]=x%10;
    x = x/10;
    flag++;}

    for(int i=0;i<flag;i++){
   sum+=pow(a[i],flag);
    }
    if(sum == original){
        printf("Armstrong number");
    }
     else{
        printf("Not an Armstrong number");
    }
}







