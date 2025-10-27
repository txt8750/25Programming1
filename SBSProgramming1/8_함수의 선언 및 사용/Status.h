#pragma once


#define _CRT_SECURE_NO_WARNINGS		//scanf ÇÔ¼ö¸¦ »ç¿ëÇÏ±âÀ§ÇÑ Á¤ÀÇ
#include <stdio.h>
#include <stdbool.h>				// true, false »ç¿ëÇÏ±â À§ÇÑ Á¤ÀÇ
#include "8_main.c"


// ÇÔ¼ö¿¡¼­ ¹İÈ¯°ªÀ» 2°³ÀÌ»ó ¹Ş¾Æ¿À±â À§ÇÑ ±¸Á¶Ã¼ ¼±¾ğ
typedef struct values				
{
	int Stats;						// °¢ ½ºÅÈÀ» int·Î ÀúÀå
	int Remain;						// »ç¿ëÇÏ°í ³²Àº ½ºÅÈ Æ÷ÀÎÆ®¸¦ int·Î ÀúÀå
}values;
/*
typedef struct Stats
{
	int STR;						// °¢ ½ºÅÈÀ» int·Î ÀúÀå
	int DEX;
	int INT;
	int LUK;

}Stats;
*/

// °¢ ½ºÅÈ¸¶´Ù Æ÷ÀÎÆ® ºĞ¹è°¡ ³¡³­ ÈÄ ÇöÀç ½ºÅÈ°ú ³²Àº ½ºÅÈ Æ÷ÀÎÆ®¸¦ Ãâ·Â
void PrintStat(int STR, int DEX, int INT, int LUK, int Remain)
{
	printf("\n=========================\n");
	printf("ÇöÀç ½ºÅÈ\nSTR : %d, DEX : %d, INT : %d, LUK : %d\n", STR, DEX, INT, LUK);
	printf("³²Àº ½ºÅÈ Æ÷ÀÎÆ® : %d\n", Remain);
	printf("=========================\n");
}

// °¢ ½ºÅÈ¿¡ ÅõÀÚÇÏ´Â ÇÔ¼ö
values STRPoint(int STR, int Remain)
{
	while (true)
	{
		values Stats_Remain;
		int SpendPoint = 0;
		printf("STR¿¡ ÅõÀÚÇÒ ½ºÅÈ Æ÷ÀÎÆ® : ");
		scanf("%d", &SpendPoint);
		while (getchar() != '\n');

		if (SpendPoint >= 0 && Remain >= SpendPoint)
		{
			Remain -= SpendPoint;
			STR += SpendPoint;

			Stats_Remain.Remain = Remain;
			Stats_Remain.Stats = STR;

			return Stats_Remain;
		}
		else if (Remain < SpendPoint)
		{
			printf("***************************\n");
			printf("³²Àº ½ºÅÈ Æ÷ÀÎÆ®°¡ ºÎÁ·ÇÕ´Ï´Ù.\n");
			printf("***************************\n\n");
			continue;
		}
		else
		{
			printf("***************************\n");
			printf("0¾Æ·¡ÀÇ ¼ıÀÚ´Â ÀÔ·ÂÇÏ½Ç ¼ö ¾ø½À´Ï´Ù.\n");
			printf("***************************\n\n");
			continue;
		}
	}
}

values DEXPoint(int DEX, int Remain)
{
	while (true)
	{
		values Stats_Remain;
		int SpendPoint = 0;
		printf("DEX¿¡ ÅõÀÚÇÒ ½ºÅÈ Æ÷ÀÎÆ® : ");
		scanf("%d", &SpendPoint);
		while (getchar() != '\n');

		if (SpendPoint >= 0 && Remain >= SpendPoint)
		{
			Remain -= SpendPoint;
			DEX += SpendPoint;

			Stats_Remain.Remain = Remain;
			Stats_Remain.Stats = DEX;

			return Stats_Remain;
		}
		else if (Remain < SpendPoint)
		{
			printf("***************************\n");
			printf("³²Àº ½ºÅÈ Æ÷ÀÎÆ®°¡ ºÎÁ·ÇÕ´Ï´Ù.\n");
			printf("***************************\n\n");
			continue;
		}
		else
		{
			printf("***************************\n");
			printf("0¾Æ·¡ÀÇ ¼ıÀÚ´Â ÀÔ·ÂÇÏ½Ç ¼ö ¾ø½À´Ï´Ù.\n");
			printf("***************************\n\n");
			continue;
		}
	}
}

values INTPoint(int INT, int Remain)
{
	while (true)
	{
		values Stats_Remain;
		int SpendPoint = 0;
		printf("INT¿¡ ÅõÀÚÇÒ ½ºÅÈ Æ÷ÀÎÆ® : ");
		scanf("%d", &SpendPoint);
		while (getchar() != '\n');

		if (SpendPoint >= 0 && Remain >= SpendPoint)
		{
			Remain -= SpendPoint;
			INT += SpendPoint;

			Stats_Remain.Remain = Remain;
			Stats_Remain.Stats = INT;

			return Stats_Remain;
		}
		else if (Remain < SpendPoint)
		{
			printf("***************************\n");
			printf("³²Àº ½ºÅÈ Æ÷ÀÎÆ®°¡ ºÎÁ·ÇÕ´Ï´Ù.\n");
			printf("***************************\n\n");
			continue;
		}
		else
		{
			printf("***************************\n");
			printf("0¾Æ·¡ÀÇ ¼ıÀÚ´Â ÀÔ·ÂÇÏ½Ç ¼ö ¾ø½À´Ï´Ù.\n");
			printf("***************************\n\n");
			continue;
		}
	}
}

