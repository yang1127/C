#pragma once
#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct Contact
{
	char _name[24];
	char _tel[16];
	char _address[64];
	int  _age;
}Contact;

// ͨѶ¼
typedef struct ContactBook
{
	Contact* _con_array;
	size_t _size;		// ��ϵ�˸���
	size_t _capacity;	// ����
}ContactBook;

void ContactBookInit(ContactBook* pbook); //��ʼ��
void ContactBookDestory(ContactBook* pbook); //����
void ContactBookAppend(ContactBook* pbook, Contact* con); //���
void ContactBookSave(ContactBook* pbook, const char* file); //����
void ContactBookLoad(ContactBook* pbook, const char* file); //��ȡ
void ContactPrint(ContactBook* pbook); //��ӡ






