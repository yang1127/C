#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>

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

//int main()
//{
//	FILE* fp1 = fopen("test.txt", "w"); //w覆盖写、a追加写
//	if (fp1 == NULL)
//	{
//		printf("打开文件失败\n");
//	}
//
//	FILE* fp2= fopen("test.c", "r");
//	if (fp2== NULL)
//	{
//	      printf("打开文件失败\n");
//	}
//
//	char ch = fgetc(fp2); //拷贝test.c里面的内容
//	while (ch != EOF) //通常EOF在stdio.h里定义为-1
//	{
//		fputc(ch, fp1);
//		ch = fgetc(fp2);
//	}
//
//	fclose(fp1);
//	fclose(fp2);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fin = fopen("input.txt", "w");
//	fputc('x', fin);
//	//fflush(fin); //缓冲
//	fputs("\nhello", fin);
//
//	fclose(fin); //关闭
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fin = fopen("printf.txt", "w");
//
//	fprintf(fin, "语文:%d\n数学:%d\n英语:%d\n", 98, 99, 100);
//	fclose(fin); //关闭
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fout = fopen("printf.txt","r");
//	
//	int a, b, c;
//	fscanf(fout, "语文:%d\n数学:%d\n英语:%d\n", &a, &b, &c);
//	printf("%d,%d,%d", a, b, c);
//	
//	fclose(fout); //关闭
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fout = fopen("printf.txt","r");
//	
//	int a, b, c;
//	fscanf(fout, "语文:%d\n数学:%d\n英语:%d\n", &a, &b, &c);
//	printf("%d,%d,%d", a, b, c);
//	
//	fclose(fout); //关闭
//
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include <assert.h>
#include <string.h>

struct TelInfo
{
	char _tel[16];
	char _name[24];
	int _age;
};
//
//// 123
//char* my_itoa(int num, char* buff)
//{
//	assert(buff);
//	int flag = 0;
//	if (num < 0) //若为负数
//	{
//		flag = 1;
//		num = 0 - num;
//	}
//
//	int i = 0;
//	while (num > 0)
//	{
//		buff[i] = num % 10 + '0'; //'3'  3 + '0' 为字符3
//		num /= 10;
//		++i;
//	}
//
//	if (flag == 1)
//	{
//		buff[i++] = '-';
//	}
//
//	//逆置 '321' -> '123' 首尾交换
//	int begin = 0, end = i - 1;
//	while (begin < end)
//	{
//		char tmp_ch = buff[end];
//		buff[end] = buff[begin];
//		buff[begin] = tmp_ch;
//		++begin;
//		--end;
//	}
//
//	buff[i] = '\0';
//
//	return buff;
//}
//
//int main()
//{
//	struct TelInfo info;
//	strcpy(info._name, "Tom");
//	strcpy(info._tel, "123456789");
//	info._age = 18;
//
//	// 文本读写
//	FILE* fout_txt = fopen("input.txt", "w");
//	//fputs(info._name, fout_txt);
//	//fputc('\n', fout_txt);
//	//fputs(info._tel, fout_txt);
//	//fputc('\n', fout_txt);
//
//	//或者
//	fprintf(fout_txt, "%s\n%s\n%d\n", info._name, info._tel, info._age);
//	fclose(fout_txt);
//    
//	struct TelInfo other;
//	FILE* fin_txt = fopen("input.txt", "r");
//	//fread(&other, sizeof(other), 1, fout_txt);
//	//或者
//	fscanf(fin_txt, "%s\n%s\n%d\n", other._name, other._tel, &other._age);
//	fclose(fin_txt);
//	printf("%s,%s,%d\n", other._name, other._tel, other._age);
//
//	////二进制读写
//	//FILE* fout_bin = fopen("input.c", "wb");
//	//fwrite(&info, sizeof(info), 1, fout_bin);
//	//fclose(fout_bin);
//
//	//struct TelInfo other;
//	//FILE* fin_bin = fopen("input.c", "rb");
//	//fread(&other, sizeof(other), 1, fin_bin);
//	//fclose(fin_bin);
//	//printf("%s,%s,%d\n", other._name, other._tel, other._age);
//
//	////itoa
//	//FILE* fout_txt = fopen("input.txt", "w");
//	//char age_buff[12];
//	//my_itoa(info._age, age_buff);
//	//fputs(age_buff, fout_txt);
//	//
//	////测试负数是否通过
//	//char buff[10];
//	//printf("%s\n", my_itoa(-1234, buff));
//
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include <assert.h>
//#include <string.h>
//
//int my_atoi(char* src)
//{
//	assert(src);
//	int sign = 1; //符号变量
//	int sum = 0;
//
//	if (*src == '-')
//	{
//		sign = -1; //符号位置为负
//		src++;
//	}
//	else if (*src == '+')
//	{
//		sign = 1; //符号位为正
//		src++;
//	}
//	while (*src >= '0'&&*src <= '9') 
//	{
//		sum = sum * 10 + *src - '0';
//		src++;
//	}
//	sum = sign * sum;
//	return sum;
//}
//
//int main()
//{
//	char arr1[20] = "123";
//	printf("%d\n", my_atoi(arr1));
//
//	char arr2[20] = "+123";
//	printf("%d\n", my_atoi(arr2));
//
//	char arr3[20] = "-123";
//	printf("%d\n", my_atoi(arr3));
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fin = fopen("input.c", "w");
//	//fputs("world", fin);
//	////fseek(fin, 0, SEEK_SET); //hello
//	//fseek(fin, 0, SEEK_CUR); ////worldhello
//	////fseek(fin, 0, SEEK_END); //worldhello
//	//fputs("hello", fin);
//
//	fputs("world", fin);
//	fseek(fin, 3, SEEK_CUR); //world   hello
//	fputs("hello", fin);
//
//	fclose(fin);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fout = fopen("test.c", "r");
//	fseek(fout, 0, SEEK_END);  //6145
//	//fseek(fout, 0, SEEK_SET); //0
//	//rewind(fout);
//
//	long int len = ftell(fout);
//	printf("%d\n", len); //6145
//
//	fclose(fout);
//
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include <errno.h>

int main()
{
	FILE* fout = fopen("C:\\Users\\阿琪\\Desktop\\小杨\\头像.png", "rb"); //绝对路径 \会转义
	//FILE* fout = fopen("test.c", "r");
	if (fout == NULL)
	{
		printf("打开文件失败:%s\n", strerror(errno));
		return -1;
	}

	fseek(fout, 0, SEEK_END);
	long int len = ftell(fout);
	printf("%d\n", len); //图片大小138721

	fseek(fout, 0, SEEK_SET);
	char ch = fgetc(fout);
	long int count = 0;
	//while(len--)
	while (ch != EOF || ferror(fout) == 0) //读取文件
	{
		count++;
		//printf("%c", ch);
		ch = fgetc(fout);
	}
	printf("%d\n", count);

	if (ferror(fout))
		printf("End of file reached successfully.");
	else
		printf("End of file was not reached.");

	fclose(fout);

	system("pause");
	return 0;
}