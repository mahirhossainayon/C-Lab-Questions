#include<stdio.h>
int main()
{
int a,v=2,sum=0;
printf("Number of even number: ");
scanf ("%d",&a);
printf("value     Sum \n");
for(int i=1; i<=a; i++){
    sum +=v;
    printf ("%2d         %2d\n" ,v,sum);
    v+=2;
}
return 0;
}
