#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");//b -> 二进制
//	//fwrite(&a, 4, 1, pf);//二进制的形式写到文件中 
//
//	char buff[10]; //字符串形式 没有b
//	itoa(a, buff, 10);
//	fputs(buff, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	FILE* fp1 = fopen("test.txt", "w"); //w覆盖写、a追加写
	if (fp1 == NULL)
	{
		printf("打开文件失败\n");
	}

	FILE* fp2= fopen("test.c", "r");
	if (fp2== NULL)
	{
	      printf("打开文件失败\n");
	}

	char ch = fgetc(fp2); //拷贝test.c里面的内容
	while (ch != EOF) //通常EOF在stdio.h里定义为-1
	{
		fputc(ch, fp1);
		ch = fgetc(fp2);
	}

	fclose(fp1);
	fclose(fp2);

	system("pause");
	return 0;
}
