#include<stdio.h>
int main()
{//��дһ��ͳ�ƻ��з����Ʊ�����ո�����ĳ���
	int a, b, c, d;
	b = c = d = 0;
	while ((a = getchar()) != EOF)
	if (a == '\n')
		++b;
	else if (a == '\t')
		++c;
	else if (a  == ' ')
		++d;
	printf("��%d�����У�%d���Ʊ����%d���ո�\n", b, c, d);//�ɻ�Ϊʲô�ڿո�ĺ����z+ctrlû�н�����������һ��ʹ��ȴ��ʶ��
}