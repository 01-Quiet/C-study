#include<stdio.h>
int main()
{
	int a[10], b[10], i;
	printf("请输入10个数：\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 10; i++)
		b[i] = a[9 - i];
	printf("逆序输出10个数字：\n");
	for (i = 0; i < 10; i++)
		printf("%d", b[i]);
	return 0;
}