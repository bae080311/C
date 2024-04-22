#include <stdio.h>
int check();
int main()
{
	int success = 0;
	for (int i=0;i<4;i++) //4회 이내에 비밀번호를 맞춰야 하는 코드 입니다.
	{
		if (check()) {
			success = 1;
			printf("로그인 성공\n");
			break;
		}
		else
			printf("로그인 실패\n");
	}
	if (success==0)
	{
		printf("프로그램 종료\n");
	}
}
int check()
{
	static call_cnt;
	call_cnt++;
	printf("로그인 시도 %d회 비밀번호 입력: ", call_cnt);

	int n;
	scanf_s("%d", &n);
	if (n==1234) {
		return 1;
	}
	return 0;
}