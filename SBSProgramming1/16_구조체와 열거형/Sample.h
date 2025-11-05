#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#ifndef JOB_H // JOB_H를 define하지 않았다면

#define JOB_H

typedef enum
{
	전사,
	마법사,
	궁수,
	도적,
	UNDEF = 100
}JOB;

#endif // 이게 나올때까지 중간의 모든 구문을 include 영역에 포함시켜라

void SelectJOB(JOB* myJobPtr);

void SetPlayerStat(JOB selectJob, int* hpPtr, int* atkPtr);

void ShowPlayer(JOB selectJob, int hp, int atk);