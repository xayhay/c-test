#include <stdio.h>
int main()
/*celsius = 5 * (fahr - 32) / 9
fahr*/
{
	float fahr;
	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3.1f\t%6.1f\n", fahr, 5 * (fahr - 32) / 9);
	return 0;
}