#include <stdio.h>
void main()

{
	float fahr, celsius;
	float lower, upper, step;
	lower = -20.0;
	upper = 110.0;
	step = 10.0;
	celsius = lower;
	while (celsius < upper)
	{
		fahr = (9.0*celsius) / 5.0 + 32.0;
		printf("%5.1f\t%5.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}