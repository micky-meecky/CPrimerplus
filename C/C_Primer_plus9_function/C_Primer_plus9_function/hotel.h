#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define QUIT 5
#define HOTEL1 180.0
#define HOTEL2 225.0
#define HOTEL3 255.0
#define HOTEL4 355.0
#define DISCOUNT 0.95
#define STARS "***************************************"


//��ʾѡ���б�
int menu(void);

//����Ԥ������
int getnight(void);

//���ݷ��ʣ���ס�����������
//����ʾ���
void showprice(double rate, int nights);

