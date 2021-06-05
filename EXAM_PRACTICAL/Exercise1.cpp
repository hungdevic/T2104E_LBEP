#include <stdio.h>
#include <math.h>

float areaTriangle(float a, float b, float c)
{
    float p, area;
    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    return area;
}

int main()
{
    float a, b, c;
    printf("Input three number for triangle: ");

    printf("\nnumber 1st: ");
    scanf("%f", &a);

    printf("\nnumber 2nd: ");
    scanf("%f", &b);

    printf("\nnumber 3rd: ");
    scanf("%f", &c);
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("\nThe three numbers entered do not form a triangle\n");
    }
    else
    {
        
        printf("\nThe three numbers entered form a triangle\n");
        printf("\nThe area of that triangle is: %f\n", areaTriangle(a,b,c));
    }
}
