#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	//printf("hello world \n");
//
//	//各数据类型大小
//    printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//
//	system("pause");
//	return 0;
//}

////常量
//enum Sex {
//	MALE,//枚举常量
//	FEMALE,
//	SECRET 
//};
//
//#define MAX 100         //#define的标识符常量
//int main()
//{
//	3.14; //字面常量
//	const float pai = 3.14f; //const 修饰的常量
//	pai = 5.14; //不可修改
//	return 0;
//}

////变量:全局、局部
//int global = 2019; //全局变量 
//int main()
//{
//	int local = 2018; //局部变量
//	int global = 2020; //局部变量
//	printf("global = %d\n", global);
//
//	system("pause");
//	return 0;
//}

int main()
{
	printf("%d\n", strlen("abcdef")); 
	printf("%d\n", strlen("c:\test\328\test.c"));// \32被解析成一个转义字符

	system("pause");
	return 0;
} 