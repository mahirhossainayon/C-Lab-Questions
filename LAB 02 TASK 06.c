#include <stdio.h>
double calculateArea(double length, double width);
double calculatePerimeter(double length, double width);

int main() {
    double length, width;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    double area = calculateArea(length, width);
    printf("The area of the rectangle is: %.2lf\n", area);

    double perimeter = calculatePerimeter(length, width);
    printf("The perimeter of the rectangle is: %.2lf\n", perimeter);

    return 0;
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

// Function to calculate the perimeter of a rectangle
double calculatePerimeter(double length, double width) {
    return 2 * (length + width);
}
