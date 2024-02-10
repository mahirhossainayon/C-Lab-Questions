#include<stdio.h>
void reverse(int number);
int main(){
int number;
printf("enter a 4 digit number: ");
scanf("%d",&number);
reverse(number);
}
void reverse(int number){
int a,b,c,d;
a=number%10;
number = number/10;
b=number%10;
number = number/10;
c=number%10;
number = number/10;
d=number%10;
printf("reverse :%d%d%d%d",a,b,c,d);
}
