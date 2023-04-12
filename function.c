#include <stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void){
    //계산기 함수
    int num =  2; 
    num = add(num, 2); 
    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
int div(int num1, int num2)
{
    return num1 / num2;
}

//반환형 함수 이름(전달 값)
