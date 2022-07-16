#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define QUIT 5
#define HOTEL1 180.0
#define HOTEL2 225.0
#define HOTEL3 255.0
#define HOTEL4 355.0
#define DISCOUNT 0.95
#define STARS "***************************************"


//显示选择列表
int menu(void);

//返回预定天数
int getnight(void);

//根据费率，入住天数计算费用
//并显示结果
void showprice(double rate, int nights);

