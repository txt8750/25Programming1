#include "Math.h"

// extern const double PI; // 어딘가에 pi가 정의 되어있으니 그걸 찾아라 -> extern을 사용하여 프로젝트 단위로 사용가능, 헤더가 포함 되어있지않아도 알아서 가져옴
const static double PI = 3.14; // 정적이다, 여러개의 함수가 있고, 공통으로 사용하는 변수를 선언하고 싶다
							   // static을 안붙이면 모든 소스페이지에서 PI 전역변수를 사용할 가능성이 생긴다.
							   // static : 해당 소스 페이지에서만 전역 변수로 사용하라

void CalculateCircleArea()  // 원의 넓이를 구하는 함수
{
	//const double pi = 3.14;
	// pi -= pi - 0.14; -> pi를 상수로 고정 시키기 때문에 값 변경 불가
	double radius;
	printf("원의 반지름 : ");
	scanf("%lf", &radius);
	double circleArea = PI * radius * radius;

	printf("원의 넓이 : %.2lf\n\n", circleArea);
}

void CalculateCircleDiameter()  // 원의 지름을 구하는 함수
{
	//const double pi = 3.14;
	double radius;
	printf("원의 반지름 : ");
	scanf("%lf", &radius);
	double circleDiameter = 2 * PI * radius;

	printf("원의 지름 : %.2lf\n\n", circleDiameter);
}


// static을 함수 안에 선언하면 어떤 일이 발생 하는가?
// 스택 영역과 별개로 데이터가 저장이 된다.
// 프로그램이 시작할 때 데이터가 저장이 됨.
// 지역 변수에 static을 선언하는 이유? -> 함수안에서만 정적으로 사용하겠다.
void Test2()
{
	static int number = 1;
	int result;
	for (int i = 0; i < 10; i++)
	{
		number += i;
	}

}