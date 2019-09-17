#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//给定两个整形变量的值，将两个值的内容进行交换
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp;
//
//	tmp = a;
//	a = b;
//	b = tmp;
//
//	printf("a = %d b = %d ", a, b);
//	printf("\n");
//
//	system("pause");
//	return 0;
//}

void swap(int* x, int* y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a = %d b = %d ", a, b);
	system("pause");
	return 0;
}

//不允许创建临时变量，交换两个数的内容

//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	//方法一：按位异或
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	
//	//方法二：加法原理
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//方法三：乘法原理
//	//a = a * b;
//	//b = a / b;
//	//a = a / b;
//	//加法和乘法原理，有弊端，会出现栈溢出的情况
//
//	printf("a = %d b = %d ", a, b);
//	system("pause");
//	return 0;
//}

//求10 个整数中最大值
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int arr[10];
//
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i]; 
//		}
//	}
//	printf("%d ", max);
//
//	system("pause");
//	return 0;
//}

//将三个数按从大到小输出
int main()
{
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d", a, b, c);

	system("pause");
	return 0;
}

