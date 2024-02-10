#include <stdio.h>
void with(int a,int b);
void without(int a,int b);
int main(){
int a,b;
printf("enter a :");
scanf("%d",&a);
printf("enter b :");
scanf("%d",&b);
with(a,b);
without(a,b);
return 0;
}
void with(int a,int b){
int c;
c=b-a;
a=a+c;
b=b-c;
printf(" a=%d\n b=%d\n",a,b);
}
void without(int a,int b){
a=a+b;
b=a-b;
a=a-b;
printf(" a=%d\n b=%d",a,b);
}

