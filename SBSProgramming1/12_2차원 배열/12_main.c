#define _CRT_SECURE_NO_WARNINGS
#define MAPSIZE 10
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

/*
*  - 배열의 활용
*  - 2차원 배열
*  - 게임에서의 적용
*/

// 플레이어 조작

// 플레이어 : !
const char PLAYER = '!';
// 몬스터 : @
const char MONSTER = '@';
// 돈    : $
const char MONEY = '$';
// 벽   : #
const char WALL = '#';

// STAGE별로 나눌려면 어떻게 처리를 해야 할까? -> 준비되어 있는 좌표들이 있다. 시작할 때 세팅. 출력하라

// 플레이어의 이동을 구현하는 코드를 AI를 통해 작성

void playermove(int* x, int* y);

void clrscr()
{
	system("cls");
}

int main()
{

	// Console 환경에서는 Text로 출력을 해야한다 -> 문자로 이루어져 있는 배열

	int playerX = 2;
	int playerY = 4;
	int* playerXPtr = &playerX;
	int* playerYPtr = &playerY;
	int key;

	char Map[MAPSIZE][MAPSIZE * 2] =
	{ "" };

	// 이중 for문을 사용하여 맵을 세팅
	for (int y = 0; y < MAPSIZE; y++)
	{
		for (int x = 0; x < MAPSIZE * 2; x++)
		{
			if (y == 0 || y == MAPSIZE - 1)
			{
				if (x == MAPSIZE * 2 - 1)
				{
					Map[y][x] = '\0';
				}
				else
				{
					Map[y][x] = WALL;
				}
			}
			else
			{
				if (x == MAPSIZE * 2 - 1)
				{
					Map[y][x] = '\0';
				}
				else if (x == 0 || x == MAPSIZE * 2 - 2)
				{
					Map[y][x] = WALL;
				}
				else
				{
					Map[y][x] = ' ';
				}
			}
		}
	}


	while (1)
	{
		clrscr();

		// (3,5)에서 플레이어가 생성된다
		Map[playerY][playerX] = PLAYER;
		// (5,7)에서 돈이 생성된다
		Map[4][6] = MONEY;
		// (8,8)에서 몬스터가 생성된다
		Map[7][7] = MONSTER;


		// 세팅된 맵을 화면에 출력
		for (int h = 0; h < MAPSIZE; h++)
		{
			printf("%s\n", Map[h]);
		}
		key = _getch();
		switch (key)
		{
		case 'w':
		case 'W': // 상
			if (Map[playerY - 1][playerX] == '#' || Map[playerY - 1][playerX] == '@')
			{
				break;
			}
			else
			{
				Map[playerY][playerX] = ' ';
				playerY--;
				break;
			}
		case 's':
		case 'S': //하
			if (Map[playerY + 1][playerX] == '#' || Map[playerY - +1][playerX] == '@')
			{
				break;
			}
			else {
				Map[playerY][playerX] = ' ';
				playerY++;
				break;
			}
		case 'a':
		case 'A': // 좌
			if (Map[playerY][playerX - 1] == '#' || Map[playerY][playerX - 1] == '@')
			{
				break;
			}
			else
			{
				Map[playerY][playerX] = ' ';
				playerX--;
				break;
			}
		case 'd':
		case 'D': // 우
			if (Map[playerY][playerX + 1] == '#' || Map[playerY][playerX + 1] == '@')
			{
				break;
			}
			else
			{
				Map[playerY][playerX] = ' ';
				playerX++;
				break;
			}
		}
		if (key == 'q' || key == 'Q')
		{
			break;
		}
	}
	// Update();
	// Render(); // 화면에 그려주세요.
	// Buffer();
	
}

void playermove(int* x, int* y, char Map)
{
	Map[y][x] = ' ';
}