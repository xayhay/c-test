#include<stdio.h>
int main()
{//���븴�Ƶ��������tab��Ϊ��\t'���˸���Ϊ'\b������б����'\\'���
	int a;
	while ((a = getchar()) != EOF)
	{
		if (a == '\t')
			printf("\\t");
		else if (a == '\b')
			printf("\\b");
		else if (a == '\\')
			printf("\\\\");
		else putchar(a);
	}//��ζ�λ�˸��
}
