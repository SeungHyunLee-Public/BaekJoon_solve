/*	문제 : 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
	입력 : 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
	출력 : 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.	*/

#include <stdio.h>

int		main(void)
{
	int N;

	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if ((1 <= N) && (N <= 100))
			{
				printf("*");
			}
			else
				printf("잘못된 숫자를 입력하였습니다.\n프로그램을 종료합니다.");
		}
		printf("\n");
	}
}
