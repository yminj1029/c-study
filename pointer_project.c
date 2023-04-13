#include <stdio.h>
#include <time.h>
//물고기가 6마리가 있다.
// 이들은 어항에 살고 있는데 사막임
//사막이 너무 덥고 건조, 물이 아주 빨리 증발을 해요
//물이 다 증발하기 전에 부지런히 어항에 물을 줘서 물고기를 살려주세요
//물고기는 시간이 지날 수록 점점 커져서 나중에는 냠냠 가능

int level;
int arrayFish[6];
int * cursor;
void initData();
int main(void){
    long startTime = 0; // 게임 시작 시간
    long totalElapsedTime = 0; //총 경과 시간
    long prevElapsedTime = 0; // 직전 경과 시간(최근에 물을 준 시간 간격)

    int num; // 몇번 어항에 물을 줄건지, 사용자 입력
    initData();

    return 0;
}

void initData(){
    level = 1; //게임 레벨 (1~5)
    for(int i = 0; i<6; i++){
        arrayFish[i] = 100; //어항의 물 높이(0~100)
    }

}