#include<stdio.h>
#include<windows.h>
main()
{
	int n, a[50];
	system("color 0A");
	printf("Donnes le nombre des elements: n = ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf("%d",&a[i]);
		printf("\n");
	}
	int count = 0;
	printf("Tu as introduit: \n");
	for(int i = 0; i < n; i++)
	{
		if (a[i] != i) count++;
		printf("%d ", a[i]);
	}
	printf("\nLa valeur du response est %d\n", count);
	system("pause");
}
