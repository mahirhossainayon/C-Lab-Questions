#include<stdio.h>
void prime(int a);
void evenOdd(int a);
int main(){

int a;
printf("enter a : ");
scanf("%d",&a);
prime(a);
evenOdd(a);

}
void prime(int a){
    int flag = 0;
    for (int i=2;i<a;i++){
    if (a%i==0){
         flag = 1;
         break;}
    else{
         continue;}}
    if (flag!=0){ printf("NOT PRIME NUMBER \n");}
    else{ printf("PRIME NUMBER \n");}}

void evenOdd(int a){

if(a%2==0){
    printf("EVEN NUMBER \n");}
    else {printf("ODD NUMBER \n");}

}

