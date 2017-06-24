#include<stdio.h>
int main()
{
	int c;
	while (c = (getchar() != EOF))//验证getchar() != EOF的值是0还是1
		putchar(c);
}//运行结束