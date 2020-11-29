/*	문제 : 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
		   하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
	입력 : 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
	출력 : 째 줄부터 N번째 줄까지 차례대로 별을 출력한다.	*/

#include <stdio.h>

int		main(void)
{
	int N, M;

	scanf("%d", &N);
	M = N;
	if ((1 <= N) && (N <= 100))
	{
		for (int i = 1; i <= N; i++)
		{
			for (int q = 1; q <= M-1; q++)
				printf(" ");
			M--;
			for (int j = 1; j <= i; j++)
				printf("*");
			printf("\n");
		 }
	}
	else
		printf("숫자를 잘못 입력하였습니다.\n프로그램을 종료합니다.");
}
