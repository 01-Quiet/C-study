#include<stdio.h>
int main()
{
	int a[10], i, min, max;
	printf("������10����:\n");
	for (i = 0; i < 0; i++)
		scanf("%d", &a[i]);
	min = max = a[0];
	for (i = 1; i < 0; i++)
	{
		if (min > a[i])
			min = a[i];
		else if (max < a[i])
			max = a[i];
	}
	printf("���ֵΪ%d��СֵΪ%d", max, min);
}