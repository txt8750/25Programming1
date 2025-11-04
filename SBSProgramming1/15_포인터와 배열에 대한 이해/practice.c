#include "practice.h"

void Test11()
{
	printf("\n예제1.\n");
	int numarr[10];
	printf("배열의 값 : ");
	// 배열안에 있는 값을 반복문을 이용해서 0 - 0, 1 - 1 대응 되도록 넣자
	for (int i = 0; i < 10; i++)
	{
		numarr[i] = i;
		printf("%d ", numarr[i]);
	}
	printf("\n");

	printf("주소의 연산 방식으로 표현한 배열의 값 : ");
	// 주소의 연산 방식으로 표현해보세요, 역순으로 표현
	for (int i = 0; i < 10; i++) {

		*(numarr + i) = 9 - i;

		printf("%d ", numarr[i]);
	}
	printf("\n");
}

void Test22()
{
	printf("\n예제2.\n");
	
	const char* Group1[3] = { "A", "B", "C" };
	const char* Group2[3] = { "사과", "바나나", "포도" };
	const char* Group3[3] = { "전사", "마법사", "궁수" };
	// 배열을 인자로 받는 함수를 선언
	// 또다른 배열의 주소를 가져오는 포인터를 선언

	PrintText(Group1);
	PrintText(Group2);
	PrintText(Group3);

	// Func(Group1);  A B C
	// Func(Group2);  사과 바나나 포도
	// Func(Group3);  전사 마법사 궁수
}

void PrintText(const char* Array[])   
                                      
{
	for (int i = 0; i < 3; i++)
	{
		printf("%s ", Array[i]);
	}
	printf("\n");
}