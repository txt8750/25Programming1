#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>	

const static int MAPSIZE = 10;
int static StartMapX = 1;
int static StartMapY = 1;
extern int PLAYERX, PLAYERY;

int CalculateBoundaryX(int StartMapX)		// 맵의 최대 X좌표를 결정하는 함수
{
	 int result = StartMapX + MAPSIZE;
	 return result;

}
int CalculateBoundaryY(int StartMapY)		// 맵의 최대 Y좌표를 결정하는 함수
{
	int result = StartMapY + MAPSIZE;
	return result;
}

bool CheckPlayerIsBoundary()		// 플레이어의 위치가 어디있는지 확인하는 함수, 맵 안이면 true, 맵 밖이면 false 반환
{
	int mapX = CalculateBoundaryX(StartMapX);
	int mapY = CalculateBoundaryY(StartMapY);
	printf("플레이어의 현재 X좌표를 입력하세요 : ");
	scanf("%d", &PLAYERX);
	printf("플레이어의 현재 Y좌표를 입력하세요 : ");
	scanf("%d", &PLAYERY);
	if ((StartMapX <= PLAYERX  && mapX >= PLAYERX) && (StartMapY <= PLAYERY && mapY >= PLAYERY))
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

