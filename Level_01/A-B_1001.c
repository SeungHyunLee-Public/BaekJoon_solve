/*	문제 : 두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램을 작성하시오.
	입력 : 첫째 줄에 A와B가 주어진다. (0 < A, B < 10)
	출력 : 첫째 줄에 A-B를 출력한다.	*/

#include <stdio.h>

int		main(void)
{
	int A;
	int B;

	scanf("%d %d", &A, &B);
	if (((0 < A) && (A < 10)) && ((0 < B) && (B < 10)))
		printf("%d", A-B);
	else
	{
		printf("입력이 잘못되었습니다.\n프로그램을 종료합니다.");
		return (1);
	}
}
