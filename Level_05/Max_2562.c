/*	문제 : 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
	입력 : 첫째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다.
		   주어지는 자연수는 100보다 작다.
	출력 : 첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.	*/

#include <stdio.h>

int		main(void)
{
	int	 N;
	int	 i;
	int		list[8];
	int		max = 1;
	int		place = 0;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &N);
		list[i] = N;
	}
	for (i = 0; i < 9; i++)
	{
		if (list[i] > max)
		{
			max = list[i];
			place = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d\n", place);
}				
