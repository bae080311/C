#include <stdio.h>
void key(a) {
	int f = 2, count = 0;
	while (f <= a)
	{
		if (a % f == 0)
			count++;
		f++;
	}
	if (count == 1)
		printf("%d는 소수입니다.\n", a);
	else
		printf("%d는 소수가 아닙니다.\n", a);
}
int main()
{
	int a;
	printf("2 이상 정수 입력: ");
	scanf("%d", &a);
	key(a);
	return 0;
}