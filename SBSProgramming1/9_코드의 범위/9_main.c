
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
*  변수, 함수
*  변수가 왜 필요한가?
    - 특정 데이터를 저장하는 공간(메모리)을 만들어서 동적으로 사용할 수 있는 값을 할당 하기 위해
	- 컴퓨터는 0,1 외는 알아 들을 수 없다.
	- 1+1 => 00000001 mov 00000001 => 사람이 알아먹기 힘듦
	- 변수를 저장하는 자료형을 지정을 한다.
*  함수가 왜 필요한가? 
    - 명령어를 작성 (statement, 명령문), 세미콜론으로 명령의 마지막을 컴퓨터에게 알림
	- 개발 할 때 한글로 먼저 요구사항을 작성(의사 코드, Pseudo code)
	- 명령문은 한줄로 표현을 할 수 없음 -> 코드를 해석하기도 힘들고, 반복적으로 사용하는 코드를 표현하기 힘들다
*/

// C언어의 경우 main함수가 실제 코드가 실행되는 부분이다.
// C언어는 코드를 실행할 때 TopDown방식으로 실행 -> main함수 밑에 함수가 선언 되어 있으면 오류 발생
//  -> 함수가 main함수 밑에있는 경우 함수의 헤드 부분만 main함수 위에 갖다 놔야 함.

/*
*  세미콜론 -> 명령문이 종료되는 것을 표현한다. 코드의 끝을 표현한다.
*  중괄호{} -> 범위(Scope)를 표현한다, 단일로 표현을 하기 어려운 부분을 하나의 의미로 표현하기 위함.
*  함수     -> 명령문들의 집합, 범위를 표현하기 위해 중괄호"{}" 사용, 함수의 head를 사용하여 서로 다른 함수를 구분
*  변수     -> (자료형) 변수이름; , 변수에도 중괄호를 사용할 수 있을까? => 변수를 볌위로 표현해야 하는 경우가 있을까? => 배열 int[] nums = {1,2,3,4,5};
*/
void StatDevideFunc();
int modifyStat(int Stat);


int ReturnStatAmount(int baseAmount, int itemStatAmount);

int main()
{
	int INT = 10;
	int DEX = 12;
	int LUK = 9;
	int STR = 20;


	//StatDevideFunc();

	//printf("main함수 안에 있는 LUK의 값 : %d\n", LUK);

	// 코드를 분석

	modifyStat(INT);
	modifyStat(DEX);
	modifyStat(LUK);
	modifyStat(STR);
}

int modifyStat(int Stat)
{
	int modifyStat = ReturnStatAmount(Stat, 12);
	printf("전투에 사용 될 INT 스탯 : %d\n", modifyStat);
	return modifyStat;
}

// Q1. main에도 LUK, Func에도 LUK이 있다. 컴퓨터가 같은 이름을 구별을 할까?
// A. 구별 가능, 각 함수별로 구별(지역 변수)
//    main함수에서 사용한 LUK과 StatDevideFunc에서 사용한 LUK은 동일하게 사용 불가

// Q1-2. 이름이 겹치지 않게 만들면 되지 않나? -> 이름이 같더라도 사용할 수 있게 만들 수 없을까? -> 지역을 표현
// A. 개발 하다보면 겹치는 이름이 없을 수 가 없음
//    모두 다른 이름으로 만들게 되면 복잡한 개발 과정 중 혼선이 생길 수 있음

// Q2. StatDevideFunc함수를 만났을 때 Local이 변경이 되어서 StatDevideFunc의 변수를 표현하고있다. 함수가 종료 되었을 때 LUK이 사라졌다.
// main() 'LUK = 1', Stat 'LUK = 3'
// 스택 / 힙 영역
// Stack : 영역이 사라질 때 가지고 있는 데이터를 모두 소멸시킨다. -> 쌓인 데이터를 지우지 않으면 어떤 일이 일어날까? Blue Screen 발생
// Blue Screen : 컴퓨터에 문제가 생겼을 때 자동으로 불러오는 시스템
// 함수 : 함수안의 코드가 Stack 형태로 실행되고 main으로 갈 때 해당 Stack의 메모리를 비움
// Stack 영역 : 영역이 종료되면 자동으로 메모리를 비워 준다
//  장정) 메모리 관리가 수월하게 컴퓨터 영역을 만들었구나
//  단점) 메모리에 저장해두었다가 사용할 수 없다 -> 이를 해결하기 위해 힙영역(구조체,Struct)이 있음

// 함수를 정의하는 단계
void StatDevideFunc() // 들여쓰기를 자동으로 하는 명령어. (ctrl + k) + (ctrl + d)
{
	// alt키를 누른 상태로 드래그한 영역을 화살표 위아래로 움직일 수 있다
	int LUK;
	scanf("%d", &LUK);
	printf("LUK의 값 : %d\n", LUK);

	// 반복문 조건문, 함수 => 코드를 구현할 수 있다.
	// 스탯 시스템. 포인트5 -> STR,DEX,INT,LUK 선택해서 스탯을 부여한다
}// <- 세미콜론이 없다. for 반복문, for(int i=0; i<10; i++);{}
 // 중괄호를 닫는게 곧 코드의 끝을 표현 한다.

int ReturnStatAmount(int baseAmount, int itemStatAmount)
{
	int result = 0;

	// 게임의 레벨 (easy, normal, hard)
	int levelCount = 1;
	// if easy = 1, normal = 2, hard = 3
	int itemWeight = 10;

	// 장착한 아이템에 따른 스탯
	int stat = 10;
	result = levelCount * (itemStatAmount * itemWeight) + baseAmount;

	return result;
}