#include <stdio.h>

int		main(void)
{
	int		testcase, num, score, sum;
	int		numArr[1000];
	float	avg, count = 0;

	scanf("%d\n", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		scanf("%d", &num);
		for (int j = 0; j < num; j++)
		{
			scanf("%d", &score);
			numArr[j] = score;
		}
		sum = 0;
		for (int k = 0; k < num; k++)
		{
			sum += numArr[k];
		}
		avg = sum / num;
		for (int k = 0; k < num; k++)
		{
			if (avg < numArr[k])
				count++;
		}
		printf("%.3f%%\n", count / num * 100);
		count = 0;
		num = 0;
	}
}
