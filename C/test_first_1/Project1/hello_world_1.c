/*#include <stdio.h>
int main(void)
{
	printf("hello world!!!\n");
	return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> //getch()����
#include <windows.h> //sleep()����
struct student* temp; //ָ��ṹ���ָ��
struct student* head;
struct student {
	int num;
	char name[6];
	int grade;
	struct student* next;
};
struct student* luru(); //����ֵΪ�ṹ��ָ��ĺ���
struct student* paixu2(); //����������������
void luru2(struct student* h);
int menu();
void welcome();
void paixu();
struct student* luru() //������������������Ϣ����¼�����
{


	struct student* rhead, * t, * stu;
	rhead = (struct student*)malloc(sizeof(struct student));
	t = rhead;
	rhead->next = NULL; //Ϊ������ڵ��ָ����ֵΪ��ָ��
	char flag; //��־�������ж��Ƿ���������Ϣ


	printf("\nѧ������ϵͳ������1��ӣ�����0�˳��� \n");
	while (flag != '1' && flag != '0')
	{
		flag = getch(); //�����Ժ��������û�����ĳ��
		//�ַ�ʱ�������Զ���ȡ�����谴�س�
	}
	if (flag == '1')
	{
		system("CLS");
		do {
			system("CLS");
			stu = (struct student*)malloc(sizeof(struct student));
			printf("ѧ��(6λ��): ");
			scanf("%d", &stu->num);
			while (stu->num > 999999 || stu->num < 100000)
			{
				printf("\n������6λ�Ǹ���\n");
				printf("��������ѧ��: ");
				scanf("%d", &stu->num);
			}
			printf("����: ");
			scanf("%s", stu->name);
			while (stu->name[0] > 0) /*Ϊ�˱����������������
			�ڼ�����ڴ洢ʱÿ���ֽ����λ��1��
			��char���Ͳ鿴��С��0�ˣ�
			���������еĵ��ֽ��ַ���ͻ*/
			{
				printf("\n���������뺺��\n");
				printf("������������: ");
				scanf("%s", stu->name);
			}
			printf("����: ");
			scanf("%d", &stu->grade);
			while (stu->grade < 0 || stu->grade>100)
			{
				printf("\n��������ɼ�������0-100֮�䣩\n");
				printf("����: ");
				scanf("%d", &stu->grade);


			}
			t->next = stu;
			t = stu;
			flag = getch();
			printf("���������밴1���˳��밴0��");
			while (flag != '1' && flag != '0')
			{
				flag = getch();
			}
		} while (flag == '1');
		t->next = NULL; //β�ڵ�
	}
	return rhead;
}
int menu()
{
	char n;
	do {
		system("cls");
		printf("|-------------------------------------------------|\n");
		printf("| *****ѧ������ϵͳ***** |\n");
		printf("|-------------------------------------------------|\n");
		printf("| 1.ѧ���ɼ�¼�� |\n");
		printf("| 2.ѧ���ɼ����򣨴Ӹߵ��ͣ� |\n");
		printf("| 3.�ɼ����޸� |\n");
		printf("| 4.ѧ���ɼ����� |\n");
		printf("| 5.�˳����� |\n");
		printf("---------------------------------------------------\n");
		printf("��ѡ��1-5��");
		n = getch();
	} while (n < '0' || n>'5');
	return(n - 48);
}
void luru2(struct student* h)
{
	struct student* stu;
	FILE* fp;
	if ((fp = fopen("ѧ����Ϣ.txt", "at")) == NULL)
	{
		printf("�ļ����󣨰�������˳�����");
		getch();
		exit(1);
	}
	for (stu = h->next; stu != NULL; stu = stu->next) //�ƶ���β�ڵ㣬ֹͣѭ��
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
	printf("** ѧ���ɼ�����ϵͳ **\n");
	printf("** **\n");
	printf("** **\n");
	printf("***********************************\n");
	printf("***********************************\n");
	Sleep(1000);
}
void paixu() //��������������
{
	system("cls");
	struct student* t, * head, * p;
	struct student* q;
	int xuehao;
	int fenshu;
	char mingzi[6];
	head = paixu2(); //ͷָ��
	for (t = head->next; t->next != NULL; t = t->next) //����
	{
		for (p = t->next; p != NULL; p = p->next)
		{
			if (t->grade < p->grade)
			{
				fenshu = t->grade;
				t->grade = p->grade;
				p->grade = fenshu;


				strcpy(mingzi, t->name); //�ַ�����Ҫ��strcpy���и�ֵ
				strcpy(t->name, p->name);
				strcpy(p->name, mingzi);


				xuehao = t->num;
				t->num = p->num;
				p->num = xuehao;
			}
		}
		printf("�ɼ����򣨴Ӹߵ��ͣ�\n\n");
		printf("%10s%10s%10s\n\n\n", "ѧ��", "����", "�ɼ�");
		for (q = head->next; q != NULL; q = q->next)
		{
			printf("%10d%10s%10d\n", q->num, q->name, q->grade);
		}
		system("pause");
		break;
	}

}
struct student* paixu2() //������������������luru����
{
	struct student* head, * r, * stu;
	FILE* fp;
	char ch;
	fp = fopen("ѧ����Ϣ.txt", "rt"); //���ļ�����
	head = (struct student*)malloc(sizeof(struct student));
	r = head;
	head->next = NULL;
	while ((ch = fgetc(fp)) != EOF) //���ļ��ж�ȡ�ַ�ֱ���ļ�ĩβ
	{
		stu = (struct student*)malloc(sizeof(struct student));
		fscanf(fp, "%d %s %d", &stu->num, stu->name, &stu->grade);
		//��ָ����ʽ���ļ��ж�����
		r->next = stu; //�γ�����������
		r = stu; //�γ�����������


	}
	r->next = NULL; //�����˵�����Կ���mooc������ϸ����
	fclose(fp);
	return head;

};

int main()
{
	char q, w;
	welcome();
	while (1) //���һֱ��ѡ�� N �Ļ�������һֱִ��
	{
		switch (menu())
		{
		case 1:
		{
			system("cls"); //ʵ����������
			printf("�ɼ����\n\n");
			system("pause"); //ʵ�ֶ�����Ļ
			head = luru(); //ͷ�ڵ�
			luru2(head); //ʵ��¼�뺯��
			printf("�Ƿ�����˵���Y or N��");
			scanf(" %c", &q); //��ֹ����1��0��������ѭ��
			if (q == 'N')
			{
				break;
			}
		}
		case 2:
		{
			system("cls");
			printf("�ɼ����򣨴Ӹߵ��ͣ�\n\n");
			system("pause");
			paixu(); //������
			printf("�Ƿ�����˵���Y or N��");
			scanf(" %c", &w);
			if (w == 'N')
			{
				break;
			}
		}




		}




	}


}
