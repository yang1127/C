#define	_CRT_SECURE_NO_WARNINGS 1
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int  CSing(int *arr, int len)
//{
//	int i = 0;
//	int k = arr[0];
//	while (i < len - 1)
//	{
//		k = k ^ *(arr + i + 1);
//		i++;
//	}
//	return k;
//}
//
//void Part(int *arr, int m, int len)
//{
//	int i = 0;
//	int k = 0;
//	int pos = 0;
//	int x = 0;
//	int y = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((m >> i) & 1))
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (1 == ((*(arr + i) >> pos) & 1))
//		{
//			x ^= *(arr + i);
//		}
//		else
//		{
//			y ^= *(arr + i);
//		}
//	}
//	printf("x = %d,y = %d\n", x, y);
//}

//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	int money = 20;
//	int bottle = 0;
//	int toto = 0;
//	int remider = 0;
//	while (money)
//	{
//		if (bottle % 2 == 1)
//		{
//			bottle = money + remider;
//		}
//		else if (bottle % 2 == 0)
//		{
//			bottle = money;
//		}
//		toto += money;
//		money = bottle / 2;
//		if (bottle % 2 == 1)
//		{
//			remider = bottle % 2;
//		}
//	}
//	printf("%d\n", toto);
//	system("pause");
//	return 0;
//}

//3.模拟实现strcpy

//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//char* my_strcpy( char* dst, char* src)
//{
//	    assert(dst && src);
//		char* ret = dst;
//		while (*src)
//		{
//           *dst++ = *src++;
//	    }
//		*dst = '\0';
//		return ret;
//}
//int main()
//{
//	char a1[] = "Hello";
//	char a2[] = "World";
//	char* ret=my_strcpy(a1, a2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}

//4.模拟实现strcat
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
char* my_strcat(char *dest, const char *src)
{
	assert(dest && src);
	char *p1 = dest;
	while(*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	return p1;
}
int main()
{
	char a[100] = "hello";
	char b[100]= "world";
	char *ret=my_strcat(a, b);
	printf("%s\n", ret);
	system("pause");
	return 0;
 }