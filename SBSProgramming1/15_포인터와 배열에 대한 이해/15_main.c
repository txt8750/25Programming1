#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "practice.h"

int main()
{
	printf("1.포인터 복습\n");

	// 포인터 변수를 선언(int)
	// 정수 값의 주소를 저장해보세요(주소연산자 사용)
	// 포인터 변수로 부터 값을 가져와서 출력해보세요.(역참조 연산)

	int num = 10;
	int* numPtr = &num;
	printf("num : %d\n", *numPtr);
	printf("\n");

	// 주소에 대한 이해
	// 컴퓨터는 주소의 시작점을 기준으로 데이터 자료형에 정의된 범위만큼 정해진 방식으로 읽는다.

	// int* : 시작 주소로 부터 4byte를 읽는다는 뜻
	printf("numPtr의 값 : %p\n", numPtr);
	
	float num2 = 0.2;
	float* num2Ptr = &num2;

	numPtr = num2Ptr;
	printf("numPtr 현재 주소로 부터 읽은 값 : %d\n", *numPtr);

	// num3 = 10;  정의 되어있지않다. -> 자료형이 지정 되어있지 않아 어디까지 읽을지 모름

	printf("\n2.포인터와 배열\n");

	int numArr[5] = { 0, }; // 시작 주소로 부터 4byte를 읽겠다. 4byte가 5개 -> 20byte

	printf("numArr의 byte크기 : %d\n", sizeof(numArr));
	printf("numArr의 시작 주소 : %p\n", numArr);

	numArr[1] = 1;
	*(numArr + 1) = 2;		//numArr의 주소값에 +1(int로 선언 되었으므로 4byte)을 더한 주소의 값으로 2를 넣겠다. == numArr[1]
	printf("numArr[1]의 값 : %d\n", numArr[1]);
	printf("numArr[1]의 시작 주소 : %p\n", &numArr[1]);

	// 배열의 크기를 증가시키고 싶다.
	// 기존에 선언한 배열의 크기를 증가 시키는건 불가능
	// 굳이하고 싶다면 새로운 배열(크기가 증가된)을 만들고 기존 배열의 값들을 새로운 배열로 이동

	printf("\n3.배열과 상수 포인터\n");

	// 배열은 포인터다.
	// 배열 선언 시 배열의 첫번째 주소값을 가지고 있음
	// 배열의 주소를 변경하려는 경우 오류 발생 -> 상수 포인터와 동일한 기능
	// 단 배열의 값은 바꿀수 있으니 상수 지시 포인터는 아님
	int sample = 1;
	// numArr = &sample; 배열의 주소를 sample의 주소로 바꾸려는 경우 오류 발생
	
	const char* const itemText[3] = {"나무", "바위", "칼"};
	// 배열에 숫자를 넣을땐 int itemText[3] 이렇게 그냥 썼는데 문자열은 왜 포인터를 쓰는가?
	// 포인터는 8byte씩 읽음 문자열을 그대로 읽게 되면 문자열의 크기가 8byte를 넘어갈 수도 있기때문에
	// 포인터 연산자를 사용하여 각 item[0], [1], [2] 에있는 주소를 저장 (주소 - 주소 - 값의 구조)
	// 각 자리에 있는 값을 가져올 때는 문자열의 주소를 가져오기때문에 포인터 연산자 없이 itemText[0]과 같이 그냥 사용

	printf("itemText0 : %s\n", itemText[0]);
	printf("itemText1 : %s\n", itemText[1]);
	printf("itemText2 : %s\n", itemText[2]);
	
	printf("포인터의 크기 : %d\n", sizeof(char*));

	// 배열은 기본적으로 상수 포인터 : 주소를 변경하지 못하는 포인터
	// 배열을 상수 지시 포인터로 표현하면? 상수 + 상수지시 포인터

	printf("\n");
	Test11();
	Test22();

}