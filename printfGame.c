#include <stdio.h>

int main(void){
    //경찰관 조서 게임 프로젝트
    //이름? 나이? 몸무게? 키? 범죄명?

    char name[256];
    int age;
    float weight;
    double height;
    char sin[2048];
    printf("이름이 뭐예요??");
    scanf("%s", name), sizeof(name);

    printf("나이가 어떻게 돼요??");
    scanf("%d", &age);

    printf("몸무게가 어떻게 돼요??");
    scanf("%f", &weight);
 
    printf("키가 어떻게 돼요??");
    scanf("%lf", &height);

    printf("범죄명이 뭐예요??");
    scanf("%s", sin, sizeof(sin));
    printf("--------");
    printf("조서 내용\n이름 : %s\n나이 : %d\n몸무게 : %.1f\n키 : %.1lf\n범죄명 : %s\n", name, age, weight, height, sin);

    return 0;
}