#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c, temp = 0;
	printf("����a,b,c:");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		temp = a; a = b; b = temp;
	}
	if (a > c)
	{
		temp = a; a = c; c = temp;
	}
	if (b > c)
	{
		temp = b; b = c; c = temp;
	}
	printf("��С����Ϊ��%d %d %d\n", a, b, c);
}
