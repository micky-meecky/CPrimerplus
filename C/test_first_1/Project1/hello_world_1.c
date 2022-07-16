/*#include <stdio.h>
int main(void)
{
	printf("hello world!!!\n");
	return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> //getch()函数
#include <windows.h> //sleep()函数
struct student* temp; //指向结构体的指针
struct student* head;
struct student {
	int num;
	char name[6];
	int grade;
	struct student* next;
};
struct student* luru(); //返回值为结构体指针的函数
struct student* paixu2(); //建立链表（用于排序）
void luru2(struct student* h);
int menu();
void welcome();
void paixu();
struct student* luru() //（创建单向链表）对信息进行录入操作
{


	struct student* rhead, * t, * stu;
	rhead = (struct student*)malloc(sizeof(struct student));
	t = rhead;
	rhead->next = NULL; //为待插入节点的指针域赋值为空指针
	char flag; //标志变量，判断是否进行添加信息


	printf("\n学生管理系统（输入1添加，输入0退出） \n");
	while (flag != '1' && flag != '0')
	{
		flag = getch(); //不回显函数，当用户按下某个
		//字符时，函数自动读取，无需按回车
	}
	if (flag == '1')
	{
		system("CLS");
		do {
			system("CLS");
			stu = (struct student*)malloc(sizeof(struct student));
			printf("学号(6位数): ");
			scanf("%d", &stu->num);
			while (stu->num > 999999 || stu->num < 100000)
			{
				printf("\n请输入6位非负数\n");
				printf("重新输入学号: ");
				scanf("%d", &stu->num);
			}
			printf("姓名: ");
			scanf("%s", stu->name);
			while (stu->name[0] > 0) /*为了避免这种情况，汉字
			在计算机内存储时每个字节最高位是1，
			用char类型查看就小于0了，
			不会与已有的单字节字符冲突*/
			{
				printf("\n姓名请输入汉字\n");
				printf("重新输入姓名: ");
				scanf("%s", stu->name);
			}
			printf("分数: ");
			scanf("%d", &stu->grade);
			while (stu->grade < 0 || stu->grade>100)
			{
				printf("\n重新输入成绩（输入0-100之间）\n");
				printf("分数: ");
				scanf("%d", &stu->grade);


			}
			t->next = stu;
			t = stu;
			flag = getch();
			printf("继续输入请按1，退出请按0：");
			while (flag != '1' && flag != '0')
			{
				flag = getch();
			}
		} while (flag == '1');
		t->next = NULL; //尾节点
	}
	return rhead;
}
int menu()
{
	char n;
	do {
		system("cls");
		printf("|-------------------------------------------------|\n");
		printf("| *****学生管理系统***** |\n");
		printf("|-------------------------------------------------|\n");
		printf("| 1.学生成绩录入 |\n");
		printf("| 2.学生成绩排序（从高到低） |\n");
		printf("| 3.成绩的修改 |\n");
		printf("| 4.学生成绩分析 |\n");
		printf("| 5.退出程序 |\n");
		printf("---------------------------------------------------\n");
		printf("请选择1-5：");
		n = getch();
	} while (n < '0' || n>'5');
	return(n - 48);
}
void luru2(struct student* h)
{
	struct student* stu;
	FILE* fp;
	if ((fp = fopen("学生信息.txt", "at")) == NULL)
	{
		printf("文件有误（按任意键退出）！");
		getch();
		exit(1);
	}
	for (stu = h->next; stu != NULL; stu = stu->next) //移动到尾节点，停止循环
	{
		fprintf(fp, "%d %s %d\n", stu->num, stu->name, stu->grade);
	}
	fclose(fp);
}
void welcome()
{
	printf("***********************************\n");
	printf("***********************************\n");
	printf("** **\n");
	printf("** **\n");
	printf("** 学生成绩管理系统 **\n");
	printf("** **\n");
	printf("** **\n");
	printf("***********************************\n");
	printf("***********************************\n");
	Sleep(1000);
}
void paixu() //具体进行排序操作
{
	system("cls");
	struct student* t, * head, * p;
	struct student* q;
	int xuehao;
	int fenshu;
	char mingzi[6];
	head = paixu2(); //头指针
	for (t = head->next; t->next != NULL; t = t->next) //遍历
	{
		for (p = t->next; p != NULL; p = p->next)
		{
			if (t->grade < p->grade)
			{
				fenshu = t->grade;
				t->grade = p->grade;
				p->grade = fenshu;


				strcpy(mingzi, t->name); //字符数组要用strcpy进行赋值
				strcpy(t->name, p->name);
				strcpy(p->name, mingzi);


				xuehao = t->num;
				t->num = p->num;
				p->num = xuehao;
			}
		}
		printf("成绩排序（从高到低）\n\n");
		printf("%10s%10s%10s\n\n\n", "学号", "姓名", "成绩");
		for (q = head->next; q != NULL; q = q->next)
		{
			printf("%10d%10s%10d\n", q->num, q->name, q->grade);
		}
		system("pause");
		break;
	}

}
struct student* paixu2() //建立链表，过程类似于luru函数
{
	struct student* head, * r, * stu;
	FILE* fp;
	char ch;
	fp = fopen("学生信息.txt", "rt"); //读文件操作
	head = (struct student*)malloc(sizeof(struct student));
	r = head;
	head->next = NULL;
	while ((ch = fgetc(fp)) != EOF) //从文件中读取字符直到文件末尾
	{
		stu = (struct student*)malloc(sizeof(struct student));
		fscanf(fp, "%d %s %d", &stu->num, stu->name, &stu->grade);
		//按指定格式从文件中读数据
		r->next = stu; //形成完整的链表
		r = stu; //形成完整的链表


	}
	r->next = NULL; //具体的说明可以看看mooc，有详细介绍
	fclose(fp);
	return head;

};

int main()
{
	char q, w;
	welcome();
	while (1) //如果一直不选择 N 的话，程序将一直执行
	{
		switch (menu())
		{
		case 1:
		{
			system("cls"); //实现清屏操作
			printf("成绩添加\n\n");
			system("pause"); //实现冻结屏幕
			head = luru(); //头节点
			luru2(head); //实际录入函数
			printf("是否继续菜单（Y or N）");
			scanf(" %c", &q); //防止读入1或0，陷入死循环
			if (q == 'N')
			{
				break;
			}
		}
		case 2:
		{
			system("cls");
			printf("成绩排序（从高到低）\n\n");
			system("pause");
			paixu(); //排序函数
			printf("是否继续菜单（Y or N）");
			scanf(" %c", &w);
			if (w == 'N')
			{
				break;
			}
		}




		}




	}


}
