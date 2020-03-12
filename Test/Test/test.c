#include "contact.h"

//int main()
//{
//	ContactBook cb;
//	ContactBookInit(&cb);
//	Contact con1;
//	strcpy(con1._name, "小杨");
//	strcpy(con1._address, "某处旮旯");
//	strcpy(con1._tel, "12345678963");
//	con1._age = 20;
//	ContactBookAppend(&cb, &con1);
//
//	Contact con2;
//	strcpy(con2._name, "Rose");
//	strcpy(con2._address, "某处旮旯");
//	strcpy(con2._tel, "12345678966");
//	con2._age = 21;
//	ContactBookAppend(&cb, &con2);
//
//	ContactPrint(&cb);
//	ContactBookSave(&cb, "contactbookbin.txt"); //生成文本
//
//	ContactBookDestory(&cb);
//
//	system("pause");
//	return 0;
//}

int main()
{
	ContactBook cb;
	ContactBookInit(&cb);
	ContactBookLoad(&cb, "contactbookbin.txt"); //读取文本
	ContactPrint(&cb);
	ContactBookDestory(&cb);

	system("pause");
	return 0;
}