#include<stdio.h>

void getPrimeNumber(int num, int arr[]);

int main() {
    int arr[100] = {0, };
    int number = 0;

    printf("정수 입력: ");
    scanf("%d", &number);

    getPrimeNumber(number, arr);
    for (int k = 0; k < sizeof(arr) / sizeof(int); k++) {
        if (arr[k] == 0) continue;
        printf("%d ", arr[k]); 
    }
    return 0;
}

void getPrimeNumber(int num, int arr[]) {
    int index = 0;
    int m = 0;

    for (int w = 1; w < num; w++) {
        for (m = 2; m < w; m++) {
            if (w % m == 0) {
                break;
            }
        }
        if (m == w) {
            arr[index] = m;
            index++;
        }
    }
}