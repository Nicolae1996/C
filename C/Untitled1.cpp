#include<stdio.h>

main()
{
	int i, m = 1, k = 4;
	for(i = 1; i<=4; i++)
	{
		while(m<6)
		{
			m++;
			k-=2;
			if (i>2) break;
			printf("m=%d", m);
		}
		if (i<=2) continue;
		printf("k=%d", k);
	}
}
