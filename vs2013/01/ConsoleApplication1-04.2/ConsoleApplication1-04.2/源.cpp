#include <stdio.h>
int main()
{//编写输入复制到输出且多个空格用一个代替的程序
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ') {//判断是否空格，第一个输出
			putchar(c);
			while ((c = getchar()) == ' ' && c != EOF)//第一个空格后使用while过滤其余空格
				;
		}
		putchar(c);
	}
	return 0;
}