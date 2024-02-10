#include <stdio.h>
void avg9999(int num);
int main() {
    int num;
avg9999(num);
}
    void avg9999(int num){
    int sum = 0,count=0;

    while (1) {
        printf("Enter an integer: ");
        scanf("%d", &num);
        if (num == 9999) {
            break;}
       else{ sum += num;
       count++;}}
printf("Avg: %d",sum/count);
    return 0;
}
