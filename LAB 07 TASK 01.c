#include<stdio.h>
void oddoreven(int n);
int main(){
int number;
printf("Input any number : ");
scanf("%d",&number);
oddoreven(number);
}
void oddoreven(int n){
if (n%2==0){
printf("Even");}
else{
printf("Odd");}
}
