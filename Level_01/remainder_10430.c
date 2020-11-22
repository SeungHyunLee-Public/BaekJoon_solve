/*	문제 : (A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
		   (A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
		   세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오
	입력 : 첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)
	출력 : 첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.	*/

#include <stdio.h>

int		main(void)
{
	int A;
	int B;
	int C;

	scanf("%d %d %d", &A, &B, &C);
	if ((((2 < A) && (A < 10000)) && ((2 < B) && (B < 10000)) &&((2 < C) && (C < 10000))))
	{
		printf("%d\n", (A+B)%C);
		printf("%d\n", ((A%C)+(B%C))%C);
		printf("%d\n", (A*B)%C);
		printf("%d\n", ((A%C)*(B%C))%C);
	}
	else
	{
		printf("입력이 잘못되었습니다.\n프로그램을 종료합니다.");
		return (1);
	}
}
