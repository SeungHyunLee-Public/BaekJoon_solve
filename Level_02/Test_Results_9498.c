/*	문제 : 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
	입력 : 첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
	출력 : 시험 성적을 출력한다.	*/

#include <stdio.h>

int		main(void)
{
	int A;

	scanf("%d", &A);
	if ((A > 100) || (A < 0))
	{	
		printf("잘못된 점수를 입력하였습니다.\n프로그램을 종료합니다.");
		return (-1);
	}
	if ((90 <= A) && (A <= 100))
		printf("A");
	else if (80 <= A)
		printf("B");
	else if (70 <= A)
		printf("C");
	else if (60 <= A)
		printf("D");
	else
		printf("F");
}
