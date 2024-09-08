#include <stdio.h>
#include <math.h>
#define PI = 3.14159

int main() {

    float radius, area;
    
    printf("Enter radius of circle\n");
    scanf("%f", &radius);

    area = M_PI * pow(radius, 2);

    printf("Area of circle is %f \n", area);

    return 0;
}