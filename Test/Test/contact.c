#include "contact.h"

void ContactBookInit(ContactBook* pbook)
{
	assert(pbook);
	pbook->_con_array = (Contact*)malloc(sizeof(Contact)* 8); //���ռ�
	if (pbook->_con_array == NULL) //�жϿ��ٿռ��Ƿ�ɹ�
	{
		printf("malloc error\n"); 
		exit(-1);
	}

	pbook->_size = 0;
	pbook->_capacity = 8;
}

void ContactBookDestory(ContactBook* pbook)
{
	assert(pbook);
	free(pbook->_con_array);
	pbook->_con_array = NULL;
	pbook->_size = pbook->_capacity = 0;
}

void ContactBookAppend(ContactBook* pbook, Contact* pcon)
{
	assert(pbook && pcon);
	if (pbook->_size >= pbook->_capacity)
	{
		pbook->_capacity *= 2;
		Contact* newarray = realloc(pbook->_con_array, sizeof(Contact)*pbook->_capacity);
		if (newarray == NULL)//�жϿռ�
		{
			printf("realloc error\n");
			exit(-1);
		}

		pbook->_con_array = newarray;
	}

	Contact* array = pbook->_con_array;
	size_t i = pbook->_size;
	strcpy(array[i]._name,pcon->_name);
	strcpy(array[i]._address, pcon->_address);
	strcpy(array[i]._tel, pcon->_tel);
	array[i]._age = pcon->_age;

	pbook->_size++;
}


void ContactPrint(ContactBook* pbook)
{
	for (size_t i = 0; i < pbook->_size; ++i)
	{
		printf("====================================\n");

		printf("������%s\n", pbook->_con_array[i]._name);
		printf("�绰��%s\n", pbook->_con_array[i]._tel);
		printf("��ַ��%s\n", pbook->_con_array[i]._address);
		printf("���䣺%d\n", pbook->_con_array[i]._age);

		printf("====================================\n");
	}
}

void ContactBookSave(ContactBook* pbook, const char* file)
{
	FILE* fp = fopen(file, "wb");
	if (fp == NULL)
	{
		printf("���ļ�ʧ��\n");
		exit(-1);
	}

	Contact* array = pbook->_con_array;
	for (size_t i = 0; i < pbook->_size; ++i)
	{
		fwrite(&array[i], sizeof(Contact), 1, fp); //д��ȥ
	}

	fclose(fp);
}

void ContactBookLoad(ContactBook* pbook, const char* file) //����
{
	FILE* fp = fopen(file, "rb"); //��
	if (fp == NULL)
	{
		printf("���ļ�ʧ��\n");
		exit(-1);
	}

	Contact con;
	while (fread(&con, sizeof(Contact), 1, fp) == 1)  //һ�ζ�һ������
	{
		ContactBookAppend(pbook, &con); //���
	}

	fclose(fp);
}