#include<stdio.h>
int main()
{
	int c;
	while (c = (getchar() != EOF))//��֤getchar() != EOF��ֵ��0����1
		putchar(c);
}//���н���