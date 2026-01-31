#include <stdio.h>

int main() {
    float side, length, width;
    float area_square, area_rectangle;

    // Area of square
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    area_square = side * side;
    printf("Area of square = %.2f\n", area_square);

    // Area of rectangle
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    area_rectangle = length * width;
    printf("Area of rectangle = %.2f\n", area_rectangle);

    return 0;
}
