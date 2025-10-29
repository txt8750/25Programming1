// 의사 코드로 작성한 내용을 함수로 바로 표현하고 싶다.

// 상수를 사용하는 예제 코드를 만들어보자
// 맵의 최대 크기는 제한이 되어있다고 가정 <- 변수의 값만 변경하면 맵의 크기가 자동으로 변경 되도록 만들고 싶다.

// 전역 변수 -> 맵의 크기
// 함수. 플레이어의 현재 위치 값, 맵의 최대 범위를 비교해서 맵에서 벗어났으면 알림을 알리는 코드를 작성해보자

// 플레이어의 좌표를 x,y로 표현
// 맵의 좌표를 x,y로 표현
// 맵의 범위를 표현하는 함수를 만들어라

// ex) 맵의 크기 : 10, 맵이 생성되는 시작점(0,0)
// 콘솔창의 0,0은 왼쪽 상단, x -> 오른쪽이 양수, y -> 아래쪽이 양수
// CheckPlayerIsBoundary() -> bool, true false
// 경계선을 어떻게 구함? -> CalculateBoundary(시작 좌표, 맵의 크기)

// if(플레이어가 경계선 안에 있나요?) { 플레이어가 x,y 좌표에 있습니다}
// else if(그게 아니라면) { 플레이어가 경계선 밖으로 나갔습니다.}

#include "Game.h"
int CalculateBoundaryX(int StartMapX);
int CalculateBoundaryY(int StartMapY);
bool CheckPlayerIsBoundary();


int PLAYERX;
int PLAYERY;


int main()
{
	if (CheckPlayerIsBoundary())
	{
		printf("현재 플레이어의 좌표는 (%d,%d)입니다.\n", PLAYERX, PLAYERY);
	}
	else
	{
		printf("플레이어가 맵을 벗어났습니다.\n");
	}
	
}