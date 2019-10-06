#define _CRT_SECURE_NO_WARNINGS 1
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//

//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (value >> i & 1)
//		{
//			ret = (value >> i & 1) << (31 - i);
//		}
//	}
//	return ret;
//}

//int main()
//{
//	int a = 25;
//	int ret = 0;
//	ret = reverse_bit(a);
//	printf("%u\n", ret);   
//	system("pause");
//	return 0;
//}

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//#include<stdio.h>
//#include<stdlib.h>
//
////int average(int a, int b)
////{
////	return a + ((b - a) >> 1);
////}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数>");
//	scanf("%d %d", &a, &b);
//	int avg = a - (a - b) / 2;
//	printf("平均数为>");
//	printf("%d", avg);
//	system("pause");
//	return 0;
//}

//3.编程实现：
//一组数据中只有一个数字出现了一次,其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）异或运算
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[] = { 1,3,3,1,4,6,4,5,5 };
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("这个数字为>%d\n", arr[0]);
//	system("pause");
//	return 0;
//}

//4.
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//	student a am i
//	i ma a tneduts
//	i am a student

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strLen(char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}

	return count;
}

void reverse_str(char* str, char* end)
{
	while (str < end)
	{
		char tmp = *str;
		*str = *end;
		*end = tmp;
		str++;
		end--;
	}
}

void reverse(char* str)
{
	//整体逆转
	int len = strLen(str);
	reverse_str(str, str + len - 1);
	//局部逆转
	while (*str)
	{
		char* start = str;
		//获取单词的结束
		while (*str != ' ' && *str != '\0')
		{
			str++;
		}
		//单词逆转
		reverse_str(start, str - 1);
		//移动到下一个单词的起始位置
		while (*str == ' ')
		{
			++str;
		}
	}
}

int main()
{
	char str[100];
	gets(str);
	printf("%s\n", str);
	reverse(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}