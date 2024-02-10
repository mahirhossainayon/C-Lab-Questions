#include<stdio.h>
int main ()
{
int first=0,second=1,n;
 printf (" Enter n: ");
 scanf("%d",&n);
 printf ("%d %d ", first, second);

for(int i=2;i<n;i++){
   int next=first+second;
    first=second;
    second=next;
     printf ("%d ",next);

}



}
