#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");//b -> ������
//	//fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ��� 
//
//	char buff[10]; //�ַ�����ʽ û��b
//	itoa(a, buff, 10);
//	fputs(buff, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	FILE* fp1 = fopen("test.txt", "w"); //w����д��a׷��д
	if (fp1 == NULL)
	{
		printf("���ļ�ʧ��\n");
	}

	FILE* fp2= fopen("test.c", "r");
	if (fp2== NULL)
	{
	      printf("���ļ�ʧ��\n");
	}

	char ch = fgetc(fp2); //����test.c���������
	while (ch != EOF) //ͨ��EOF��stdio.h�ﶨ��Ϊ-1
	{
		fputc(ch, fp1);
		ch = fgetc(fp2);
	}

	fclose(fp1);
	fclose(fp2);

	system("pause");
	return 0;
}
