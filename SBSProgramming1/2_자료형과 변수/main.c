/*
*  날짜   : 2025-10.16
* 학습목표 : 자료형과 변수
* 실습목표 : 실제 게임을 분석해서 자료형을 이해한다.
*/

// 자료형(Data Type)
// Data : 숫자,그림,기호,문자 등 정의되어 있지 않은 정보
// ex) 더블킬(문자), 킬 스코어(정수), 스탯 정보(실수)
//     이미지, 소리(파장)
// 자료들의 특징에 따라서 형태를 분류한 것을 자료형이라 한다.
// 자료형 : 문자, 정수, 실수

// 변수(Variable)
// 변수 선언 방법 : (자료형) (변수명) = 변수값;
// int    : 정수
// float  : 실수
// char   : 문자   -> 한개의 단어를 표현
// string : 문자열


#include <stdio.h>

int main() {

	// 더블킬 게임화면에 출력하고 싶다
	printf("더블킬\n");
	// 레드팀과 블루팀의 스코어를 출력하고싶다
	printf("10 vs 25\n");
	// 챔피언이 가지고 있는 스탯을 출력하고 싶다
	printf("AD : 10\n\n");

	
	//////////////////////////////////////
	int GarenLevel = 5;
	int GarenFirstLvHP = 690;
	int GarenGrowthHP = 98;

	int GarenFirstLvMP = 0;
	int GarenGrowthMP = 0;

	int GarenFirstLvAD = 69;
	int GarenGrowthAD = 4;

	float GarenFirstLvAS = 0.625f;
	float GarenGrowthASvs = 0.0365 * 100;
	float GarenGrowthAS = 0.0365;

	printf("가렌의 1레벨 능력치\n");
	printf("체력: %d (+%d)\n", GarenFirstLvHP, GarenGrowthHP);
	printf("마나: %d (+%d)\n", GarenFirstLvMP, GarenGrowthMP);
	printf("공격력: %d (+%d)\n", GarenFirstLvAD, GarenGrowthAD);
	printf("공격 속도: %.3f (+%.2f%)\n\n", GarenFirstLvAS, GarenGrowthASvs);	// float 출력시 소숫점 뒷자리 제거 하는 방법





	// 이 정보를 컴퓨터가 내가 원하는 결과 값으로 실행을 했나요?

	// 5레벨일 떄 가렌의 정보는 어떻게 되나요?
	printf("가렌 현재 레벨 : %d\n", GarenLevel);
	printf("가렌 현재 체력 : %d\n", GarenFirstLvHP + (GarenLevel - 1) * GarenGrowthHP);
	printf("가렌 현재 마나 : %d\n", GarenFirstLvMP + (GarenLevel - 1) * GarenGrowthMP);
	printf("가렌 현재 공격력 : %d\n", GarenFirstLvAD + (GarenLevel - 1) * GarenGrowthAD);
	printf("가렌 현재 공격 속도 : %.3f\n\n", GarenFirstLvAS + (GarenLevel - 1) * GarenGrowthAS);

	// 다른 챔피언으로도 위의 방식으로 정보를 표현해보세요 (케이틀린)
	int CaitlynLevel = 5;
	int CaitlynFirstLvHP = 580;
	int CaitlynGrowthHP = 107;

	int CaitlynFirstLvMP = 313;
	int CaitlynGrowthMP = 40;

	int CaitlynFirstLvAD = 60;
	int CaitlynGrowthAD = 3;

	float CaitlynFirstLvAS = 0.681f;
	float CaitlynGrowthASvs = 0.04 * 100;
	float CaitlynGrowthAS = 0.04;

	printf("케이틀린 현재 레벨 : %d\n", CaitlynLevel);
	printf("케이틀린 현재 체력 : %d\n", CaitlynFirstLvHP + (CaitlynLevel - 1) * CaitlynGrowthHP);
	printf("케이틀린 현재 마나 : %d\n", CaitlynFirstLvMP + (CaitlynLevel - 1) * CaitlynGrowthMP);
	printf("케이틀린 현재 공격력 : %d\n", CaitlynFirstLvAD + (CaitlynLevel - 1) * CaitlynGrowthAD);
	printf("케이틀린 현재 공격 속도 : %.3f\n\n", CaitlynFirstLvAS + (CaitlynLevel - 1) * CaitlynGrowthAS);


	// 분석해보고 싶은 게임의 정보를 하나 가져와서 수식으로 표현 (레이보우 식스 시즈)
	int AtkScore = 0;
	int DefScore = 0;
	int Round = 1;

	int PlayerFirstHP = 100;
	int PlayerSpecAB = 5;

	int MainGunAmmo = 5;
	int SubGunAmmo = 13;




	return 0;

}