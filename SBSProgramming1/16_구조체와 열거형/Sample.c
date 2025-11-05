#include "Sample.h"

void SelectJOB(JOB* myJobPtr)
{
	int input = 0;
	printf("직업을 선택하세요(0-전사, 1-마법사, 2-궁수, 3-도적) : ");
	scanf("%d", &input);
	*myJobPtr = input;

	switch (*myJobPtr)
	{
	case 전사:
		printf("전사를 선택했습니다.\n");
		break;
	case 마법사:
		printf("마법사를 선택했습니다.\n");
		break;
	case 궁수:
		printf("궁수를 선택했습니다.\n");
		break;
	case 도적:
		printf("도적을 선택했습니다.\n");
		break;
	default:
		printf("전사, 마법사, 궁수, 도적 중에 선택해주세요");
	}
}
void SetPlayerStat(JOB selectJob, int* hpPtr, int* atkPtr)
{
	switch (selectJob)
	{
	case 전사:
		*hpPtr = 100;
		*atkPtr = 20;
		break;
	case 마법사:
		*hpPtr = 40;
		*atkPtr = 80;
		break;
	case 궁수:
		*hpPtr = 50;
		*atkPtr = 70;
		break;
	case 도적:
		*hpPtr = 80;
		*atkPtr = 40;
		break;
	}
}

void ShowPlayer(JOB selectJob, int hp, int atk)
{
	char* Name[] = { "" };
	switch (selectJob)
	{
	case 전사:
		Name[0] = "전사";
		break;
	case 마법사:
		Name[0] = "마법사";
		break;
	case 궁수:
		Name[0] = "궁수";
		break;
	case 도적:
		Name[0] = "도적";
		break;
	}
	printf("직업 : %s, HP : %d, ATK : %d\n", Name[0], hp, atk);
}