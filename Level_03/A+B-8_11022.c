/*	문제 : 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
	입력 : 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
		   각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
	출력 : 각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력한다. x는 테스트 케이스 번호이고 1부터 시작하며, C는 A+B이다.	*/

#include <stdio.h>

int		main(void)
{
	int A, B, T;

	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &A, &B);
		if (((0 < A) && (A < 10)) && ((0 < B) && (B < 10)))
		{
			printf("Case #%d: %d + %d = %d\n", i, A, B, A+ B);
		}
		else
		{
			printf("숫자를 잘못 입력하였습니다.\n프로그램을 종료합니다.");
			return (1);
		}
	}
}
