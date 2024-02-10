#include <stdio.h>
void quatient(int num1, int num2);
void remainder(int num1, int num2);

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    quatient(num1,num2);
    remainder(num1,num2);
    return 0;
}
void quatient(int num1, int num2){
if (num2 == 0) {
        printf("Error!! Can't divide\n");
    } else {
       int quotient = num1 / num2;
        printf("Q=%d",quotient);
    }

}
void remainder(int num1, int num2){
if (num2 == 0) {
        printf("Error!! Can't divide\n");
    } else {
       int remain= num1 % num2;
        printf("R=%d",remain);
    }
}

