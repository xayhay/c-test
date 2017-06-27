#include<stdio.h>
int main()
{//编写一个统计换行符，制表符，空格个数的程序
	int a, b, c, d;
	b = c = d = 0;
	while ((a = getchar()) != EOF)
	if (a == '\n')
		++b;
	else if (a == '\t')
		++c;
	else if (a  == ' ')
		++d;
	printf("有%d个换行，%d个制表符，%d个空格\n", b, c, d);//疑惑：为什么在空格的后面加z+ctrl没有结束，而单独一行使用却可识别？
}