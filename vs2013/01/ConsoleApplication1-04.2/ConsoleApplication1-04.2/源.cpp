#include <stdio.h>
int main()
{//��д���븴�Ƶ�����Ҷ���ո���һ������ĳ���
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ') {//�ж��Ƿ�ո񣬵�һ�����
			putchar(c);
			while ((c = getchar()) == ' ' && c != EOF)//��һ���ո��ʹ��while��������ո�
				;
		}
		putchar(c);
	}
	return 0;
}