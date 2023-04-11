#include <stdio.h>

int main(void){
    // printf("Hello World \n\n");
    // return 0;
    
    //정수형 변수에 대한 예제
    int age = 12;
    //정수형 값을 출력해주세요
    printf("%d\n", age);
    
    //실수형 변수에 대한 예제
    float f = 46.5f; //4 바이트 32 bit
    printf("%.2f\n", f);
    double d = 4.428;//8바이트 64bit
    printf("%.2f\n",d);

    //상수 선언
    const int YEAR = 2000;
    printf("태어난 년도 : %d\n", YEAR);

    //printf 란? 
    //연산 
    printf("%d + %d = %d\n",30,79,30+79);

    //scanf란? 키보드 입력을 받아서 저장함
    int input;
    printf("값을 입력하세요 : ");
    scanf("%d", &input);
    printf("입력값 : %d\n", input);

    int one, two, three;
    printf("세 개의 정수를 입력하세요 :: ");
    scanf("%d %d %d", &one, &two,&three);
    printf("1번 값 :: %d\n 2번 값 :: %d\n 3번 값 :: %d\n", one, two, three );

    //문자(한 글자), 문자열(한 글자 이상의 여러 글자)
    char str[256];
    scanf("%s", str, sizeof(str));
    printf("%s\n",str);

   return 0;
}