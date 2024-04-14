#include <stdio.h> // 전처리기 - 컴파일 전단계에서 참조 - 유명 문구 복붙

// 함수 선언과 정의하기 - 반환형태, 함수 이름(매개변수),
void say_hello(void)
{
    //함수가 수행할 기능 작성
    printf("Hello World!\n"); // 함수가 함수를 호출하는 구조

    return; //함수 종료: void 반환일 경우 생략 가능
}

void say_bye(void); // prototype, declaration

int main(void) // 메인함수 정의 시작
{ // 영역 시작

    // 변수는 사용하기 전어에 선언되어야 한다.
    int i = 0;
    i = 1;

    // 함수도 사용되기 전에 선언되어야 한다.
    // 1. 함수 선언과 정의를 같은 곳에 두기
    // 2. 함수의 선언과 정의를 구분하기
        // 선언은 위에, 정의는 아래에 하기




    printf("Hello World\n"); // 입출력 없음, 내부적으로 화면으로 출력 수행
    say_hello(); // 정의에 맞춰서 함수 호출하기
    say_hello();
    say_hello();
    say_hello();
    say_hello();
    say_hello();
    say_hello();
    say_bye();

} // 영역 끝


void say_bye(void) // definition
{
    printf("Bye World\n");
}