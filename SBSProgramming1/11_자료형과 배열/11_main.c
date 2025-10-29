#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// 어떤 점이 장점이 되는가?
// 기존 방식, 새로운 방식 둘다 사용.
// obsolete : 더이상 쓸모가 없어져서 지원을 안하겠다.
// 이 코드를 사용해서 경고가 뜨면, 이거 이제 지원 안해줄거야 새로운 문법써~

// 반복문.

// 중괄호는 영역을 표현하는 녀석이다.
// 함수 헤더() => { }
// 자료형 int => 4byte, 정수를 표현하는 자료형
// 자료형 int x 100개 { }

// 배열
// 배열 사용 구문 : 자료형 변수명[] = {값1, 값2, 값3...};
//                         index :   0    1    2 ...
// 배열의 값을 사용하는 경우 : 변수명[index값]

int main()
{
	// 반복적으로 사용되는 자료형을 배열로 표현한다. 코드를 개선하기 위함. (쓸데없는 코드를 줄임)
	// 배열 사용(1)

	int a = 0;

	int numArray[] = { 0,1,2,3 };
	
	printf("%d\n", numArray[0]);  // 첫번째 표현인데 왜 1이 아니고 0일까?
	printf("%d\n", numArray[3]);  // 배열의 범위를 넘어가면 오류 or 쓰레기 값이 저장 됨

	for (int i = 0; i < 4; i++)
	{
		printf("%d번째 값 : %d\n", i+1, numArray[i]);
	}

	int numArray2[100];	// int형 자료형이 100개 저장될 수 있는 공간을 선언
	int numArray3[40] = { 0,1,2,3 };  // int형 자료형이 40개 저장될 수 있는 공간을 선언후 4개의 값만 넣음, 36개의 여유 공간 있음
	printf("a의 크기 %llubyte\n", sizeof(a));			// 1개의 정수를 저장하는 메모리-> 4byte 출력
	printf("numArray의 크기 %llubyte\n", sizeof(numArray));
	printf("numArray의 개수 %llu개\n", sizeof(numArray) / sizeof(int));
	printf("numArray2의 크기 %llubyte\n", sizeof(numArray2)); // 100개의 정수를 저장하는 메모리 -> 400byte 출력
	printf("numArray2 특정 index의 크기 %llubyte\n", sizeof(numArray2[2])); // 특정 인덱스의 메모리 -> 4byte 출력
	printf("numArray2[200]의 크기 %llubyte\n", sizeof(numArray2[200])); // 배열의 범위를 초과한 인덱스의 메모리 -> 4byte 출력?
	                                                                 // -> C언어는 배열의 범위를 초과하더라도 해당 메모리의 공간을 출력한다. 예외처리가 되어있지 않기 때문, 타 언어에서는 오류뜨는 경우도 있음
	printf("numArray2[200]의 값 %llu\n", numArray2[200]);									 // -> 실제 출력 시 0 출력
	printf("numArray3의 크기 %llubyte\n", sizeof(numArray3));

	// 문자를 직접 표현.
	// 플레이어의 이름을 설정
	// 플레이어의 이름을 저장할 수 있는 공간을 만들고, 이 공간에 입력받은 데이터를 저장하고 싶다.

	// char c; scanf(&c); // 문자, 기호 하나만 표현.
	
	char c1 = 'h';
	char c2 = 'i';
	printf("%c%c\n", c1, c2);

	char Text[] = "안녕"; //한글은 하나에 2byte씩 사용
	printf("Text의 크기 : %llubyte\n	", sizeof(Text)); // 근데 여기서는 5byte가 나오네?
	// " "; -> literal 문자, 문자열을 표현할때 ('') ('').. 각 문자가 나열되고 문자열이 끝나고 '\0'이라는 NULL 문자를 삽입하여 문자열이 끝났다는 것을 나타낸다.

	// 반복문을 사용해서 문자가 끝이 났는지 확인하는 코드를 작성해 봅시다.

	char str[50];
	int index = 0;
	printf("문자열 입력 : ");	// 실행하면 왜 앞에 공간이 생기지..
	scanf("%s", str);		// 문자열을 입력 받을 때는 주소연산자를 사용하지 않는다.

	while (str[index] != '\0')
	{
		printf("%c", str[index]);
		index++;
	}
	printf("\nindex의 값 : %d\n", index);

	// char arr1[] = {'H', 'I'} => 문자의 배열
	// char arr2[] = {'H', "I', '\0'} => 문자열
	// %s에 문자의 배열을 넣으려고하면 \0이 확인이 되지 않아 오류 발생


	// 문자의 입력을 받아서 비교를 하자
	// 리터럴 문자가 저장되는 영역이 따로 존재한다.

	char ComputerChoice[10] = "가위";
	char PlayerChoice[10];
	printf("무엇을 낼건지 선택하세요 : ");
	scanf("%s", PlayerChoice);

	if (*PlayerChoice == *ComputerChoice)	// 포인터를 사용하여 문자열 비교, 포인터 : 해당 주소에 들어있는 값을 가져온다?
	{
		printf("같다\n");
	}
	else
	{
		printf("다르다\n");
	}




	// 문자열의 비교함수로 만들고 실행할 수 있게 해보자.
	// 변수끼리 들어있는 내용은 같다. bool IsStrCompare
	char name[10];
	printf("문자열을 입력하세요 : ");
	scanf("%s", name);
	bool dd = strcmp(name, "가위");
	if (!dd)
	{
		printf("같다");
	}
	else
	{
		printf("다르다");
	}
	
	return 0;
}