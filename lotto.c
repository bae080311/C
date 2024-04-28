#include <stdio.h>
#include <stdlib.h>

void answer(int random[]);
void result(int list[], int random[]);
int check(int list[]);
void input(int list[]);
char command(int list[]);
void initialize(int list[]);
void command2(int list[]);

int main()
{
    int lotto[6];
    int num;
    char decide;
    printf("로또를 몇 번 뽑을건지 입력해주세요: ");
    scanf("%d", &num);
    while (num > 0) {
        input(lotto);
        decide = command(lotto);
        if (decide == 'f') {
            num--;
        }
    }
    command2(lotto);
}

void input(int list[])
{
    initialize(list);
    for (int i = 0; i < 6; i++)
    {
        int num;
        printf("번호를 하나씩 입력해주세요: ");
        scanf("%d", &num);
        if (num > 0 && num <= 45)
        {
            list[i] = num;

            if (check(list))
            {
                printf("중복된 번호입니다. 다시 입력해주세요.\n");
                i--;
            }
        }
        else
        {
            printf("1~45의 숫자를 다시 입력해주세요.\n");
            i--;
        }
    }
}

char command(int list[])
{
    char decide;
    int random[6];

    printf("명령을 입력하세요 ('l': 로또 번호 출력, 'f': 결과 확인): ");
    scanf(" %c", &decide);

    switch (decide)
    {
    case 'l':
        printf("로또 번호: ");
        for (int i = 0; i < 6; i++)
        {
            printf("%d ", list[i]);
        }
        printf("\n");
        return command(list);
    case 'f':
        answer(random);
        result(list, random);
        break;
    default:
        printf("올바른 명령을 입력하세요.\n");
        return command(list);
    }
    return decide;
}

int check(int list[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (list[i] == list[j] && list[j] != 0)
                return 1;
        }
    }
    return 0;
}

void answer(int random[])
{
    for (int i = 0; i < 6; i++)
    {
        random[i] = rand() % 45 + 1;
    }
}

void result(int list[], int random[])
{
    int cnt = 0;

    printf("로또 당첨 번호: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", random[i]);
    }
    printf("\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (list[i] == random[j])
            {
                cnt++;
                break;
            }
        }
    }

    switch (cnt)
    {
    case 0:
        printf("일치하는 번호가 없습니다.\n");
        break;
    case 1:
        printf("1개 맞췄습니다.\n");
        break;
    case 2:
        printf("2개 맞췄습니다.\n");
        break;
    case 3:
        printf("3개 맞췄습니다.\n");
        break;
    case 4:
        printf("4개 맞췄습니다.\n");
        break;
    case 5:
        printf("5개 맞췄습니다.\n");
        break;
    case 6:
        printf("당첨입니다!\n");
        break;
    }
}

void initialize(int list[])
{
    for (int i = 0; i < 6; i++)
        list[i] = 0;
}

void command2(int list[])
{
    printf("명령을 입력하세요('r': 초기화, 'x': 종료)");
    char decide;
    scanf(" %c", &decide);
    switch (decide) {
    case 'r':
        printf("로또 번호가 초기화되었습니다. 다시 실행합니다.\n");
        initialize(list);
        main();
        break;
    case 'x':
        printf("프로그램을 종료합니다.\n");
        exit(0);
        break;
    }
}