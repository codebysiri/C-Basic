#include <stdio.h>
int main () {

    int arr[5] = {0, };
    int* ptr = &arr;

    for (int k = 0; k < 5; k++) {
        printf("\n %d값 입력하기 : ", k + 1);
		scanf("%d\n", &arr[k]);
    }

    for (int m = 0; m < 5; m++) {
        printf("\nptr이 가리키는 값: %d", arr[4-m]);
    }

    return 0;

}