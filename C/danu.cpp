// danu.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

int divi(int a, int b)
{
	int r;
	r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}
int main()
{
	int a[10], b[10], c[20], i, n, D, max;
	printf("Dati n:");
	scanf("%d", &n);
	printf("\n\nElementele vectorului a:\n");
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("\n\n");
	printf("Elementele vectorului b:\n");
	for (i = 0; i < n; i++)
	{
		printf("b[%d]=", i);
		scanf("%d", &b[i]);
	}
	printf("\n\n");
	for (i = 0; i < n; i++)
		c[i] = a[i];
	for (i = 0; i < n; i++)
		c[n + i] = b[i];
	printf("Elementele vectorului c:\n");
	for (i = 0; i < 2 * n; i++)
		printf("c[%d]=%d\n", i, c[i]);

	D = 1;
	int aux;
	int valid;

	//start
	for (int i = 1; i< 2 * n; i++)
	{
		valid = 0;
		for (int j = 0; j< 2 * n; j++)
		{
			int aux1 = aux;
			aux = divi(c[i], c[j]);
			if (aux == aux1) valid++;
		}
		if (valid == 2 * n)
		{
			D = aux;
			break;
		}
	}

	printf("D=%d", D);
	return 0;
}


