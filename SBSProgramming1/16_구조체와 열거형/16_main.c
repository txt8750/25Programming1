#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Sample.h"

/*
*  열거형
*  - 상수 : 값을 고정시키겠다
*  - const 변수 선언;
*  - #define PI 3.14          -> PI를 3.14로 고정시키겠다.
*/

// 열거형
// 특정 숫자와 데이터를 서로 매핑 해주는 기능

#define MONSTERCOUNT 10

typedef enum
{
	ORC,
	HUMAN,
	UNDEAD,
	ANGEL,
	DEVIL,
	UNDEFINED = 100 // 열거형 사용시 특정 값 지정가능. 이후 추가로 열거하는 경우 특정 값이 지정된 부분에서 1씩 증가
}Race;


typedef enum
{
	SCORE,			// 위 or 왼쪽에서 부터 0, 1, 2, 3... 이렇게 증가.
	COIN,
	HEALTH
}GameText;

// 열거형 간결하게 사용하는 방법 typedef

// 조건문과 열거형을 같이 사용하는 패턴

int main()
{

	//enum GameText GameText = SCORE;


	// 상수는 값을 변경하지 못하게 하는 방법이다.
	const int count = 10;
	printf("몬스터의 수 : %d마리\n", MONSTERCOUNT);
	printf("몬스터의 수 : %d마리\n\n", count);

	const char* Text[3] = { "점수", "동전", "체력" };
	const char* RaceName[4] = { "오크", "인간", "언데드", "천사" };

	printf("%s\n", Text[SCORE]); // 숫자를 어떠한 의미를 가지도록 약속을 했다.
	printf("%s\n\n", RaceName[HUMAN]);


	GameText newGameText;
	// 0은 점수, 1은 동전, 2는 체력
	newGameText = SCORE;
	/*
	if (newGameText == SCORE)
	{
		// 점수인 경우에 score를 화면에 출력하라
		printf("점수를 출력하는 예제 입니다.\n");
	}
	else if (newGameText == COIN)
	{
		printf("동전을 출력하는 예제입니다.\n");
	}
	else if (newGameText == HEALTH)
	{
		printf("체력을 출력하는 예제입니다.\n");
	}
	*/
	Race race = UNDEFINED;

	switch (race)
	{
	case ORC:
		printf("오크를 선택하셨습니다.\n");
		break;
	case HUMAN:
		printf("인간을 선택하셨습니다.\n");
		break;
	case UNDEAD:
		printf("언데드를 선택하셨습니다.\n");
		break;
	case ANGEL:
		printf("천사를 선택하셨습니다.\n");
		break;
	case DEVIL:
		printf("악마를 선택하셨습니다.\n");
		break;
	default:
		printf("오크, 인간, 언데드, 천사, 악마 중에 선택해주십시오\n");

	}

	JOB myjob;
	int hp = 0;
	int atk = 0;
	SelectJOB(&myjob);

	SetPlayerStat(myjob, &hp, &atk);

	ShowPlayer(myjob, hp, atk);

	// 심화 과제
	// 턴제 시스템을 열거형으로 표현을 어떻게 하면 좋을까?
	// 플레이어 턴 -> 플레이어가 행동 -> 적의 턴 -> 적의 행동
	// 턴 시스템 플레이어 턴
	// 턴 시스템 플레이어 행동 턴
	// 턴 시스템 적의 턴
	// 턴 시스템 적 행동
}

