#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int* ptr = NULL;//��ʼ��������һ��ָ�����p����ָ����ڴ����汣�����int���͵�����
	int num, i;

	printf("�������¼�������ĸ�����");
	scanf_s("%d", &num);

	ptr = (int*)malloc(num * sizeof(int));//�ö����������

	for (i = 0; i < num; i++)
	{
		printf("��¼���%d��������", i + 1);
		scanf_s("%d", &ptr[i]);
	}

	printf("��¼��������ǣ�");
	for(i = 0; i < num; i++)
	{
		printf("%d",ptr[i]);
	}
	putchar('\n');
	free(ptr);

	return 0;
}