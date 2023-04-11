#include <stdio.h>

int main(void){
    // 반복문 종류 : for, while, do while
    // for(int i =1; i <= 10; i++){
        // printf("hello world%d\n",i);
    // }

    // int i = 1;
    // while (i<=10)
    // {
        // printf("Hello World %d\n",i);
        // i++;
    // }

    // do
    // {
        // printf("Hello World %d\n",i++);
    // } while (i<=10);
    
    // 피라미드를 쌓아라 프로젝트
    int floor;
    printf("몇 층으로 쌓겟느냐?");
    scanf("%d", &floor);
    
    for(int i = 0; i<floor; i++){
        for(int j=i; j<floor; j++){
            printf(" ");
        }
        for (int k = 0; k < i*2+1; k++){
            printf("*");
        }
        
        printf("\n");
    }

    

    return 0;
}