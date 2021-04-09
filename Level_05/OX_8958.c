#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
	int		N, sum, add;
//	char	M;
	char	arr[81];

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		sum = 0, add = 1;
		scanf("%s", arr);
		for (unsigned int j = 0; j < strlen(arr); j++)
		{
			if (arr[j] == 'O')
			{
				sum += add;
				add++;
			}
			else
				add = 1;
		}
	printf("%d\n", sum);
	}
	return (0);	
}		
