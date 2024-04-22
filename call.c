#include <stdio.h>
int main()
{
    int n, num; //출석을 무작위로 부르는데 1번부터 24번까지의 번호를 몇 번씩 불렀는지 빈도를 세는 코드 
    int a[24]={0};
    scanf("%d", &n);
    for (int i=1;n>=i;++i)
    {
        scanf("%d", &num);
        ++a[num];
    }
    for (int i=1;i<=23;++i)
    printf("%d ", a[i]);
}