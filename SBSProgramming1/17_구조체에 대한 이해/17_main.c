#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "17_main.h"

// 왜 프로그래밍을 배우는가? 컴퓨터에게 명령을 내리기 위해서다.
// 자료형 변수.
// 변수는 메모리안에 값을 저장하는 것. 해당 메모리의 시작 주소를 알려주는 문법 : 포인터.

// 플레이어의 좌표 : int 자료형 2개 저장할 수 있게 만들고 싶다.

typedef struct EntityPos {
	int x;
	int y;
}EntityPos;

typedef struct BattleEntity {
	int hp;
	int ad;
	int ap;
	int p_def;
	int m_def;
}BattleEntity;

typedef struct Money {
	int gold;
	int dia;
}Money;

typedef struct Player {
	EntityPos pos;
	BattleEntity battle; // 구조체안에 구조체 선언 가능
	Money money;

}Player;

// 포인터의 크기가 얼마인가요? x64 운영체제 기준 8byte

// Enemy 구조체를 만들어보세요
typedef struct Enemy {
	BattleEntity e_battle;
	Money e_reward;
	EntityPos e_pos;
}Enemy;

void PrintPos(EntityPos pos);
void PrintEnmPos(Enemy enminfo);

int main()
{
	// 배열 : 같은 type의 자료형을 배열을 사용하여 표현할 수 있다.
	// 주소 한개로 어떻게 1~n개 까지 표현할 수 있는가?
	//  -> 배열은 배열의 값 중 첫번째 있는 값의 주소를 가리킨다.
	//  -> 같은 자료형으로 사용하여 특정 byte뒤의 주소를 읽어서 1~n번째 까지의 값을 읽어올 수 있다.
	
	// 구조체. 자료형 선언. 포인터. 배열.

	// 구조체 what? why?
	// 사용자 정의 자료형(User Defined Type -> typedef)
	
	// x좌표, 좌표
	printf("구조체 사용 이유\n");
	EntityPos p1 = {0,1};  // 구조체(사용자 정의 자료형) 변수명 = {n,n,...}; 으로 선언
	                       // 구조체 안에 선언된 변수 순서대로 값 저장하는 방법
	PrintPos(p1);

	// 다른 방법으로 초기화
	EntityPos p2;
	p2.x = 2;
	p2.y = 4;    // -> 구조체변수.구조체내부변수 = n;
	PrintPos(p2);
	printf("\n");

	// Player, Enemy가 전투를 한다고 가정
	// void Battle(Player player, Enemy enemy) 이런식으로 만들면 편함
	// 구조체를 쓰지않으면 void Battle(int Plx, int Ply, int php, int patk, int enx, int eny, int enhp, int enatk)
	// -> 요래 길고 복잡하게 써야함 플레이어와 적의 x,y좌표,HP,공격력 등 모두 매개변수로 받아야 함

	// Enemy 구조체를 직접 선언해보세요.
	Enemy enemy;
	BattleEntity enm_battle = { 100, 10, 0, 10, 5 };
	enemy.e_battle = enm_battle;
	Money enm_money = { 200, 20 };
	enemy.e_reward = enm_money;
	EntityPos enm_pos = { 10, 22 };
	enemy.e_pos = enm_pos;
	PrintEnmPos(enemy);


	printf("\n구조체 포인터 사용 이유\n");
	printf("구조체의 크기 : %d\n", sizeof(Player)); // 구조체의 크기 : 36byte
	printf("구조체의 크기 : %d\n", sizeof(Player*)); // 구조체의 포인터 크기 : 8byte
	// 포인터는 구조체의 주소만 읽기 때문에 주소의 최대크기인 8byte만 읽어온다.

	// 기능을 확장하기 위해서 player에 구조체를 계속 추가. ex) economy, battle, craft...
	// -> 구조체 player의 크기가 계속 증가
	// -> player에 포인터를 사용해서 함수에 넘겨주게 되면 주소(8byte)로 넘겨주게 되어 컴퓨터 연산에 과부하가 덜 걸림


	
}

void PrintPos(EntityPos player) // 플레이어의 좌표
{
	printf("플레이어의 현재 위치 : [%d,%d]\n", player.x, player.y);
}

void PrintEnmPos(Enemy enminfo)
{
	printf("적의 현재 위치 : [%d,%d]\n", enminfo.e_pos.x, enminfo.e_pos.y);
	printf("\n적의 스탯\n");
	printf("HP : %d\n물리 공격력 : %d\n마법 공격력 : %d\n물리 방어력 : %\n마법 방어력 : %d\n",
		enminfo.e_battle.hp, enminfo.e_battle.ad, enminfo.e_battle.ap, enminfo.e_battle.p_def, enminfo.e_battle.m_def);
	printf("\n처치시 획득 가능한 보상\n");
	printf("골드 : %d\n다이아 : %d\n", enminfo.e_reward.gold, enminfo.e_reward.dia);
}
