/*
*   학습 목표 : for반복문과 while 반복문의 문법 이해하기
*   실습 목표 : 지난 시간에 구현했던 코드를 반복문으로 표현하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	// 반복할 수 있는 횟수를 직접 입력 받아서 사용하기
	// scanf (C언어에서 사용하는 방식)
	// C++, C#, python, java, Unreal, Unity 입력 받는 방식이 다름
	int num1 = 97;
	int loopCount = 10;
	printf("반복 할 횟수를 작성해주세요 : ");
	scanf("%d", &loopCount);	// loopCount는 주소로 이루어져있고 해당 주소안에 값이 저장 됨
	

	// 1. for 반복문 (사용 예시)
	printf("======= for 반복문 ======\n");

	for (int i = 0; i < loopCount; i++)
	{
		printf("%c", i + num1);
		printf("%d ", i);
	}
	printf("\n\n");
	// 2. while 반복문 (사용 예시)
	// while(조건식) => 조건이 참이면 중괄호 안의 코드를 실행
	printf("====== while 반복문 ======\n");
	int num2 = 97;
	int j = 0;

	while (j < loopCount)
	{
		printf("%c", j + num1);
		printf("%d ", j);
		j++;
	}
}