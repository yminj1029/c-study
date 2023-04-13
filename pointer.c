#include <stdio.h>

void changeArray(int * ptr);
//pointer 변수 선언은 앞에 *를 붙인다.
//pointer는 메모리 주소값을 가리키는 것
int main(void){
     
    int arr2[3] = {10,20,30};

    changeArray(&arr2[0]);

    for(int i = 0; i<3; i++){
        printf("%d\n", arr2[i]);
    }
    //scanf에서 &num과 같이 &를 사용하는이유?
    //&뒤에 변수 이름을 적으면 해당 변수 이름의 메모리 주소값을 나타낸다.
    // &는 주소를 가리키는 연산자 인것. 
    //scanf에서 변수에 담기 위해 해당 주소를 가리킴
    
    return 0;
}

void changeArray(int * ptr){
    ptr[2] = 50;
}