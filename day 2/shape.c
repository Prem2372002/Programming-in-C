#include <stdio.h>
int main() {
    char shape;
    float size;
    printf("Enter the shape ('S' for Square, 'C' for Circle): ");
    scanf("%c", &shape);
    if (shape == 'S' || shape == 's') {
        printf("Enter the size of the square: ");
        scanf("%f", &size);
        float area_square = size * size;
        printf("Area of Square = %.2f\n", area_square);
    } else if (shape == 'C' || shape == 'c') {
        printf("Enter the radius of the circle: ");
        scanf("%f", &size);
        float area_circle = 3.14159 * size * size;
        printf("Area of Circle = %.2f\n", area_circle);
    } else {
        printf("Invalid shape input. Please enter 'S' for Square or 'C' for Circle.\n");
        return 1;
    }

    return 0;
}

