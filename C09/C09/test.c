#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//strlen
//int main()
//{
//	const char* str1 = "abcdef";
//	printf("%d ", strlen(str1));//6 //strlen 遇到\0 停止
//	printf("%d ", sizeof(str1));// 4 / 8  char*
//	printf("\n");
//
//	const char str2[] = "hello";
//	printf("%d ", strlen(str2));//5
//	printf("%d ", sizeof(str2));//6 数组的大小 h e l l o \0
//	printf("\n");
//
//	const char str3[] = "abcde\0fg\0";
//	printf("%d ", strlen(str3));//5 a b c d e
//	printf("%d ", sizeof(str3));//10 a b c d e \0 f g \0 \0
//	printf("\n");
//
//	const char str4[] = "abcde\\0fg\\\0";
//	printf("%d ", strlen(str4));//10 a b c d e \\ 0 f g \\ 
//	printf("%d ", sizeof(str4));//12 a b c d e \\ 0 f g \\ \0 \0
//	printf("\n");
//
//	const char str5[] = "abcde\\0fg\t\n\r";
//	printf("%d ", strlen(str5));//12 a b c d e \\ 0 f g \t \n \r
//	printf("%d ", sizeof(str5));//13 a b c d e \\ 0 f g \t \n \r \0
//	printf("\n");
//
//	system("pause");
//	return 0;
//}

////计数器方式
//size_t strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0') //遍历
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////不能创建临时变量计数器
//size_t strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + strlen(str + 1); //递归
//}
//
////指针—指针方式
//size_t strlen(char* str)
//{
//	char* p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//}
//
//int main()
//{
//	const char* s1 = "abcdef";
//	printf("%d ", strlen(s1));//6
//
//	system("pause");
//	return 0;
//}

//strcpy 
//int main()
//{
//	char dst[20];
//	strcpy(dst, "hello xiaoyang");
//
//	printf("%s\n", dst); // hello xiaoyang
//	system("pause");
//	return 0;
//}

//
//char* my_strcpy(char* dst, const char* src)
//{
//	assert(src && dst); //判断是否越界
//
//	char* ret = dst;
//	while (*dst++ = *src++);
//
//	return ret;
//}
//
//int main()
//{
//	char dst[20];
//	my_strcpy(dst, "hello xiaoyang");
//
//	printf("%s\n", dst); // hello xiaoyang
//
//	system("pause");
//	return 0;
//}

//strcat
