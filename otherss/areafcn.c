#include <stdio.h>
#include <conio.h>
#include <math.h>
float areaSquare(float side);
float areaCircle(float radius);

int main()
{
    float side, a, radius, area;
    printf("\nEnter your choice: \n1.Area of Square \n2.Area of Circle");
    scanf("%f", &a);
    if (a == 1)
    {
        printf("\nEnter the side length: ");
        scanf("%f", &side);
        area = areaSquare(side);
    }
    else if (a == 2)
    {
        printf("\nEnter the radius lenght: ");
        scanf("%f", &radius);
        area = areaCircle(radius);
    }
    printf("\nArea=%f ", area);
    return 0;
}
float areaSquare(float side)
{
    return side * side;
}
float areaCircle(float radius)
{
    return 3.14 * radius * radius;
}