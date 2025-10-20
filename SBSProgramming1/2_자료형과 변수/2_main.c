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
#include <Windows.h>

int main() {
	/*
	// 더블킬 게임화면에 출력하고 싶다
	//printf("더블킬\n");
	// 레드팀과 블루팀의 스코어를 출력하고싶다
	//printf("10 vs 25\n");
	// 챔피언이 가지고 있는 스탯을 출력하고 싶다
	//printf("AD : 10\n\n");

	
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
	float GarenGrowthAS = 0.0365f;

	printf("가렌의 1레벨 능력치\n");
	printf("체력: %d (+%d)\n", GarenFirstLvHP, GarenGrowthHP);
	printf("마나: %d (+%d)\n", GarenFirstLvMP, GarenGrowthMP);
	printf("공격력: %d (+%d)\n", GarenFirstLvAD, GarenGrowthAD);
	printf("공격 속도: %.3f (+%.2f%%)\n\n", GarenFirstLvAS, GarenGrowthASvs);	// float 출력시 소숫점 뒷자리 제거 하는 방법





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
	*/

	// 분석해보고 싶은 게임의 정보를 하나 가져와서 수식으로 표현 (레인보우 식스 시즈)
	
	char PlayerOperator[20] = "Grim";	// 플레이어의 오퍼레이터 명
	char TeamOperator1[20] = "Kali";	// 팀원1의 오퍼레이터 명
	char TeamOperator2[20] = "Hibana";  // 팀원2의 오퍼레이터 명
	char TeamOperator3[20] = "Ying";    // 팀원3의 오퍼레이터 명
	char TeamOperator4[20] = "Ash";     // 팀원4의 오퍼레이터 명

	int AtkScore = 0;				// 공격팀 승리 횟수
	int DefScore = 0;				// 방어팀 승리 횟수
	int Round = 1;					// 현재 라운드

	int PlayerMaxHP = 100;			// 플레이어의 최대 체력
	int PlayerHP = 100;				// 플레이어의 현재 체력
	int PlayerSpecAB = 5;			// 플레이어의 특수 능력 개수
	int PlayerDrone = 2;			// 플레이어가 지니고 있는 드론 개수
	int PlayerGadget = 2;			// 플레이어가 지니고있는 가젯 개수

	int PlayerMainAmmo = 31;		// 플레이어의 메인 총에 장전 된 총알 개수
	int PlayerSpareAmmo_M = 150;	// 플레이어의 메인 총에 장전 되어있지 않은 총알 개수
	int PlayerSubAmmo = 16;			// 플레이어의 서브 총에 장전 된 총알 개수
	int PlayerSpareAmmo_S = 60;		// 플레이어가 서브 총에 장전 되어있지 않은 총알 개수 

	
	// 2라운드 게임시작 스코어Atk 1 : Def 0

	printf("플레이어 : %s\n", PlayerOperator);								//플레이어가 선택한 오퍼레이터 명 출력
	printf("팀원1 : %s, 팀원2 : %s, 팀원3 : %s, 팀원4 : %s\n", TeamOperator1, TeamOperator2, TeamOperator3, TeamOperator4); //플레이어의 팀원들이 선택한 오퍼레이터 명 출력
	printf("라운드%d\n\n",Round);											// 현재 라운드 출력
	printf("현재 스코어\n Atk : %d\n Def : %d\n\n", AtkScore + 1, DefScore);	// 공격팀, 방어팀 현재 스코어 출력


	// 2라운드 진행 중 플레이어가 드론 모두 사용, 특수능력 3개 사용, 가젯 1개 사용
	// 메인 무장 총알 20발 사용 후 재장전
	// 서브 부장 총알 10발 사용 후 재장전

	printf("게임 시작 직후 플레이어 상태\n");
	printf("체력 : %d | %d\n", PlayerHP, PlayerMaxHP);
	printf("드론 소지 개수 : %d\n", PlayerDrone);
	printf("특수 능력 소지 개수 : %d\n", PlayerSpecAB);
	printf("가젯 소지개수 : %d\n", PlayerGadget);
	printf("메인 무장 총알 : %d\n", PlayerMainAmmo);
	printf("메인 무장 예비 총알 : %d\n", PlayerSpareAmmo_M);
	printf("서브 무장 총알 : %d\n", PlayerSubAmmo);
	printf("서브 무장 예비 총알 : %d\n\n", PlayerSpareAmmo_S);
	Sleep(1000);
	printf("게임 진행\n\n");
	Sleep(3000);

	int PlayerGetDmg = 60;
	PlayerHP -= PlayerGetDmg;
	printf("체력 : %d | %d\n", PlayerHP, PlayerMaxHP);						// 60데미지를 받은 플레이어의 현재 체력

	int PlayerUseDrone = 2;
	PlayerDrone -= PlayerUseDrone;
	printf("드론 소지 개수 : %d\n", PlayerDrone);							// 드론 모두 사용

	int PlayerUseSpecAB = 3;
	PlayerSpecAB = PlayerSpecAB - PlayerUseSpecAB;							// 특수능력 3번 사용
	printf("특수 능력 소지 개수 : %d\n", PlayerSpecAB);

	int PlayerUseGadget = 1;
	PlayerGadget -= PlayerUseGadget;
	printf("가젯 소지 개수 : %d\n", PlayerGadget);							// 가젯 1개 사용

	int PlayerUseMainAmmo = 20;
	PlayerMainAmmo = PlayerMainAmmo - PlayerUseMainAmmo;								
	printf("메인 무장 총알 : %d\n", PlayerMainAmmo);							// 플레이어가 사용하고 남은 메인 무장 총알
	printf("메인 무장 예비 총알 : %d\n", PlayerSpareAmmo_M);					// 플레이어의 메인 무장 예비 총알

	int PlayerUseSubAmmo = 10;
	PlayerSubAmmo = PlayerMainAmmo - PlayerUseSubAmmo;
	printf("서브 무장 총알 : %d\n", PlayerSubAmmo);							// 플레이어가 사용하고 남은 서브 무장 총알
	printf("서브 무장 예비 총알 : %d\n\n", PlayerSpareAmmo_S);				// 플레이어의 메인 무장 예비 총알

	//메인 무장 재장전
	Sleep(2000);
	printf("메인 무장 재장전 진행\n");
	Sleep(1000);
	PlayerMainAmmo = PlayerMainAmmo - PlayerMainAmmo + 1;
	printf("메인 무장 총알 : %d\n", PlayerMainAmmo);							// 재장전 시 약실에 남은 총알 제외한 나머지 총알 제거
	Sleep(1000);
	printf("재장전 완료\n\n");
	Sleep(2000);
	PlayerMainAmmo = PlayerMainAmmo + 30;
	printf("메인 무장 총알 : %d\n", PlayerMainAmmo);							// 재장전 후 장전된 총알 개수
	PlayerSpareAmmo_M = PlayerSpareAmmo_M - PlayerUseMainAmmo;
	printf("메인 무장 예비 총알 : %d\n\n", PlayerSpareAmmo_M);				// 재장전 후 남은 예비 총알 개수


	//서브 무장 재장전
	Sleep(2000);
	printf("서브 무장 재장전 진행\n");
	Sleep(1000);
	PlayerSubAmmo = PlayerSubAmmo - PlayerSubAmmo + 1;
	printf("서브 무장 총알 : %d\n", PlayerSubAmmo);							// 재장전 시 약실에 남은 총알 제외한 나머지 총알 제거
	Sleep(1000);
	printf("재장전 완료\n\n");
	Sleep(2000);
	PlayerSubAmmo = PlayerSubAmmo + 15;
	printf("서브 무장 총알 : %d\n", PlayerSubAmmo);							// 재장전 후 장전된 총알 개수
	PlayerSpareAmmo_S = PlayerSpareAmmo_S - PlayerUseSubAmmo;
	printf("서브 무장 예비 총알 : %d\n\n", PlayerSpareAmmo_S);				// 재장전 후 남은 예비 총알 개수
	
	return 0;

}