/*	문제 : 0 <= 정수 <= 99, 주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들고, 각 자리의 숫자를 더한다.
		   그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙이면 새로운 수를 만들 수 있다.	*/

#include <stdio.h>

int ft_find(int M);

int		main(void)
{
	int Number;

	scanf ("%d", &Number);
	printf("%d", ft_find(Number));
}

int		ft_find(int Number)
{
	int		A, B, C, D;
	int		result, count;

	count = 0;
	result = Number;

	while (1)
	{
		A = Number / 10;
		B = Number % 10;
		C = (A + B) % 10;
		D = (B * 10) + C;
		Number = D;
		count++;
		if (result == D) break;
	}
	return (count);
}
