#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

struct package* creatpack(void)//�������������ڱ�
{
	struct package* head = (struct package*)malloc(sizeof(struct package));
	head->next = NULL;
	return head;
};

void chainPack(struct package* head, struct packageProp eProp)//��������
{
	struct package* p = head;
	struct package* q = (struct package*)malloc(sizeof(struct package));
	q->eProp = eProp;
	q->next = p->next;
	p->next = q;
};

struct user* creatuser(void)//�����û������ڱ�(ϵͳ��ʼ��ʱ����)
{
	struct user* head = (struct user*)malloc(sizeof(struct user));
	head->next = NULL;
	return head;
};

void adduser(struct user* head, int telnum, char* name)//�û�����
{
	struct user* p = head;
	struct user* q = (struct user*)malloc(sizeof(struct user));
	q->telnum = telnum;
	strcpy(q->name, name);
	q->credit = 100;
	q->optUser[0] = NULL;
	q->optUser[1] = NULL;
	q->optUser[2] = NULL;
	q->pPack = creatpack();
	q->next = p->next;
	p->next = q;
};

struct user* findUser(struct user* head, int telnum)//�����û�
{
	struct user* p = head->next;
	while (p)
	{
		if (p->telnum == telnum)
			return p;
		p = p->next;
	}
	return NULL;
};

void orgnizePack(struct packageProp &eProp)//���������Ϣ
{
	if (eProp.prop == 1)
	{
		eProp.length = 10;
		eProp.height = 10;
		eProp.width = 10;
	}
	else if (eProp.prop == 2)
	{
		eProp.length = 25;
		eProp.height = 25;
		eProp.width = 25;
	}
	else if (eProp.prop == 3)
	{
		eProp.length = 40;
		eProp.height = 40;
		eProp.width = 40;
	}
	else
	{
		
	}
};

void addPack(struct user* head, struct packageProp eProp, int telnum, char* name)//�������
{
	struct user* p = findUser(head, telnum);
	if (!p)
	{
		adduser(head, telnum, name);
		p = head->next;
	}
	struct package* q = p->pPack;
	chainPack(q, eProp);
};