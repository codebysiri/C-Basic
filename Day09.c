#include <stdio.h>
int main() {
    int x = 5;
    int * ptr1 = &x;
    int y = 8;
    int * ptr2 = &y;

    printf("x의 값: %d\n", x);
    printf("x의 주소값: %p\n\n", &x);
    printf("y의 값: %d\n", y);
    printf("y의 주소값: %p\n\n", &y);

    *ptr1 = 8;
    *ptr2 = 5;

    printf("바뀐 뒤 x의 값: %d\n", x);
    printf("바뀐 뒤 x의 주소값: %p\n\n", &x);
    printf("바뀐 뒤 y의 값: %d\n", y);
    printf("바뀐 뒤 y의 주소값: %p\n\n", &y);   

    return 0;
}