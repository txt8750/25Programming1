// 똥피하기 게임을 콘솔로 만들어보자
// 피한 개수당 점수 1
// ESC를 누르면 게임 종료
// 게임시작 화면 따로 구현
// 플레이어 시작 좌표 설정
// 맵의 크기 설정
// 떨어지는 개체 속도 설정
// 떨어지는 개체를 플레이어가 맞으면 목숨 하나 까임
// 목숨3개 다 쓰면 끝
// 목숨3개 디스플레이로 표현
// 개체가 떨어지는 위치는 랜덤
// 시간이 지날수록 난이도 증가
// 게임 오버시 현재 스코어, 최고 스코어 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

void PlayerControl();
void Update();
void Render();
bool Quit();

int main()
{

	while (true) // 게임 루프
	{
		// 게임 로직
		// 조작하는 함수 만들기 playerhandle playercontrol
		// Update (갱신하다).
		// 렌더 (데이터가 변경되면 그것을 실행하라)

		//scanf(); << breaking point 엔터키를 칠때까지
		short input = 0; // 화살표 225
		
		if (_kbhit()) // 키보드를 입력하면 True
		{
			input = _getch();

			if (input == 224 || input == 0)
			{
				input = _getch();
				switch (input)
				{
				case 72: // 위쪽
					// 플레이어의 현재 y좌표를 -1해주세요
					break;
				case 80: // 아래쪽
					// 플레이어의 현재 y좌표를 +1해주세요
					break;
				case 75: // 왼쪽
					// 플레이어의 현재 x좌표를 -1해주세요
					break;
				case 77: // 오른쪽
					// 플레이어의 현재 x좌표를 +1해주세요
					break;


				}
			}
		}

		PlayerControl();
		Update();
		Render();

		if (Quit())
		{
			break;
		}


	}

}

void PlayerControl()
{

}
void Update()
{

}
void Render()
{

}
bool Quit()
{
	int input = 0;
	//scanf("%d", &input);

	if (input == 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}