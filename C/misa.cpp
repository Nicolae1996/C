#include<stdio.h>
#include<math.h>

main()
{
	float x = 2.3;
	float a = 1.5;
	float p = 0;
	float z = 0;
	float b = 1;
	while(a >= 1.4 && a <=7.3)
	{
		p = pow( (1 + pow(sin(pow(x, 3)), 2))/(log(pow(a, 2)) + pow(x, 3)) , 1/3);
		if (a > x)
		{
			z = 2 * p  - (1 - x)/(cos(a + pow(x, 2)));
		}
		else if (a <= x)
		{
			z = 1 + b - log(a);
		}
		printf("\nZ value = %f\n", z);
		a+=0.15;
	}
}
