#include<stdio.h>
#include<windows.h>
#include<stdbool.h>

/**
* Check by ascii
*/
int f1(char* s, int i)
{
	int asci = (int)s[i];
	if (asci > 65 && asci <123 || asci == 32)  return f1(s, ++i);
		else return i;
}
/**
* Method for get length of string
*/
int length(char* s)
{
	return f1(s, 0);
}

main()
{
	char s1[100];
	char s2[100];
	
	printf("s1 = ");
	gets(s1);
	printf("s2 = ");
	gets(s2);
	printf("length s1 = %d\n", length(s1));
	printf("length s2 = %d\n", length(s2));
}
