#include <stdio.h>

int main() {
    int x;

    printf("정수를 입력하세요. ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        if (i % 3 == 0) {
            printf("* ");
        } else {
            printf("%d", i);
        }
    }
    return 0;
}