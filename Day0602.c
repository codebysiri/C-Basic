#include <stdio.h>
int main() {
    int a;
    print("정수를 입력하세요 >>");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("콜라가 선택되었습니다.");
        break;
    
    case 2:
        printf("사이다가 선택되었습니다.");
        break;
    
    case 3:
        prinf("물이 선택되었습니다.");
        break;

    default:
        printf("잘못 입력하셨습니다.")
        break;
    }
}