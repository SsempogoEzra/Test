#include <stdio.h>

// Function to calculate the area of a rectangle
int calculate_area(int length, int width) {
    int area = length * width;
    return area;
}

int main() {
    int length = 5, width = 10;
    int result = calculate_area(length, width);
    printf("Area of the rectangle: %d\n", result);
    return 0;
}