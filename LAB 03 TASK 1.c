#include<stdio.h>
void passORnot(int n);
int main(){
int number;
printf("Enter your mark : \n");
scanf("%d",&number);

passORnot(number);

}
void passORnot(int n){

if (n>=60){
    printf("Passed");
}
else {
    printf("Not Passed");
}

}
