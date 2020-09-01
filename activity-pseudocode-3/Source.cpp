#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x,k=1;
	printf("input");
	scanf("%d" , &x);
	for (int i = 0; i < x; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < x; j++)
			{
				if (j % 2 == 0)
				{
					printf("_");
				}
				else
				{
					printf("*");
				}
			}

			k++;
			printf("\n");
		}
		else
		{
			for (int j = 0; j < x; j++)
			{
				if (j % 2 == 0)
				{
					printf("*");
				}
				else
				{
					printf("_");
				}
			}
			k++;
			printf("\n");

		}
	
	}
		return 0;
	
}