#include<stdio.h>
int main()
{//��дһ��������ÿ��һ�����ʵ����ƴ�Ӧ����
	int a;
	while ((a = getchar()) != EOF){
		if ( a == '\n' || a == '\t');//�޹��ַ��޷���
		else if (a == ',' || a == ' ' || a == '.'){//�����ַ����軻�����壨Ӣ�ģ�
			printf("\n");
			while ((a = getchar()) == ' ' && a != EOF)//��һ���ո��ʹ��while��������ո�
				;
		}
		putchar(a);
	}
	return 0;
}