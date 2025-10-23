// 가위 바위 보 게임을 만들어보자
// 실습 목표 : 다른 미니 게임을 직접 설계하고 코드를 작성해 보기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// (1) 가위 바위 보 게임을 한글로 표현해보자
// - 유저, 컴퓨터가 가위 바위 보를 진행
// - 유저 : 가위, 바위, 보 중에 하나를 선택 -> 선택 단계
// - 결과 : 컴퓨터가 무엇을 냈는가에 따라 결과가 달라짐 -> 결과 단계

/*
*  프로그램을 혼자서 작성 할 때 권장하는 순서
*  1. 한글로 어떤 것을 구현할지 주석으로 표현
*  2. 한글로 표현한 내용을 컴퓨터에게 어떻게 명령할지 직접 작성
*   2-1. 특별한 문법, 헤더를 가져와서 사용한다, 오류가 나는 부분
*   2-2. 출력을 해서 결과를 성공 시켜보기
*/

int main()
{

	// 조건문 출력 Test
	// 조건을 표현하기 위해 여러가지 비교연산자를 사용
	// 비교 연산자
	//  ">" : 왼쪽의 값이 오른쪽의 값보다 크다
	//  "<" : 왼쪽의 값이 오른쪽의 값보다 작다
	//  "==" : 양쪽의 값이 같다
	//  "!=" : 양쪽의 값이 다르다
	//  "&&" : AND
	//  "||" : OR
	// 컴퓨터에서 비교 연산을 진행했을 때 참이면 1, 거짓이면 0을 반환한다.
	//bool value =  5 < 3;	// 비교연산 결과를 변수에 저장할 때 char, short, int 등의 자료형을 사용하면 메모리를 낭비
							// #include <stdbool.h>를 추가하고 bool 자료형을 사용하여 표현하면 좋음

	// 주의사항 : if () 뒤에 ";"세미콜론 붙이면 안됨
	/*if (false) printf("test\n");		// if 문은 중괄호를 사용하지 않는 경우 한줄로 조건식이 사용 됨
										// 세미콜론에서 하나의 문장이 끝나므로 이후에 중괄호와 내용을 넣어도 서로 다른 코드로 인식
	{
		printf("조건이 실행되었다!\n");
		printf("true : %d\n\n", value);
	}
	*/
	/*
	if (false)
	{
		printf("조건이 실행되었다!\n");
		printf("true : %d\n\n", value);
	}
	*/
	printf("==============================\n");
	printf("가위 바위 보 게임\n\n");
	printf("==============================\n\n");

	// 가위, 바위, 보를 플레이어가 직접 입력할 수 있게 구현(한글로 입력)
	// 컴퓨터가 가위, 바위, 보 중에 랜덤으로 선택하도록 구현
	// 가위 바위 보를 반복, 10판 진행 후 게임 종료 O
	// 점수를 표현, 이길때마다 +1점		O
	// 현재 라운드와 최종 라운드를 표현	O
	// 플레이어와 컴퓨터 중 누가 이겼는지 출력 O

	// 플레이어가 선택한 결과를 저장
	// 1. 가위, 2. 바위, 3. 보 (임의의 약속)
	srand(time(NULL));	// 컴퓨터의 랜덤 출력 시 시드 값 초기화
	int PlayerChoice; // 플레이어는 가위를 선택
	int ComputerChoice; // 컴퓨터는 가위를 선택

	int PlayerScore = 0;	// 플레이어의 점수
	int ComputerScore = 0;	// 컴퓨터의 점수
	int Round = 1;			// 현재 라운드
	
	const char* PlayerCharacter = "가위";
	const char* ComputerCharacter = "바위";
	
	// 가위바위보 10 번 반복
	while (Round <= 10)
	{

		printf("==============================\n");
		printf("Round : %d\n", Round);
		printf("가위 바위 보를 선택하세요 : ");
		while (getchar() != '\n');			// 버퍼를 클리어하는 구문 추가, Version 1.0.3
													// getchar() : 문자열을 입력 받는 함수
													// 입력받은 문자가 \n이 아니면 아무것도 실행하지않음
													// 입력받은 문자가 \n이라면 다음 구문 진행
		scanf(" %d", &PlayerChoice);

		ComputerChoice = rand() % 3+1;
		if (PlayerChoice == 1)
		{
			PlayerCharacter = "가위";
		}
		else if (PlayerChoice == 2)
		{
			PlayerCharacter = "바위";
		}
		else if (PlayerChoice == 3)
		{
			PlayerCharacter = "보";
		}
		
		if (ComputerChoice == 1)
		{
			ComputerCharacter = "가위";
		}
		else if (ComputerChoice == 2)
		{
			ComputerCharacter = "바위";
		}
		else if (ComputerChoice == 3)
		{
			ComputerCharacter = "보";
		}
		
		// 플레이어가 가위
		if (PlayerChoice == 1 && ComputerChoice == 3)
		{
			printf("플레이어 : %s, 컴퓨터 : %s\n", PlayerCharacter, ComputerCharacter);
			printf("플레이어가 승리했습니다\n");
			printf("==============================\n");
			PlayerScore++;
			Round++;
		}
		else if (PlayerChoice == 1 && ComputerChoice == 1)
		{
			printf("플레이어 : %s, 컴퓨터 : %s\n", PlayerCharacter, ComputerCharacter);
			printf("비겼습니다\n");
			printf("==============================\n");
			Round++;
		}
		else if (PlayerChoice == 1 && ComputerChoice == 2)
		{
			printf("플레이어 : %s, 컴퓨터 : %s\n", PlayerCharacter, ComputerCharacter);
			printf("플레이어가 패배했습니다\n");
			printf("==============================\n");
			ComputerScore++;
			Round++;
		}
		// 플레이어가 바위
		else if (PlayerChoice == 2 && ComputerChoice == 3)
		{
			printf("플레이어 : %s, 컴퓨터 : %s\n", PlayerCharacter, ComputerCharacter);
			printf("플레이어가 패배했습니다\n");
			printf("==============================\n");
			ComputerScore++;
			Round++;
		}
		else if (PlayerChoice == 2 && ComputerChoice == 1)
		{
			printf("플레이어 : %s, 컴퓨터 : %s\n", PlayerCharacter, ComputerCharacter);
			printf("플레이어가 승리했습니다\n");
			printf("==============================\n");
			PlayerScore++;
			Round++;
		}
		else if (PlayerChoice == 2 && ComputerChoice == 2)
		{
			printf("플레이어 : %s, 컴퓨터 : %s\n", PlayerCharacter, ComputerCharacter);
			printf("비겼습니다\n");
			printf("==============================\n");
			Round++;
		}
		// 플레이어가 보
		else if (PlayerChoice == 3 && ComputerChoice == 3)
		{
			printf("플레이어 : %s, 컴퓨터 : %s\n", PlayerCharacter, ComputerCharacter);
			printf("비겼습니다\n");
			printf("==============================\n");
			Round++;
		}
		else if (PlayerChoice == 3 && ComputerChoice == 1)
		{
			printf("플레이어 : %s, 컴퓨터 : %s\n", PlayerCharacter, ComputerCharacter);
			printf("플레이어가 패배했습니다\n");
			printf("==============================\n");
			ComputerScore++;
			Round++;
		}
		else if (PlayerChoice == 3 && ComputerChoice == 2)
		{
			printf("플레이어 : %s, 컴퓨터 : %s\n", PlayerCharacter, ComputerCharacter);
			printf("플레이어가 승리했습니다\n");
			printf("==============================\n");
			PlayerScore++;
			Round++;
		}
		else
		{

			printf("예외가 발생 했습니다\n");
			printf("==============================\n");
		}
	}


	// 플레이어의 점수 vs 컴퓨터의 점수 출력
	printf("\n\n==============================\n");
	printf("진행한 라운드 : %d\n", Round -1);
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
}

/*
*   개발 History를 작성해보자
*   가위 바위 보 게임을 만들기
*   Version 1.0.0 : 가위 바위 보 결과를 출력하는 기능 구현
*   Version 1.0.1 : 반복 및 입력 기능 구현  +  한글로 입력 받는 경우 버그가 발생, 문자로 입력하는 경우 오류 처리 반복 발생
*																			  -> 문자 입력시 변수에 -243834 등 음수로 값이 저장 되는 경우 발생
*   Version 1.0.2 : 컴퓨터가 입력 받는 값을 1~3까지의 랜덤 값으로 설정
*   Version 1.0.3 : 문자 입력 시 발생하던 오류 개선 -> scanf()의 버퍼에 \n이 남아있어 계속 반복되는 오류 -> 버퍼의 \n을 클리어하는 구문 추가
*					-> 첫번째 가위 바위 보 시작할때 숫자를 두번 입력해야하는 오류 발생
* 
*																			  
*/