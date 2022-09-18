#include<stdio.h>
int main()
{
	int n=0, i, sum = 0;
	while (n != -99)
	{
		scanf_s("%d", &n);
		for (i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum += 1;
			}
		}
		if (sum == 1)
		{
			printf("%d is Prime Number\n", n);
		}
		sum = 0;
	}
}