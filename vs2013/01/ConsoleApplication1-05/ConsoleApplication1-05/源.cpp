#include<stdio.h>
int main()
{//编写一个程序，以每行一个单词的形势答应输入
	int a;
	while ((a = getchar()) != EOF){
		if ( a == '\n' || a == '\t');//无关字符无方法
		else if (a == ',' || a == ' ' || a == '.'){//常用字符给予换行意义（英文）
			printf("\n");
			while ((a = getchar()) == ' ' && a != EOF)//第一个空格后使用while过滤其余空格
				;
		}
		putchar(a);
	}
	return 0;
}