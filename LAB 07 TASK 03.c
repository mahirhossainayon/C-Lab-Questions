#include<stdio.h>
#include<math.h>
int powerfunc(int x,int y);
int main(){
int number,power;
printf("Input any number : ");
scanf("%d",&number);
printf("Input power : ");
scanf("%d",&power);
int result = powerfunc(number,power);
printf("output : %d ",result);
}
int powerfunc(int x,int y){
return pow(x,y);

}







