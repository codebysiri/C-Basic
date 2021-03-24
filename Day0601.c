 #include <stdio.h>

 int main() {
     int x;
     int y;
     int z;

     printf("첫번째 숫자를 입력하세요. \n");
     scanf("%d", &x);
     printf("두번째 숫자를 입력하세요. \n");
     scanf("%d", &y);
     printf("세번째 숫자를 입력하세요. \n");
     scanf("%d", &z);

     if (x > y && x > z) {
         printf("가장 큰수는 %d입니다. >", x);
     } else if (y > x && y > z) {
         printf("가장 큰수는 %d입니다. >", y);
     } else if (z > x && z > y) {
         printf("가장 큰수는 %d입니다. >", z);
     }
     
 }