#include<stdio.h>
void perfect(int lower,int upper);
int main(){
int lower,upper;
printf("Input lower limit : ");
scanf("%d",&lower);
printf("Input upper limit : ");
scanf("%d",&upper);
perfect(lower,upper);
}
void perfect(int lower,int upper){

printf("output perfect numbers  : ");
for (int i=lower;i<=upper;i++){
       int  sum=0;
for(int j=1;j<i;j++){
    if(i%j==0){
        sum+=j;
    }
    else{continue;}
   }
 if (sum==i){
   printf(" %d",i);
}

}}









