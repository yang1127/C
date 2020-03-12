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

// 通讯录
typedef struct ContactBook
{
	Contact* _con_array;
	size_t _size;		// 联系人个数
	size_t _capacity;	// 容量
}ContactBook;

void ContactBookInit(ContactBook* pbook); //初始化
void ContactBookDestory(ContactBook* pbook); //销毁
void ContactBookAppend(ContactBook* pbook, Contact* con); //添加
void ContactBookSave(ContactBook* pbook, const char* file); //保存
void ContactBookLoad(ContactBook* pbook, const char* file); //读取
void ContactPrint(ContactBook* pbook); //打印






