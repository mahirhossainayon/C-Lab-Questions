#include <stdio.h>

void maxmidmin(int a, int b, int c);

int main() {
    int a, b, c;

    printf("Enter the a: ");
    scanf("%d", &a);

    printf("Enter the b: ");
    scanf("%d", &b);

    printf("Enter the c: ");
    scanf("%d", &c);

    maxmidmin(a, b, c);

    return 0;
}

void maxmidmin(int a, int b, int c) {
    if (a > b) {
      if ((a > c) && (b > c)) {
            printf("maximum= %d, minimum= %d, median= %d\n", a, c, b);
        }

        else if ((a > c) && (b < c)) {
            printf("maximum= %d, minimum= %d, median= %d\n", a, b, c);
        }
    }
     else if (b > a) {
        if ((b > c) && (c > a)) {
            printf("maximum= %d, minimum= %d, median= %d\n", b, a, c);
        } else if ((b > c) && (a > c)) {
            printf("maximum= %d, minimum= %d, median= %d\n", b, c, a);
        }
    }
}
