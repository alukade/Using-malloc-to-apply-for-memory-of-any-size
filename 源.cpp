#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int* ptr = NULL;//初始化，定义一个指针变量p，其指向的内存里面保存的是int类型的数据
	int num, i;

	printf("请输入待录入整数的个数：");
	scanf_s("%d", &num);

	ptr = (int*)malloc(num * sizeof(int));//用多少申请多少

	for (i = 0; i < num; i++)
	{
		printf("请录入第%d个整数：", i + 1);
		scanf_s("%d", &ptr[i]);
	}

	printf("你录入的整数是：");
	for(i = 0; i < num; i++)
	{
		printf("%d",ptr[i]);
	}
	putchar('\n');
	free(ptr);

	return 0;
}