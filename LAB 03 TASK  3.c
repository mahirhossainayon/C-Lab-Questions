#include <stdio.h>
void leapYear(int year);
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    leapYear(year);
}
void leapYear(int year){
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year\n");
    } else {
        printf("Not Leap Year\n");
    }

    return 0;
}

