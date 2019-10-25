#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	const char* str1 = "abcdef";
//	printf("%d ", strlen(str1));//6 //strlen 遇到\0 停止
//	printf("%d ", sizeof(str1));//8
//	printf("\n");
//
//	const char str2[] = "hello";
//	printf("%d ", strlen(str2));//5
//	printf("%d ", sizeof(str2));//6
//	printf("\n");
//
//	const char str3[] = "abcde\0fg\0";
//	printf("%d ", strlen(str3));//5 a b c d e
//	printf("%d ", sizeof(str3));//10 a b c d e \ 0 f g \0
//	printf("\n");
//
//	const char str4[] = "abcde\\0fg\\\0";
//	printf("%d ", strlen(str4));//10 a b c d e \\ 0 f g \\ 
//	printf("%d ", sizeof(str4));//12 a b c d e \\ 0 f g \\ \0
//	printf("\n");
//
//	const char str5[] = "abcde\\0fg\t\n\r";
//	printf("%d ", strlen(str5));//12 a b c d e \\ 0 f g \t \n \r
//	printf("%d ", sizeof(str5));//13 a b c d e \\ 0 f g \t \n \r
//	printf("\n");
//
//	system("pause");
//	return 0;
//}

////计数器方式
//size_t strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0') //*str
//	{
//		count++;
//		str++;
//	}
//	return count;
//}////不能创建临时变量计数器
//size_t strlen(const char* str)//{//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + strlen(str + 1);//}//size_t strlen(char* str)//{//	char* p = str;//	while (*p != '\0')//	{//		p++;//	}//	return p - str;//}int main(){
	const char* s1 = "abcdef";	printf("%zd ", strlen(s1));//6	system("pause");	return 0;}