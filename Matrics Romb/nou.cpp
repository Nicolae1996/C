#include<stdio.h>
#include<time.h>
#include<windows.h>
main()
{
	system("color 0A");
	int n = 3;
	int prod = 1;
	int a[n][n];
	int j = 0;
	int option;
	printf("---------------Meniu---------------------\n");
	printf("1 - Insert data manual?\n");
	printf("2 - Insert auto data\n");
	printf("Your response - ");
	try{
		scanf("%d", &option);		
	}
	catch(int e)
	{
		printf("\nCaused an error. Error nr %d", e);
	}
	printf("\nBy default %d elements\n", n);
	switch(option)
	{
		case 1: {
			for (int i = 0; i < n; i++)
			{
				for(int j = 0; j < n; j++)
				{
					printf("a[%d][%d]=", i, j);
					scanf("%d", &a[i][j]);
				}
			}
		break;
		}
		case 2:{
			srand(time(NULL));
	int const data = 20;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % data;
		}

			break;
		}
	}

	
	float mij = n/2;
	int k = 0;
	
	for (int i = 0; i < n; i++)
	{		
		if (i < (int)mij){
				//top
				j = (int)mij - k;
				while(j < (int)mij + k++)
				{
					prod*=a[i][j];
					j++;
				}
			}
			else if (i == (int)mij)
			{
				//center
				k = n;
				for (j = 0; j < n; j++)
				{
					prod*=a[i][j];
				}
			}
			else{
				//down
				k = 1;
				j = k;
				while(j < n - 2 * k++){
					prod*=a[i][j];
					j++;
				}
			}
	}
	
	printf("Le produit est %d", prod);
}
