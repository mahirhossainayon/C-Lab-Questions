#include<stdio.h>
int expo(int x,int y);
int main()
{
  int x,y;
 printf ("Enter x: ");
 scanf("%d",&x);
 printf ("Enter y: ");
 scanf("%d",&y);
int  a= expo(x,y);
 printf ("%d",a);
 return 0;

}
int expo(int x,int y){
if(y==0){
    return 1;
}
else{
    return x*expo(x,y-1);
}

}
