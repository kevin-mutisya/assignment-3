//program to calculate the area of a circle
#include <stdio.h>
#define Pi 3.142
main()
{
    float radius,area;
    printf("enter the radius of the circle\n");
    scanf("%f",&radius);
    area = Pi*radius*radius;
    printf("The area is %f", area);
    return 0;
}
