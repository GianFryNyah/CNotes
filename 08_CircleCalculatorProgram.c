#include <stdio.h>
#include <math.h>

int main(){
    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;
    //is good practice to write const variable name in UPPER CASE

    printf("Enter the radius value: ");
    scanf("%lf", &radius);

    //area = PI * radius * radius;
    area = PI * pow(radius, 2);
    surface_area = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    //We avoid to use integer on the division above avoiding integer division that only take the integer part of the result

    printf("Area: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surface_area);
    printf("Volume: %.2lf\n", volume);
    return 0;
}