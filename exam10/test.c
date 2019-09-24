#define _CRT_SECURE_NO_WARNINGS 1
//1.写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//int count_one_bits(unsigned int val)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		if (val % 2 == 1)
//		{
//			count++;
//		}
//		val = val / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int val = 0;
//	printf("请输入一个数>");
//	scanf("%d", &val);
//	int ret = 0;
//	ret = count_one_bits(val);
//	printf("二进制中1的个数：%d", ret);
//	system("pause");
//	return 0;
//}
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//
//#include<stdio.h>
//#include<stdlib.h>
//void get_two(int val)
//{
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	int i = 0;
//	for (i = 0; i < 16; i++)
//	{
//		if ((val & 1) == 1)
//			arr1[i] = 1;
//		val >>= 1;
//		if ((val & 1) == 1)
//			arr2[i] = 1;
//		val >>= 1;
//	}
//	printf("偶数序列\n");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	printf("奇数序列\n");
//	for (i = 15; i >= 0; i--)
//	{
//
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//}
//
//void print_binary_bit(int val)
//{
//	//打印偶数序列, 从最高位打印
//	for (int i = 31; i > 0; i -= 2)
//	{
//		printf("%d ", (val >> i) & 1);
//	}
//	printf("\n");
//	//打印奇数位，从最高位打印
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (val >> i) & 1);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int val = 0;
//	scanf("请输入一个数>%d", &val);
//	get_two(val);
//	print_binary_bit(val);
//	system("pause");
//	return 0;
//}
//3. 输出一个整数的每一位。
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void prt(int i)
//{
//	if (i > 9)
//	{
//		prt(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//
//int main()
//{
//	int i = 0;
//	printf("请输入一个数：");
//	scanf("%d",&i);
//	prt(i);
//	system("pause");
//	return 0;
//}

//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 1999;
	int b = 2299;
	int count = 0;
	int ret = a ^ b;
	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}