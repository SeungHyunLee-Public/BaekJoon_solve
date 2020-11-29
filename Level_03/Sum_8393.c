/*	문제 : n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
	입력 : 첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.
	출력 : 1부터 n까지 합을 출력한다.	*/

#include <stdio.h>

int		main(void)
{
	int n, sum;
	
	sum = 0;
	scanf("%d", &n);
	if ((1 <= n) && (n <= 10000))
	{
		for (; n >= 1; n--)
		{
			sum +=n;
		}
		printf("%d", sum);
	}
	else
		printf("잘못된 숫자를 입력하였습니다.\n프로그램을 종료합니다.");
}
