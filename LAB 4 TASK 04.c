#include <stdio.h>
int main() {
    int num, sum = 0,count=0;

    while (1) {
        printf("Enter an integer: ");
        scanf("%d", &num);
        if (num == 9999) {
            break;}
       else{ sum += num;
       count++;}

              }
printf("Enter an integer: %d",sum/count);
    return 0;
}

