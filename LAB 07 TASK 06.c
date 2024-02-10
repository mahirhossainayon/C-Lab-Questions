#include<stdio.h>
void rangeoddeven(int x);
int main(){
int range;
printf("Input range: ");
scanf("%d",&range);
rangeoddeven(range);
}
void rangeoddeven(int x){

printf("output even numbers : ");
for (int i=1;i<=x;i++){
    if(i%2==0){
    printf(" %d",i);
    }
}
printf("\n output odd numbers : ");
for (int i=1;i<=x;i++){
    if(i%2!=0){
        printf(" %d",i);
    }
}
}









