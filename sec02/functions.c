#include <stdio.h> // 전처리기 - 컴파일 전단계에서 참조 - 유명 문구 복붙

int main(void) // 메인함수 정의 시작
{ // 영역 시작

    // 변수 선언
    int a;
    int b;
    int c;

    // 변수에 값 대입
    a = 1;
    b = 2;

    // 변수에 연산 결과 대입
    c = a + b;

    // 함수 호출 - call or invoke
    printf("Result is %i", c);

    return 0; // 결과값을 반환
} // 영역 끝