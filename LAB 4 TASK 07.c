#include<stdio.h>

int fact(int n);

int main() {
    int n;
    int factorial;

    printf("Enter n: ");
    scanf("%d", &n);

    factorial = fact(n);

    printf("%d\n", factorial);

    return 0;
}
/* 5*fact(4)=5*24
   4*fact(3)=4*6
   3*fact(2)=3*2
   2*fact(1)=2*1
   1*1 */
int fact(int n){
    if (n==1){
        return 1;
    }
    else{
 return n*fact(n-1);}}

