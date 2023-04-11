#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void){
    //up and down project
    srand(time(NULL)); //난수 초기화
    int num = rand() % 100+1; //1~100 반환
    
    // printf("숫자 : %d\n", num);
    int answer = 0; //정답
    int chance = 5; //기회
    while (chance>0)
    {
        printf("남은 기회 %d번째\n", chance--);
        printf("숫자를 맞춰보세요 (1~100)::");
        scanf("%d", &answer);

        if(answer>num){
            printf("DOWN \n\n");
        }else if(answer <num){
            printf("UP!!\n\n");
        }else{
            printf("알수 없는 에러 ㅠㅜ\n\n");
        }
        if(chance == 0){
            printf("모든 기회를 다 사용했습니다 ㅠㅜ!!\n");
        }
    }
    
    return 0;
}