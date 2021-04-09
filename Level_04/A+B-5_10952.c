/*	문제 : 두 정수 A와 B를 입력받은 다음, A + B 를 출력하는 프로그램을 작성하시오.
	입력 : 입력은 여러개의 테스트 케이스로 이루어져 있다.
		   각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다.
		   (0 < A, B < 10)
		   입력의 마지막에는 0 두 개가 들어온다.
	출력 : 각 테스트 케이스마다 A + B를 출력한다.	*/

#include <stdio.h>

int		main(void)
{
	int		A, B;

	A = 1;
	B = 1;

	while ((A != 0) || (B != 0))
	{
		scanf("%d %d", &A, &B);
		if ((0 < A && A < 10) && (0 < B && B < 10))
		{
			printf("%d\n", A + B);
		}
	}
}