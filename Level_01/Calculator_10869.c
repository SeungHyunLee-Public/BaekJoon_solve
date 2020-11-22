/*	문제 : 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.
	입력 : 두 자연수 A와 B가 주어진다. (1 ≤ A, B ≤ 10,000)
	출력 : 첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.	*/

#include <stdio.h>

int		main(void)
{
	int A;
	int B;

	scanf("%d %d", &A, &B);
	if (((0 < A) && (A < 10)) && ((0 < B) && (B < 10)))
	{
		printf("%d\n", A+B);
		printf("%d\n", A-B);
		printf("%d\n", A*B);
		printf("%d\n", A/B);
		printf("%d\n", A%B);
	}
	else
	{
		printf("입력이 잘못되었습니다.\n프로그램을 종료합니다.");
		return (1);
	}
}
