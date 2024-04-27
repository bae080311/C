    #include <stdio.h>
#include <stdlib.h>

void answer(int random[]);
void result(int count);
int check(int list[]);
int initialize(int list[]);

int main() {
    int num, num2, cnt = 0;
    char decide;
    int lotto[6];

    do {
        while (num2 > 0) {
            for (int i = 0; i < 6; i++) {
                printf("번호를 하나씩 입력해주세요: ");
                scanf("%d", &num);
                if (num > 0 && num <= 45) {
                    lotto[i] = num;
                    if (check(lotto)) {
                        printf("중복된 번호입니다. 다시 입력해주세요.\n");
                        i--;
                        continue;
                    }
                }
                else {
                    printf("1~45의 숫자를 다시 입력해주세요.\n");
                    i--;
                    continue;
                }
            }
            do {
                printf("명령을 입력하세요 ('l': 로또 번호 출력, 'f': 결과 확인, 'r': 초기화, 'x': 종료): ");
                scanf(" %c", &decide);
                switch (decide) {
                case 'l':
                    printf("로또 번호: ");
                    for (int i = 0; i < 6; i++) {
                        printf("%d ", lotto[i]);
                    }
                    printf("\n");
                    break;
                case 'f':
                    cnt = 0;
                    int random[6];
                    answer(random);
                    for (int i = 0; i < 6; i++) {
                        if (lotto[i] == random[i]) {
                            cnt++;
                        }
                    }
                    result(cnt);
                    break;
                case 'r':
                    initialize(lotto);
                    printf("로또 번호가 초기화되었습니다. 다시 실행합니다.\n");
                    continue;
                    break;
                case 'x':
                    break;
                default:
                    printf("올바른 명령을 입력하세요.\n");
                    break;
                }
            } while (decide != 'x');

        }
    } while (decide != 'x');

    printf("프로그램을 종료합니다.");
    return 0;
}

int check(int list[]) {
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (list[i] == list[j] && list[j] != 0)
                return 1;
        }
    }
    return 0;
}

void answer(int random[]) {
    for (int i = 0; i < 6; i++) {
        random[i] = rand() % 45 + 1;
    }
}

void result(int count) {
    switch (count) {
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
        printf("6개 모두 일치합니다. 축하합니다!\n");
        break;
    }
}
int initialize(int list[])
{
    for (int i = 0; i < 10; i++) {
        list[i] = 0;
    }

}