#include "contact.h"

//int main()
//{
//	ContactBook cb;
//	ContactBookInit(&cb);
//	Contact con1;
//	strcpy(con1._name, "С��");
//	strcpy(con1._address, "ĳ����");
//	strcpy(con1._tel, "12345678963");
//	con1._age = 20;
//	ContactBookAppend(&cb, &con1);
//
//	Contact con2;
//	strcpy(con2._name, "Rose");
//	strcpy(con2._address, "ĳ����");
//	strcpy(con2._tel, "12345678966");
//	con2._age = 21;
//	ContactBookAppend(&cb, &con2);
//
//	ContactPrint(&cb);
//	ContactBookSave(&cb, "contactbookbin.txt"); //�����ı�
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
	ContactBookLoad(&cb, "contactbookbin.txt"); //��ȡ�ı�
	ContactPrint(&cb);
	ContactBookDestory(&cb);

	system("pause");
	return 0;
}