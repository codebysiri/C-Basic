#include <stdio.h>

int main() {
    int k = 1;
    int min;
    int num[5] = {0, };

    for (int m = 0; m < 5; m++) {
        scanf("%d", &num[m]);
    }

    min = num[0];

    while (k < 5) {
        if (min > num[k]) {
            min = num[k];
        }
        k++;
    }

    prinf("\n가장 작은 수는 %d입니다.", min);

    return 0;
}