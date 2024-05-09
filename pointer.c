#include <stdio.h>
int main()
{
	int a = 103;
	int* pa = null;

	pa = &a;

	printf("int a = 103;\n");
	printf("int *pa = null;\n");
	printf("pa = &a;\n");
	
	if (pa != null)
	{
		printf("pa는 유효한 포인터\n");
		printf("1.포인터 pa의 주소값 : %u\n", pa);
		printf("2.포인터가 가르키는 *pa의 데이터값 : %u\n", *pa);
	}
	else
	{
		printf("소스 코드 08행을 /* pa = &a; */처럼 주석 처리한 경우\n");
		printf("pa는 유효하지 않은 포인터!\n");
	}
	return 0;
}


#include <stdio.h>
int main()
{
	int a[5] = { 100, 200, 300, 400, 500 };
	int* p = a;
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] 주소 = %p\n", i, p + i);
		printf("a[%d] 값 = %d\n", i, *(p + i));
		printf("a[%d] 값 = %d\n", i, p[i]);
		printf("\n");
	}
}


#include <stdio.h>
int main()
{
	int a;
	double *pd = null;
	pd = &a;
	*pd = 13.8;

	if (pd != null)
	{
		printf("pd는 유효한 포인터\n");
		printf("1.포인터 pd의 주소값 : %u\n", pd);
		printf("2.포인터가 가리키는 *pd의 데이터값 : %u\n", *pd);
	}
	else
		printf("pd는 유효하지 않은 포인터\n");

	return 0;
}


#include <stdio.h>
int main()
{
	int a = 10, b = 20;
	int* pa = &a;
	int* pb = &b;
	int* pt;
	pt = pa;
	pa = pb;
	pb = pt;

	printf("%d %d %d", *pa, *pb, *pt);
}


#include <stdio.h>
void get_sum_diff(int x, int y, int* p_sum, int* p_diff);
int main()
{
	int sum = 0, diff = 0;
	get_sum_diff(100, 200, &sum, &diff);
	printf("합 = %d\n", sum);
	printf("차 = %d\n", diff);
	return 0;
}
void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_diff = x - y;
	*p_sum = x + y;
}
#include <stdio.h>
void get_int(int* px, int* py);
int main()
{
	int x, y;
	get_int(&x, &y);
	printf("정수의 합은 %d \n", x + y);
	return 0;
}
void get_int(int* px, int* py)
{
	printf("2개의 정수를 입력하시오 : ");
	scanf_s("%d %d", px, py);
}


#include <stdio.h>
int main()
{
	int a[5] = { 100, 200, 300, 400, 500 };
	int *p = a;
	printf("주소 = %p, 값 = %d\n", p, *p);
	p++;
	printf("*p++; 후 주소 = %p, 값 = %d\n", p, *p);
	(*p)++;
	printf("(*p)++; 후 주소 = %p, 값 = %d\n", p, *p);
	++*p;
	printf("++* p; 후 주소 = %p, 값 = %d\n", p, *p);
	*++p;
	printf("*++p; 후 주소 = %p, 값 = %d\n", p, *p);
}


#include <stdio.h>
int main()
{
	int arr[] = { 100, 200, 300 };
	int* p = arr;
	int value = 0;
	printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
	value = *p + 1;
	printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
	value = *(p + 1);
	printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
	value = *p++;
	printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
	value = (*p)++;
	printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
	value = *++p;
	printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
	value = ++ * p;
	printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
}


#include <stdio.h>
int main()
{
	int a[] = { 1,2,3,4,5,6 };
	int* p = a;
	int* q = a + 3;
	printf("%d\n", *(a + 1));
	printf("%d\n", *(p + 2));
	printf("%d\n", *(q + 1));
	printf("%d\n", p[1]);
}


#include <stdio.h>
int main()
{
	int a[5] = {100, 200, 300, 400, 500};
	int* p = a;
	printf("주소 = %d, 값 = %d\n", p, *p);
	printf("주소 = %d, 값 = %d\n", p+1, *p+1);
	printf("주소 = %d, 값 = %d\n", p+1, *(p+1));
}


#include <stdio.h>
void array_copy(int a[], int b[], int size);
void array_print(int* a, int size);
int array_search(int* a, int size, int search);
int main()
{
	int a[10] = { 1, 5, 8, 0, 2, 4,10 };
	int b[10] = { 0 };
	array_copy(a, b, 10);
	array_print(b, 10);
	printf("개수 : %d\n", array_search(b, 10, 0));
}
void array_copy(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++)
	{
		b[i] = a[i];
	}
}
void array_print(int* a, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d", a[i]);
}
int array_search(int* a, int size, int search)
{
	int cnt = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] == search)
			cnt++;
	}
	return cnt;
}


#include <stdio.h>
void swap(int x, int y);
int main()
{
	int a = 100, b = 200;
	printf("main 초기값: %d b= %d\n", a, b);
	swap(&a, &b);

	printf("main 변환값: a= %d b= %d\n", a, b);
	return 0;
}
void swap(int x, int y)
{
	int tmp;
	printf("swap 이전값: x= %d y= %d\n", x, y);
	tmp = x;
	x = y;
	y = tmp;

	printf("swap 이후값: x= %d y= %d\n", x, y);
}


