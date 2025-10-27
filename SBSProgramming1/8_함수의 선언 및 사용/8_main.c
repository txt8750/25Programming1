
// 함수란 무엇인가?
//  - Function, 값을 입력했을 때 일련의 과정을 통해 결과가 도출 되는 기능
//  - 처리 절차를 거치면 어떤 결과 값이 반환 되는 기능
// 함수는 왜 사용하는가?
//  - 특정 동작을 값만 바꿔서 여러번 수행할 떄 필요

// 함수 만드는 법
//  - 반환값 함수이름 (매개변수)   << Head
//    { 본문 }                   << Body

// 메인함수.
// 프로그램의 시작과 끝을 표현하는 기능을 하고 있다.

// 함수를 먼저 생성하고 - 생성한 함수를 사용
// 반환타입 + 함수이름 (매개변수); - 작업을 통해서만 함수가 생성 된다
//  - 만약 아무것도 반환하지 않을 경우 "void"로 반환 타입을 설정
//  - "void"를 사용하지 않는 경우 컴퓨터가 문법 상 함수이름을 알아먹지 못해서 오류 발생

// 반환값이 void인 함수를 왜 사용할까?
// 반환값이 없더라도 코드를 수정할 수 있는가? _ 주소의 개념
// 함수 안에서만 코드가 실행이 되고 실제로는 변경이 안되는 기능이 필요하다
// ex) UI에 다음 레벨을 보여주는 기능이 실제로 장비의 성능을 변경시키면 안됨

// 함수를 표현하는 방식 4가지
// (1) 반환값x 인자값x
// (2) 반환값o 인자값x
// (3) 반환값x 인자값o
// (4) 반환값o 인자값o

// Minus
// multiply
// divide
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "math.h"				// SumFunction(), MinFunction(), MulFunction, DivFunction() 가 정의 된 헤더
#include <stdbool.h>
#include "Status.h"


typedef struct Stats
{
	int STR;						// 각 스탯을 int로 저장
	int DEX;
	int INT;
	int LUK;

}Stats;



// 캐릭터를 선택해서 스탯을 분배하는 함수
// Dice_ STR, DEX, INT, LUK 분배
// 캐릭터의 초기 스탯 설정
// StartPoint를 넘는 값을 실행해서는 안된다
// 분배한 스탯이 main에서도 사용될려면 어떻게 사용해야할까?
// 남은 코드 완성

int main()
{
	Stats Status;
	int STR, DEX, INT, LUK;
	
	Status = SelectCharacter(10);  // 스탯 포인트 10개를 배분하는 함수 "Status.h"에 정의 되어있음;

	STR = Status.STR;
	DEX = Status.DEX;
	INT = Status.INT;
	LUK = Status.LUK;

	printf("==================\n");
	printf("STR : %d, DEX : %d, INT : %d, LUK : %d\n", STR, DEX, INT, LUK);
	printf("==================\n");

	return 0;
}















/*
int SelectPlayerBehavior()
{
	int num = 0;
	scanf("%d", &num);

	if (num == 1)
	{
		return 1;
	}
	else if (num == 2)
	{
		return 2;
	}
	else if (num == 3)
	{
		return 3;
	}
}

int main()
{
	int num1 = 1; int num2 = 2;
	SumFunction(num1, num2);	// statement (명령문) -> SumFunction 함수를 실행하라 -> num1, num2를 인자로서 실행하라.
	SumFunction(3, 5);		// 3,5 를 인자로서 SumFunction 함수를 실행하라

	int n1 = 20; int n2 = 0;
	MinFunction(n1, n2);

	DivFunction(n1, n2);

	MulFunction(n1, n2);

	// 플레이어가 낸 가위 바위 보에 해당하는 숫자를 출력하고 싶다
	int PlayerChoice = SelectPlayerBehavior();  // 1 가위, 2 바위, 3 보
	printf("플레이어의 선택 값 : %d\n", PlayerChoice);

	SelectCharacter(10);

	return 0; // 게임에서 종료 기능을 만들고 싶어요. return 하도록 만들면 된다. 어떤 숫자를 입력하면 프로그램을 종료하겠다

}
*/
