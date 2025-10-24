#include <stdio.h>
#include "GameFunction.h"

void GameResult(int Round, int PlayerScore, int ComputerScore)
{
	printf("\n\n==============================\n");
	printf("진행한 라운드 : %d\n", Round - 1);
	printf("플레이어 : %d vs 컴퓨터 : %d\n", PlayerScore, ComputerScore);
	if (PlayerScore > ComputerScore)
	{
		printf("플레이어의 승리!\n");
	}
	else if (PlayerScore < ComputerScore)
	{
		printf("컴퓨터의 승리!\n");
	}
	else
	{
		printf("비겼습니다!\n");
	}
	printf("==============================\n");