#include <stdio.h>

void maxnum(int num[], int size);

int main() {
    int num[10] = { 0, };
    int* ptr = num;
    printf("숫자를 입력하세요. \n");
    for (int k = 0; k < 10; k++) {
        scanf("%d", &num[k]);
    }
    maxnum(ptr, sizeof(num) / sizeof(int));
}

void maxnum(int num[], int size) {
    int max = num[0];
    for (int m = 0; m < size; m++) {
        if (max < num[m]) {
            max = num[m];
        }
    }
    printf("가장 큰 값: %d", max);
}