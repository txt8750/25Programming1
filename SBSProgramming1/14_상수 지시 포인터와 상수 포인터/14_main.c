#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1. 포인터 복습
// int* numPtr = &a;    포인터 선언 방식 자료형(*)
// *numPtr // 주소에 저장된 값을 역참조

void Test1(int* x, int* y, int amountX, int amountY);  // 함수 head와 아래 있는 함수 Head 형식 맞추는거 잊지말기
void Test2();
void Printinventory(int inventoryCount[], const char* inventoryText[]);
void BattleResult(int playerinventory[], const char* inventoryText[]);

int main()
{
	printf("Test1 예제 코드 구현\n");
	int playerX = 0;
	int playerY = 0;
	int* playerXPtr = &playerX;
	int* playerYPtr = &playerY;

	int amountX = 3;
	int amountY = 4;

	Test1(playerXPtr, playerYPtr, amountX, amountY);
	printf("playerX : %d, player Y : %d\n", playerX, playerY);
	
	// 상수 지시 포인터가 왜 문법적으로 존재하는가?
	const double pi = 3.14;
	const double* piPtr = &pi;
	// (*piPtr) = (*piPtr) + 2;

	printf("파이의 값 : %.2lf\n", pi);


	// 예제2. const int*로 선언된 포인터 변수는 그 값을 변경하지 못한다.
	int boxX = 10;
	const int* const boxXPtr = boxX;
	//(*boxXPtr) += 2;  // 포인터에 저장되어있는 값을 수정하지마세요. 상수 지시 포인터(const pointer)

	// 예제3. 상수 포인터. 포인터(주소)가 바뀌지 않는다.
	int box2 = 5;
	// boxXPtr = &box2;
	//printf("boxXPtr가 가리키고 있는 값 : %d\n", *boxXPtr);






	// 예제4. 함수에 상수 포인터 / 상수 지시 포인터를 직접 사용해보기
	// 배열을 하나 선언
	int playerinventory[3] = { 200, 10, 13 };  // 동전의 수 , 레드 포션의 개수, 약초의 개수
	const char* playerinventoryText[3] = { "동전", "레드 포션", "약초" };

	playerinventory[0] += 100;
	playerinventory[1] += 15;
	Printinventory(playerinventory, playerinventoryText);

	// 출력 -> 동전, 레드 포션, 약초 각각 몇개가 있다.
	// player1 인벤토리, player2 인벤토리
	// 실습 예제1
	// player2가 현재 가지고 있는 인벤토리 데이터를 출력할 수 있게 만들어 보세요
	
	int player2inventory[3] = { 100, 8, 12 };
	const char* player2inventoryText[3] = { "동전", "레드 포션", "약초" };
	Printinventory(player2inventory, player2inventoryText);

	// 실습 예제2
	// 함수를 실행 시켜서 플레이어의 소유한 데이터를 출력시키는 변경시키는 함수를 만들어보세요
	printf("player의 전투 결과\n");
	BattleResult(playerinventory, playerinventoryText);
	Printinventory(playerinventory, playerinventoryText);

	printf("player2의 전투 결과\n");
	BattleResult(player2inventory, player2inventoryText);
	Printinventory(player2inventory, player2inventoryText);




	int playerWallet = 100;
	Test2(&playerWallet);
	printf("플레이어의 실제 소유 금액 : %d골드\n", playerWallet);
}






// Test1함수를 보고 이 함수가 어떤 목적으로 사용이 될 건지 분석
// 첫번째 요소 : 주소를 전달받음 : 주소를 이용해서 무엇을 할 것인가? 정수형 주소를 -  이름이 x
// 주소에 저장되어 있는 값을 변경해서 사용하겠다. 5 -> amountX 더해서 이 더한 값으로 바꾸겠다.

void Test1(int* x, int* y, int amountX, int amountY)  // 두 값을 함수 안에서 변경하고 싶다.
{
	*x = (*x) +  amountX;
	*y = (*y) +  amountY;
}

void Test2(const int* const playerWallet)
{
	// 플레이어가 가지고 있는 돈을 출력해줘
	printf("플레이어의 현재 소유 금액 : %d골드\n", *playerWallet);
}

// main함수에서 가져와서 사용할 변수를 복사한 후에 함수의 선언 부분에서 매개변수에 타입으로 복사해준다.
void Printinventory(int inventoryCount[], const char* inventoryText[])
{
	// int inventoryCount[] = main함수에 있는 int 배열을 넣겠다. 주소를 넘기겠다.
	// const char* inventoryText[] = main함수에 있는 const char* 배열을 넣겠다.
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s : %d개\n", inventoryText[i], inventoryCount[i]);
	}
	printf("\n");

}

void BattleResult(int playerinventory[], const char* inventoryText[])
{
	// 사용한 레드포션
	playerinventory[1] -= 2;

	// 얻은 골드
	playerinventory[0] += 100;

	// 사용한 약초
	playerinventory[2] -= 2;
}

// const 자료형 변수명 : 변수의 값을 바꾸지마라
// const 자료형* 변수명 : 포인터 변수의 값을 바꾸지마라
// 자료형* const 변수명 : 포인터 변수의 주소를 바꾸지마라
// const 자료형* const 변수명 : 포인터 변수의 값과 주소 모두 바꾸지마라