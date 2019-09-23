#define _CRT_SECURE_NO_WARNINGS 1
//1.递归和非递归分别实现求第n个斐波那契数。
//递归
//#include<stdio.h>
//#include<stdlib.h>
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fib(n);
//	printf("%d", fib(n));
//	system("pause");
//	return 0;
//}
//非递归
//#include<stdio.h>
//#include<stdlib.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fib(n);
//	printf("%d", fib(n));
//  system("pause");
//  return 0;
//}
//2.编写一个函数实现n^k，使用递归实现
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int f(int n, int k)
//{
//	if (k > 0)
//	{
//		return n*f(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int result = f(n, k);
//	printf("%d",result);
//	system("pause");
//	return 0;
//}
//
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//#include<stdio.h>
//#include<stdlib.h>
//int DigitSum(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		int k = n % 10;
//		return (k + DigitSum(n / 10));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	DigitSum(n);
//	printf("%d", DigitSum(n));
//	system("pause");
//  return 0;
//}
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//
//#include<stdio.h>
//#include<stdlib.h>
//char * reverse_string(char *arr1)
//{
//	int n = 0;
//	char temp;
//	char *arr2;
//	arr2 = arr1;
//	while (*arr1 != 0)
//	{
//		n++;
//		arr1++;
//	}  
//	if (n > 1)
//	{
//		temp = arr2[0];
//		arr2[0] = arr2[n - 1];
//		arr2[n - 1] = '\0';
//		reverse_string(arr2 + 1);
//		arr2[n - 1] = temp;
//	}
//	return arr2;
//}
//
//int main()
//{
//	char arr1[] = "yangzhiqi";
//	//printf("原字符串是：%s\n", arr1);
//	printf("翻转后是：%s\n", reverse_string(arr1));
//	system("pause");
//	return 0;
//}
//5.递归和非递归分别实现strlen
//
//6.递归和非递归分别实现求n的阶乘
//#include<stdio.h>
//#include<stdlib.h>
//int f1(int n)
//{
//    int i = 1;
//	int result = 1;
//    for (i = 1; i <= n; i++)
//    {
//	    result = result * i;
//    }
//	return result;
//}
//int f2(int n)
//{
//    int result = 1;
//	while (n > 1)
//	{
//		result *= n;
//		n -= 1;
//	}
//	return result;
//}
//int main()
//{
//int n = 0;
//scanf("%d", &n);
//f2(n);
//printf("非递归：%d\n", f1(n));
//printf("递归：%d\n", f2(n));
//system("pause");
//return 0;
//}
//7.递归方式实现打印一个整数的每一位
#include<stdio.h>
#include<stdlib.h>

int p(int n)
{	
	printf("%d", n % 10);
	printf(" ");
	if (n < 10)
	{
		return 0;
	}
	return p(n / 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	p(n);
	system("pause");
	return 0;
}