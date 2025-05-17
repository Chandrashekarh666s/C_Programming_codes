#include <stdio.h>

#define PI 3.14159

float areaOfCircle(double radius) {
    return PI * radius * radius;
}

int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    double area = areaOfCircle(r);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}
