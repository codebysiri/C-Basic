#include <stdio.h>
int factorial(int num1);

int main() {
    int num1;
    int x = 1;
    printf("하나의 후를 입력하세요 \n");
    scanf("%d", &num1);

    for (int m = num1; m > 0; m--) {
        x = x * m;
    }
    return printf("%d팩토리얼: %d", num1, x);

}

int factorial(int num1) {
    return factorial;
}