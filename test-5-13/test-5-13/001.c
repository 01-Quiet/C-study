#include <stdio.h>
#include <math.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    float len = a + b + c;
    float p = (a + b + c) / 2.0;
    float area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("circumference=%.2f area=%.2f\n", len, area);
    return 0;
}