values LUKPoint(int LUK, int Remain)
{
	while (true)
	{
		values Stats_Remain;
		int SpendPoint = 0;
		printf("LUK¿¡ ÅõÀÚÇÒ ½ºÅÈ Æ÷ÀÎÆ® : ");
		scanf("%d", &SpendPoint);
		while (getchar() != '\n');

		if (SpendPoint >= 0 && Remain >= SpendPoint)
		{
			Remain -= SpendPoint;
			LUK += SpendPoint;

			Stats_Remain.Remain = Remain;
			Stats_Remain.Stats = LUK;

			return Stats_Remain;
		}
		else if (Remain < SpendPoint)
		{
			printf("***************************\n");
			printf("³²Àº ½ºÅÈ Æ÷ÀÎÆ®°¡ ºÎÁ·ÇÕ´Ï´Ù.\n");
			printf("***************************\n\n");
			continue;
		}
		else
		{
			printf("***************************\n");
			printf("0¾Æ·¡ÀÇ ¼ıÀÚ´Â ÀÔ·ÂÇÏ½Ç ¼ö ¾ø½À´Ï´Ù.\n");
			printf("***************************\n\n");
			continue;
		}
	}
}

// ºĞ¹èÇÒ ½ºÅÈÀ» ¼±ÅÃÇÏ´Â ÇÔ¼ö
Stats SelectCharacter(int StartPoint)
{
	// SelectNumber : ½ºÅÈÀ» ¼±ÅÃÇÏ´Â ¼ıÀÚ STR : 0, DEX : 1, INT : 2, LUK : 3
	int SelectNumber = 0;								// STR, DEX, INT, LUK  Áß¿¡ ¼±ÅÃ
	int RemainPoint = StartPoint;						// ÇöÀç °¡Áö°íÀÖ´Â ¹Ì»ç¿ë ½ºÅÈ Æ÷ÀÎÆ®
	// °¢ ½ºÅÈ °ª ÃÊ±âÈ­
	int STR = 0;
	int DEX = 0;
	int INT = 0;
	int LUK = 0;
	// ±¸Á¶Ã¼ ¼±¾ğ
	values ST_RE;
	Stats Total;
	// ³²Àº Æ÷ÀÎÆ®°¡ 0ÀÌ µÇ¸é ¹İº¹ Á¾·á
	while (RemainPoint > 0)
	{
		
		printf("\n=========================\n");
		printf("%d ½ºÅÈ Æ÷ÀÎÆ®¸¦ ºĞ¹èÇØÁÖ¼¼¿ä\n", RemainPoint);
		printf("STR : 0, DEX : 1, INT : 2, LUK : 3\n");
		printf("¾î¶² ½ºÅÈ¿¡ Æ÷ÀÎÆ®¸¦ ÅõÀÚÇÏ½Ã°Ú½À´Ï±î? : ");
		scanf("%d", &SelectNumber);
		while (getchar() != '\n');							// ÀÔ·Â ¹öÆÛ ºñ¿ì´Â ±¸¹®
		if (SelectNumber == 0)								// STR ½ºÅÈ¿¡ Æ÷ÀÎÆ® ÅõÀÚÇÏ´Â °æ¿ì ÁøÇà
		{
			ST_RE = STRPoint(STR, RemainPoint);				// STRPoint ÇÔ¼ö ½ÇÇà ÈÄ ¹İÈ¯°ª 2°³(½ºÅÈ°ú ³²Àº Æ÷ÀÎÆ®)¸¦ ±¸Á¶Ã¼¿¡ ÀúÀå
			STR = ST_RE.Stats;								// ±¸Á¶Ã¼ÀÇ Stats¿¡ ÀúÀåµÈ °ªÀ» STR¿¡ ÀúÀå
			Total.STR = ST_RE.Stats;
			RemainPoint = ST_RE.Remain;					// ±¸ÃÊÁ¦¯M Remain¿¡ ÀúÀåµÈ °ªÀ» RemainPoint¿¡ ÀúÀå
			PrintStat(STR, DEX, INT, LUK, RemainPoint);		// ÇöÀç ½ºÅÈ »óÅÂ¿Í ³²Àº Æ÷ÀÎÆ® Ãâ·Â
		}
		else if (SelectNumber == 1)
		{
			ST_RE = DEXPoint(DEX, RemainPoint);
			DEX = ST_RE.Stats;
			Total.DEX = ST_RE.Stats;
			RemainPoint = ST_RE.Remain;
			PrintStat(STR, DEX, INT, LUK, RemainPoint);
		}
		else if (SelectNumber == 2)
		{
			ST_RE = INTPoint(INT, RemainPoint);
			INT = ST_RE.Stats;
			Total.INT = ST_RE.Stats;
			RemainPoint = ST_RE.Remain;
			PrintStat(STR, DEX, INT, LUK, RemainPoint);
		}
		else if (SelectNumber == 3)
		{
			ST_RE = LUKPoint(LUK, RemainPoint);
			LUK = ST_RE.Stats;
			Total.LUK = ST_RE.Stats;
			RemainPoint = ST_RE.Remain;
			PrintStat(STR, DEX, INT, LUK, RemainPoint);
		}
		else
		{
			printf("***************************\n");
			printf("Á¤È®ÇÑ °ªÀ» ÀÔ·ÂÇØ ÁÖ¼¼¿ä.\n");
			printf("***************************\n");
		}
	}
	return Total;
}




