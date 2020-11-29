/*	문제 : 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
	입력 : 첫째 줄에 N과 X가 주어진다. (1 ≤ N, X ≤ 10,000)
		   둘째 줄에 수열 A를 이루는 정수 N개가 주어진다. 주어지는 정수는 모두 1보다 크거나 같고, 10,000보다 작거나 같은 정수이다.
	출력 : X보다 작은 수를 입력받은 순서대로 공백으로 구분해 출력한다. X보다 작은 수는 적어도 하나 존재한다.	*/

#include <stdio.h>

int		main(void)
{
	int N, X;
	int count = 0;

	scanf("%d %d", &N, &X);
	int numArr[N];
	if (((1 <= N) && (N <= 10000)) && ((1 <= X) && (X <= 10000)))
	{
		for (int j = 0; j < N; j++)
			scanf("%d", &numArr[j]);
		for (int i = 0; i < N; i++)
		{
			if (numArr[i] < X)
			{
				printf("%d ", numArr[i]);
				count++;
			}
		}
	}
	else
	{
		printf("숫자를 잘못 입력하였습니다.\n프로그램을 종료합니다.");
		return (1);
	}
	if (count == 0)
	{
		printf("배열에 X보다 작은수가 반드시 존재해야합니다.\n프로그램을 종료합니다.");
		return (2);
	}
}
	
