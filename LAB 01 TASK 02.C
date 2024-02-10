#include <stdio.h>
#define PI 3.14159
float calculateArea(int radius);

int main() {
    int radius ;
    printf("Enter the value for radius : ");
    scanf("%d",&radius);
    float area = calculateArea(radius);
    printf("area : %.2f \n",area);
    return 0;
}
// Function to calculate the area of a circle
float calculateArea(int radius) {
    return PI * radius * radius;
}

