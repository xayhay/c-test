#include<stdio.h>
int main()
{//输入复制到输出，且tab作为‘\t'，退格作为'\b’，反斜杠用'\\'输出
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
	}//如何定位退格符
}
