#pragma once
struct user//�û�����
{
	int telnum;//�绰����
	char name[20];//����
	int credit;//���÷�
	struct user* optUser[3];//��λ��Ȩ�˵�ָ������
	struct ownpackage* pownPack;//�Լ��İ���������
	struct optpackage* poptPack;//��Ȩ��ȡ�İ���������
	struct user* next;
};
struct ownPackage//�Լ��İ���������
{
	struct packageProp eProp;//������Ϣ
	struct ownPackage* next;
};
struct optPackage//��Ȩ��ȡ�İ���������
{
	struct packageProp eProp;//������Ϣ
	struct optPackage* next;
};
struct packageProp//������Ϣ
{
	int prop;//���ԣ�0��ʾ��ͨ��1��ʾС��װ��2��ʾ�д�װ��3��ʾ���װ��4��ʾ��أ�5��ʾ�쳣��
	char shore;//��������A B C D E X)
	int nomLevel;//���ܱ�ż�����(�������֣���һ������1~9��ʾ���ܱ�ţ��ڶ�������1~4��ʾ������
	int code;//������λ��ţ�������ɵĲ��ظ���ţ�
	/*�����������ϳɰ������루��A1-4-0000��*/
	float length;//���
	float height;//��
	float width;//��̱� 
	/*�����������ʱ��д����Ҫ��̬����һ�α��������prop=1~3�򶼸�ֵΪ�̶���ֵ*/
	float weight;//����
};
