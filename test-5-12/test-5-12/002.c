#include<stdio.h>
int main()
{
	int a[10], i, min, max;
	printf("请输入10个数:\n");
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
	printf("最大值为%d最小值为%d", max, min);
}