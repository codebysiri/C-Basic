#include <stdio.h>

int reverse(int * ptr) {
    printf("\n");
    for (int k = 9; k >= 0; k--) {
        printf("%d\n", ptr[k]);
    }
    return 0;
}

int main() {
    int arr[10] = {0, };
    int* ptr = arr;

    for (int m = 0; m < 10; m++) {
        scanf("%d", &arr[m]);
    }
        reverse(arr);
        return 0;
}