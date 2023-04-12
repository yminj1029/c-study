#include <stdio.h>

int main(void){
    //배열을 선언 할때 값은 반드시 초기화를 해야함. (그렇지 않으면 더미값이 들어감)
    //배열 크기는 항상 상수로 선언
    //크기(10)와 값은 2 : 서로 다를 경우 3번째 값부터는 자동으로 0으로 초기화
    int arr[] = {1,2}; // arr[2] 
    //float 값도 같음. 
    
    //문자 vs 문자열
    char c = 'A';
    printf("%c\n", c);

    //문자열 끝에는 '끝'을 의미하는 Null 문자 '\0'이 포함되어야함
    char str[7] = "coding"; //[c][o][d][i][n][g][\0]
    printf("%s\n", str);

    char str1[] = "coding";
    printf("%s\n", str1); //자동으로 7자리 배정 마지막은 Null문자 공간을 줌

    char korea[] = "코딩";
    printf("%s\n", korea);    
    printf("%lu\n", sizeof(korea));
    //영어는 1글자 1byte 한글은 1글자 2바이트
    // 한글 3바이트씩 차지? => vscode 설정 utf-8이어서 한글이 3바이트 차지함

    //ASCII코드? ANSI(미국 표준 협회)에서 제시한 표준 코드 체계
    // 7bit, 총 128개 코드(0~127)

    //참고 2 0~127 사이의 아스키 코드 정수 값에 해당하는 문자 확인
    for(int i = 0; i<128; i++){
        printf("아스키코드 정수 %d : %c \n", i,i);
    }

    return 0;  
}