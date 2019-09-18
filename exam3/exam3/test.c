#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//将三个数按从大到小输出
//思路：三个数,两两进行比较，将最大的数给a,故a与b、c进行比较，依次再确定第二b、第三c

//void swap(int* x, int* y)
//{
//	int z = *x;
//	*x = *y;
//	*y = z;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a, b, c, t;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d", a, b, c);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a, b, c, t;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d", a, b, c);
//
//	system("pause");
//	return 0;
//}

//两个数的最大公约数
//（1）简单方法:先将两个数比较大小，保证被除数大，除数小；被除数、除数同时%（被除数--），若为0，则为最大的公约数
//int main()
//{
//	int a, b, temp, i;
//	scanf("%d %d", &a, &b);
//
//	if (a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//
//	for (i = a; i >= 1; i--)
//		if (a%i == 0 && b%i == 0)
//			break;
//
//	printf("%d\n", i);
//
//	system("pause");
//	return 0;
//}

//（1）辗转相除法：用较大数除以较小数，再用出现的余数（第一余数）去除除数，再用出现的余数（第二余数）去除第一余数，如此反复，直到最后余数是0为止
//例如：计算10与25的最大公约数
// 25/10=2余5 
// 10/5=2余0  即最大公约数为5 

//（1.1)辗转相除法—递归
//int gcd(int a, int b)
//{
//	if (a % b == 0)
//		return b;
//
//	return gcd(b, a%b);
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d",&a, &b);
//	gcd(a, b);
//
//	printf("%d ", gcd(a, b));
//	system("pause");
//	return 0;
//}

//（1.2）辗转相除法—非递归
//int gcd(int a, int b)
//{
//	int c = a % b;
//	while (c != 0)
//	{
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	return b;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	gcd(a, b);
//
//	printf("%d ", gcd(a, b));
//	system("pause");
//	return 0;
//}

//(3)思路：第一步：任意给定两个正整数；判断它们是否都是偶数。若是，则用2约简；若不是则执行第二步。
//第二步：以较大的数减较小的数，接着把所得的差与较小的数比较，并以大数减小数。继续这个操作，直到所得的减数和差相等为止。
//则第一步中约掉的若干个2与第二步中等数的乘积就是所求的最大公约数。

//例如：
/*用更相减损术求98与63的最大公约数。
由于63不是偶数，把98和63以大数减小数，并辗转相减：
98 - 63 = 35
63 - 35 = 28
35 - 28 = 7
28 - 7 = 21
21 - 7 = 14
14 - 7 = 7 所以，98和63的最大公约数等于7。*/

//#include <math.h>
//
//int gcd(int a, int b)
//{
//	int val = a - b;
//	while (val != b)
//	{
//		if (b > val)
//		{
//			a = b;
//			b = val;
//		}
//		else
//		{
//			a = val;
//		}
//		val = a - b;
//	}
//	return val;
//}

//int main()
//{
//	int m, n, ret, temp, count = 0;
//	scanf("%d %d", &m, &n);
//
//	if (m == n)
//	{
//		printf("%d", m);
//		return 0;
//	}
//
//	if (m < n)
//	{
//		temp = m;
//		m = n;
//		n = temp;
//	}
//
//	while (m % 2 == 0 && n % 2 == 0)
//	{
//		count++;
//		m /= 2;
//		n /= 2;
//	}
//
//	ret = gcd(m, n);
//	printf("%d", ret*((int)pow(2, count)));
//
//	system("pause");
//	return 0;
//}


//将数组A中的内容和数组B中的内容进行交换（数组一样大）
//int main()
//{
//	int i = 0;
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 6, 7, 8, 9, 10};
//	int arr3[] = { 0 };
//
//	for (int i = 0; i < 5; i++)
//	{
//		arr3[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = arr3[i];
//	}
//
//    printf("交换后数组arr1:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//
//	printf("\n", arr1[i]);
//
//	printf("交换后数组arr2:");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//
//	system("pause");
//	return 0;
//}


//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值
//思路：设置一个A，来区分+1，-1，对应的数：奇数为A（+1），偶数为-A（-1）再乘上1.0/i

//int main()
//{
//	int i = 0;
//	double sum = 0; 
//	int A = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + A * 1.0 / i;  //1.0设置，该题结果为小数
//		A = -A;                   //执行完上一步，转换为-1，即+1，-1，+1，-1，+1，-1切换，直到循环结束
//
//	}
//
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少次数字9
//思路：设置个计数器，累计每次出现9的次数
//9:09、19、29、39、49、59、69、79、89、90、91、92、93、94、95、96、97、98（(i % 10 == 9) || (i / 10 == 9）即可算出9的次数）
//99（用上式只能得出一次9，需要再count加一次）
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 10 == 9) || (i / 10 == 9))
		{
			count++;
		}
	}
	printf("%d", count + 1);
	system("pause");
	return 0;

}

