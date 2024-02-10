#include<stdio.h>
void interprime(int x,int y);
int main(){
int lower,upper;
printf("Input lower limit : ");
scanf("%d",&lower);
printf("Input upper limit : ");
scanf("%d",&upper);
interprime(lower,upper);
}
void interprime(int x,int y){
    int flag=0;
printf("output prime number between %d - %d are : ",x,y);
for (int i=x;i<=y;i++){
        flag=0;
for(int j=2;j<i;j++){
    if(i%j==0){
        flag++;
        break;
    }

   }
 if (flag==0){
   printf(" %d",i);
}

}}








