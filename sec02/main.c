#include <stdio.h>

int main()
{
    printf("Please, Stay\n"); // 문장 출력
    // 여러줄 문자열 출력하기
    printf("Please stay. I want you, I need you, oh God\n"); // \n escape sequence - 프로그램이 되어간다는 것은 엄격함에 익숙해지는 것.
    // C에서는 별도로 줄바꿈을 하지 않으면 줄바꿈이 되지 않는다.
    // 다른 언어에는 상대적으로 느슨하다. -> 프로그램이 경우에 따라 사람 외에 무언가가 개입된다.
    // C 언어는 엄격하다. -> 사람이 지시한 대로만 움직인다.

    // 따옴표 출력하기
    printf("\"\n"); // escape 문자를 활용해서 따옴표 출력

    // 생초보때는 시도를 다양하게 생각나는 대로 하는 게 좋다.
    int x, y;
    x = 1;
    y = 2;
    int z = x + y;
    printf("The answer is z.\n"); 
    printf("The answer is %d.\n", z); // 숫자를 출력하는 법
    printf("The answer is %i.\n", z); // 숫자를 출력하는 법

    printf("The answer is %i.\n", 7); // 숫자를 출력하는 법
    printf("The answer is %i.\n", 1 + 3); // 숫자를 출력하는 법

    printf("%d + %d = %d.\n", x, y, z);
    printf("\a");
    return 0;
}