#include <stdio.h>
int main()
{
	char* p[4] = { "apple", "blueberry","orange", "melon" };
	for (int i = 0; i < 4; i++)
	{
		printf("%s", p[i]);
		printf("\n");
	}
}


#include <stdio.h>
int main()
{
	int cnt, size, choice;
	char* task[] = {
		"desk",
		"computer",
		"books",
		"usb",
		"exit"
	};
	printf("포인터 배열의 요소 선택(종료: 5)\n");
	size = sizeof(task) / sizeof(task[0]);
	for (cnt = 0; cnt < size; cnt++)
		printf("%d.%s\n", cnt,task[cnt]);
	while (1)
	{
		printf("\n숫자 입력(1~5): ");
		scanf_s("%d", &choice);
		if (choice < 1 || choice>5)
		{
			printf("입력 숫자 오류!\n");
			continue;
		}
		else if (choice == 5)
			break;
		else
			printf("선택한 단어는\"&s\" 입니다.\n", task[choice]);
	}
	return 0;
}


#include <stdio.h>
int main()
{
	int cnt, size;
	char* dept[] = {
		"행정학과",
		"법학과",
		"빅데이터사이언스학과"
	};
	printf("전공 학과 선택 \n");
	size = sizeof(dept);
	for (cnt = 0; cnt < size; cnt++)
		printf("");
}


#include <stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("*a=%u\n", *a);
	printf("*(a+1) = %u \n", *(a + 1));
	printf("*(a+2) = %u \n", *(a + 2));
	return 0;
}


#include <stdio.h>
int total = 0;
int sumpt(int* pt)
{
	int a;
	for (a = 0; a < 5; a++)
		if (*(pt + a) % 2 == 0)
			total += *(pt + a);
	return total;
}
int main()
{
	int numpt[] = { 89,74,36,45,98 };
	printf("%d", sumpt(numpt));
	return 0;
}


#include <stdio.h>
void robotmove(int pxp, int pyp, int mx, int my);
void robotmovept(int* pxp, int* pyp, int mx, int my);
int main()
{
	int x = 1;
	int y = 1;
	robotmove(x, y, 1, 2);
	printf("이동한 위치 (%d %d)\n", x, y);
	robotmovept(&x, &y, 1, 2);
	printf("이동한 위치 (%d %d)\n", x, y);
	return 0;
}
void robotmove(int pxp, int pyp, int mx, int my)
{
	pxp += mx;
	pyp += my;
}
void robotmovept(int *pxp, int *pyp, int mx, int my)
{
	*pxp += mx;
	*pyp += my;
}


#include <stdio.h>
void swap(int* a, int* b);
int main()
{
	int a, b;
	a = 5;
	b = 7;
	printf("함수 호출 전 : a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("함수 호출 후 : a = %d, b = %d \n", a, b);
}
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


#include <stdio.h>
int main()
{
	char* lang[3] = { "c", "java", "python" };
	int a;
	printf("여러분들이 배워야 할 언어는");
	for (a = 0; a < 3; a++)
		printf("%s ", lang[a]);
	return 0;
}


#include <stdio.h>
int main()
{
	char address[100];
	char* addpt;
	printf("주소 입력 : ");
	gets(address);
	addpt = address;
	printf("입력한 주소는 : ");
	puts(addpt);
	return 0;
}


#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	int isupper, islower, isdigit;
	char mypasswd[20];
	while (1)
	{
		printf("사용할 암호를 넣으세요 : ");
		scanf_s("%s", mypasswd);
		isupper = islower = isdigit = 0;
		for (i = 0; i < strlen(mypasswd); i++)
		{
			if (mypasswd[i] >= 'a' && mypasswd <= 'z')
				isupper++;
			else if (mypasswd >= 'a' && mypasswd <= 'z')
				islower++;
			else if (mypasswd[i] >= '0' && mypasswd <= '9')
				isdigit++;
		}
		if ((i >= 6) && (isdigit >= 1) && (isupper >= 1) && (islower >= 1))
		{
			printf("암호로 사용 가능합니다.\n");
			break;
		}
		else
			printf("6문자 이상, 숫자, 대문자, 소문자가 각 1개 이상 있어야 합니다.\n");
	}
	return 0;
}


#include <stdio.h>
int main()
{
	int a;
	char* spring_term[6] = { "입춘", "우수", "경칩", "춘분", "청명", "곡우" };
	for (a = 0; a < 6; a++)
		printf("%s ", spring_term[a]);
	return 0;
}


#include <stdio.h>
int main()
{
	int a;
	char animals[3][10] = { "dog", "cat", "lion" };
	for (a = 0; a < 3; a++)
		printf("%d 번째 동물은 %s 입니다\n", a + 1, animals[a]);
}
