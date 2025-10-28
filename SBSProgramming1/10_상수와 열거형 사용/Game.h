#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>	

const static int MAPSIZE = 10;
extern int StartMapX, StartMapY, playerX, playerY;

int CalculateBoundaryX(int StartMapX)		// 플레이어의 X 좌표 위치를 계산하는 함수
{
	 int result = StartMapX + MAPSIZE;
	 return result;

}
int CalculateBoundaryY(int StartMapY)		// 플레이어의 Y좌표 위치를 계산하는 함수
{
	int result = StartMapY + MAPSIZE;
	return result;
}

bool CheckPlayerIsBoundary()		// 플레이어의 위치가 어디있는지 확인하는 함수, 맵 안이면 true, 맵 밖이면 false 반환
{
	int mapX = CalculateBoundaryX(StartMapX);
	int mapY = CalculateBoundaryY(StartMapY);
	printf("플레이어의 현재 좌표를 입력하세요 : ");
	scanf("%d ,", &playerX);
	scanf("%d", &playerY);
	if (StartMapX <= playerX  && mapX >= playerX && StartMapY <= playerY && mapY >= playerY)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

