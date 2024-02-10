#include<stdio.h>
void sum(int a,int b,int c,int d);
int main(){
int a,b,c,d;
printf("enter a :");
scanf("%d",&a);
printf("enter b :");
scanf("%d",&b);
printf("enter c :");
scanf("%d",&c);
printf("enter d :");
scanf("%d",&d);
sum(a,b,c,d);
}
void sum(int a,int b,int c,int d){
    printf("sum = %d ",(a+b+c+d));
    }
