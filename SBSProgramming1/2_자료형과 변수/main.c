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
#include <Windows.h>

int main() {
	/*
	// ����ų ����ȭ�鿡 ����ϰ� �ʹ�
	//printf("����ų\n");
	// �������� ������� ���ھ ����ϰ�ʹ�
	//printf("10 vs 25\n");
	// è�Ǿ��� ������ �ִ� ������ ����ϰ� �ʹ�
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

	printf("������ 1���� �ɷ�ġ\n");
	printf("ü��: %d (+%d)\n", GarenFirstLvHP, GarenGrowthHP);
	printf("����: %d (+%d)\n", GarenFirstLvMP, GarenGrowthMP);
	printf("���ݷ�: %d (+%d)\n", GarenFirstLvAD, GarenGrowthAD);
	printf("���� �ӵ�: %.3f (+%.2f%%)\n\n", GarenFirstLvAS, GarenGrowthASvs);	// float ��½� �Ҽ��� ���ڸ� ���� �ϴ� ���





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
	*/

	// �м��غ��� ���� ������ ������ �ϳ� �����ͼ� �������� ǥ�� (���κ��� �Ľ� ����)
	
	char PlayerOperator[20] = "Grim";	// �÷��̾��� ���۷����� ��
	char TeamOperator1[20] = "Kali";	// ����1�� ���۷����� ��
	char TeamOperator2[20] = "Hibana";  // ����2�� ���۷����� ��
	char TeamOperator3[20] = "Ying";    // ����3�� ���۷����� ��
	char TeamOperator4[20] = "Ash";     // ����4�� ���۷����� ��

	int AtkScore = 0;				// ������ �¸� Ƚ��
	int DefScore = 0;				// ����� �¸� Ƚ��
	int Round = 1;					// ���� ����

	int PlayerMaxHP = 100;			// �÷��̾��� �ִ� ü��
	int PlayerHP = 100;				// �÷��̾��� ���� ü��
	int PlayerSpecAB = 5;			// �÷��̾��� Ư�� �ɷ� ����
	int PlayerDrone = 2;			// �÷��̾ ���ϰ� �ִ� ��� ����
	int PlayerGadget = 2;			// �÷��̾ ���ϰ��ִ� ���� ����

	int PlayerMainAmmo = 31;		// �÷��̾��� ���� �ѿ� ���� �� �Ѿ� ����
	int PlayerSpareAmmo_M = 150;	// �÷��̾��� ���� �ѿ� ���� �Ǿ����� ���� �Ѿ� ����
	int PlayerSubAmmo = 16;			// �÷��̾��� ���� �ѿ� ���� �� �Ѿ� ����
	int PlayerSpareAmmo_S = 60;		// �÷��̾ ���� �ѿ� ���� �Ǿ����� ���� �Ѿ� ���� 

	
	// 2���� ���ӽ��� ���ھ�Atk 1 : Def 0

	printf("�÷��̾� : %s\n", PlayerOperator);								//�÷��̾ ������ ���۷����� �� ���
	printf("����1 : %s, ����2 : %s, ����3 : %s, ����4 : %s\n", TeamOperator1, TeamOperator2, TeamOperator3, TeamOperator4); //�÷��̾��� �������� ������ ���۷����� �� ���
	printf("����%d\n\n",Round);											// ���� ���� ���
	printf("���� ���ھ�\n Atk : %d\n Def : %d\n\n", AtkScore + 1, DefScore);	// ������, ����� ���� ���ھ� ���


	// 2���� ���� �� �÷��̾ ��� ��� ���, Ư���ɷ� 3�� ���, ���� 1�� ���
	// ���� ���� �Ѿ� 20�� ��� �� ������
	// ���� ���� �Ѿ� 10�� ��� �� ������

	printf("���� ���� ���� �÷��̾� ����\n");
	printf("ü�� : %d | %d\n", PlayerHP, PlayerMaxHP);
	printf("��� ���� ���� : %d\n", PlayerDrone);
	printf("Ư�� �ɷ� ���� ���� : %d\n", PlayerSpecAB);
	printf("���� �������� : %d\n", PlayerGadget);
	printf("���� ���� �Ѿ� : %d\n", PlayerMainAmmo);
	printf("���� ���� ���� �Ѿ� : %d\n", PlayerSpareAmmo_M);
	printf("���� ���� �Ѿ� : %d\n", PlayerSubAmmo);
	printf("���� ���� ���� �Ѿ� : %d\n\n", PlayerSpareAmmo_S);
	Sleep(1000);
	printf("���� ����\n\n");
	Sleep(3000);

	int PlayerGetDmg = 60;
	PlayerHP -= PlayerGetDmg;
	printf("ü�� : %d | %d\n", PlayerHP, PlayerMaxHP);						// 60�������� ���� �÷��̾��� ���� ü��

	int PlayerUseDrone = 2;
	PlayerDrone -= PlayerUseDrone;
	printf("��� ���� ���� : %d\n", PlayerDrone);							// ��� ��� ���

	int PlayerUseSpecAB = 3;
	PlayerSpecAB = PlayerSpecAB - PlayerUseSpecAB;							// Ư���ɷ� 3�� ���
	printf("Ư�� �ɷ� ���� ���� : %d\n", PlayerSpecAB);

	int PlayerUseGadget = 1;
	PlayerGadget -= PlayerUseGadget;
	printf("���� ���� ���� : %d\n", PlayerGadget);							// ���� 1�� ���

	int PlayerUseMainAmmo = 20;
	PlayerMainAmmo = PlayerMainAmmo - PlayerUseMainAmmo;								
	printf("���� ���� �Ѿ� : %d\n", PlayerMainAmmo);							// �÷��̾ ����ϰ� ���� ���� ���� �Ѿ�
	printf("���� ���� ���� �Ѿ� : %d\n", PlayerSpareAmmo_M);					// �÷��̾��� ���� ���� ���� �Ѿ�

	int PlayerUseSubAmmo = 10;
	PlayerSubAmmo = PlayerMainAmmo - PlayerUseSubAmmo;
	printf("���� ���� �Ѿ� : %d\n", PlayerSubAmmo);							// �÷��̾ ����ϰ� ���� ���� ���� �Ѿ�
	printf("���� ���� ���� �Ѿ� : %d\n\n", PlayerSpareAmmo_S);				// �÷��̾��� ���� ���� ���� �Ѿ�

	//���� ���� ������
	Sleep(2000);
	printf("���� ���� ������ ����\n");
	Sleep(1000);
	PlayerMainAmmo = PlayerMainAmmo - PlayerMainAmmo + 1;
	printf("���� ���� �Ѿ� : %d\n", PlayerMainAmmo);							// ������ �� ��ǿ� ���� �Ѿ� ������ ������ �Ѿ� ����
	Sleep(1000);
	printf("������ �Ϸ�\n\n");
	Sleep(2000);
	PlayerMainAmmo = PlayerMainAmmo + 30;
	printf("���� ���� �Ѿ� : %d\n", PlayerMainAmmo);							// ������ �� ������ �Ѿ� ����
	PlayerSpareAmmo_M = PlayerSpareAmmo_M - PlayerUseMainAmmo;
	printf("���� ���� ���� �Ѿ� : %d\n\n", PlayerSpareAmmo_M);				// ������ �� ���� ���� �Ѿ� ����


	//���� ���� ������
	Sleep(2000);
	printf("���� ���� ������ ����\n");
	Sleep(1000);
	PlayerSubAmmo = PlayerSubAmmo - PlayerSubAmmo + 1;
	printf("���� ���� �Ѿ� : %d\n", PlayerSubAmmo);							// ������ �� ��ǿ� ���� �Ѿ� ������ ������ �Ѿ� ����
	Sleep(1000);
	printf("������ �Ϸ�\n\n");
	Sleep(2000);
	PlayerSubAmmo = PlayerSubAmmo + 15;
	printf("���� ���� �Ѿ� : %d\n", PlayerSubAmmo);							// ������ �� ������ �Ѿ� ����
	PlayerSpareAmmo_S = PlayerSpareAmmo_S - PlayerUseSubAmmo;
	printf("���� ���� ���� �Ѿ� : %d\n\n", PlayerSpareAmmo_S);				// ������ �� ���� ���� �Ѿ� ����
	
	return 0;

}