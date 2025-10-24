#pragma once

#include <stdio.h>
#include "math.h"

void SumFunction(int x, int y)
{
	int result = x + y;
	printf("%d + %d = %d\n", x, y, result);
}

void MinFunction(int x, int y)
{
	int result = x - y;
	printf("%d - %d = %d\n", x, y, result);
}

void MulFunction(int x, int y)
{
	int result = x * y;
	printf("%d x %d = %d\n", x, y, result);
}

void DivFunction(int x, int y)
{
	if (y != 0)
	{
		int result = x / y;
		printf("%d / %d = %d\n", x, y, result);
	}
	else
	{
		printf("정수는 0으로 나눌 수 없습니다.\n");
		return; // (1) 코드를 더 이상 실행하지 않음
		        // (2) 뒤에 있는 값으로 반환함
	}

}