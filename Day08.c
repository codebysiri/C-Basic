#include <stdio.h>

int main() {
    int num[5] = {0, };
    int max = 0;

    for (int k = 0; k < 5; k++) {
        printf("%d값 입력하기 : ", k + 1);
        scanf("%d\n", &num[k]);
    }

    for (int m = 0; m < 5; m++) {
        if (max < num[m]) {
            max = num[m];
        }
    }

    printf("최대값 : %d \n", max);

    return 0;

}