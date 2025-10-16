/*
*  ��¥   : 2025-10.16
* �н���ǥ : �ڷ����� ����
* �ǽ���ǥ : ���� ������ �м��ؼ� �ڷ����� �����Ѵ�.
*/

// �ڷ���(Data Type)
// Data : ����,�׸�,��ȣ,���� �� ���ǵǾ� ���� ���� ����
// ex) ����ų(����), ų ���ھ�(����), ���� ����(�Ǽ�)
//     �̹���, �Ҹ�(����)
// �ڷ���� Ư¡�� ���� ���¸� �з��� ���� �ڷ����̶� �Ѵ�.
// �ڷ��� : ����, ����, �Ǽ�

// ����(Variable)
// ���� ���� ��� : (�ڷ���) (������) = ������;
// int    : ����
// float  : �Ǽ�
// char   : ����   -> �Ѱ��� �ܾ ǥ��
// string : ���ڿ�


#include <stdio.h>

int main() {

	// ����ų ����ȭ�鿡 ����ϰ� �ʹ�
	printf("����ų\n");
	// �������� ������� ���ھ ����ϰ�ʹ�
	printf("10 vs 25\n");
	// è�Ǿ��� ������ �ִ� ������ ����ϰ� �ʹ�
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

	printf("������ 1���� �ɷ�ġ\n");
	printf("ü��: %d (+%d)\n", GarenFirstLvHP, GarenGrowthHP);
	printf("����: %d (+%d)\n", GarenFirstLvMP, GarenGrowthMP);
	printf("���ݷ�: %d (+%d)\n", GarenFirstLvAD, GarenGrowthAD);
	printf("���� �ӵ�: %.3f (+%.2f%)\n\n", GarenFirstLvAS, GarenGrowthASvs);	// float ��½� �Ҽ��� ���ڸ� ���� �ϴ� ���





	// �� ������ ��ǻ�Ͱ� ���� ���ϴ� ��� ������ ������ �߳���?

	// 5������ �� ������ ������ ��� �ǳ���?
	printf("���� ���� ���� : %d\n", GarenLevel);
	printf("���� ���� ü�� : %d\n", GarenFirstLvHP + (GarenLevel - 1) * GarenGrowthHP);
	printf("���� ���� ���� : %d\n", GarenFirstLvMP + (GarenLevel - 1) * GarenGrowthMP);
	printf("���� ���� ���ݷ� : %d\n", GarenFirstLvAD + (GarenLevel - 1) * GarenGrowthAD);
	printf("���� ���� ���� �ӵ� : %.3f\n\n", GarenFirstLvAS + (GarenLevel - 1) * GarenGrowthAS);

	// �ٸ� è�Ǿ����ε� ���� ������� ������ ǥ���غ����� (����Ʋ��)
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

	printf("����Ʋ�� ���� ���� : %d\n", CaitlynLevel);
	printf("����Ʋ�� ���� ü�� : %d\n", CaitlynFirstLvHP + (CaitlynLevel - 1) * CaitlynGrowthHP);
	printf("����Ʋ�� ���� ���� : %d\n", CaitlynFirstLvMP + (CaitlynLevel - 1) * CaitlynGrowthMP);
	printf("����Ʋ�� ���� ���ݷ� : %d\n", CaitlynFirstLvAD + (CaitlynLevel - 1) * CaitlynGrowthAD);
	printf("����Ʋ�� ���� ���� �ӵ� : %.3f\n\n", CaitlynFirstLvAS + (CaitlynLevel - 1) * CaitlynGrowthAS);


	// �м��غ��� ���� ������ ������ �ϳ� �����ͼ� �������� ǥ�� (���̺��� �Ľ� ����)
	int AtkScore = 0;
	int DefScore = 0;
	int Round = 1;

	int PlayerFirstHP = 100;
	int PlayerSpecAB = 5;

	int MainGunAmmo = 5;
	int SubGunAmmo = 13;




	return 0;

}