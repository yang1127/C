#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//int main()
//{  
//	int i = 1;
//	char *p = (char*)&i;
//
//	if(*p == 1)   
//	{      
//		printf("小端\n");  
//	} 
//	else  
//	{  
//		printf("大端\n"); 
//	}  
//
//	system("pause");
//	return 0;
//}

//int main() 
//{ 
//	//截断
//	char a = -1;
//	signed char b = -1; //有符号
//	unsigned char c = -1; //无符号
//
//	//整形提升 char->int
//	//符号位0、补0；符号为1、补1
//	//a：补24个1 1(符号位)1111111 （补码）
//	//a: 11111111 11111111 11111111 11111111
//	//b: 11111111 11111111 11111111 11111111
//	//c: 00000000 00000000 00000000 11111111
//
//	printf("a=%d,b=%d,c=%d", a, b, c); //-1 -1 255
//
//	system("pause");
//	return 0;
//}

//int main() 
//{ 
//	// 00000000 00000000 00000000 10000000
//	//截断：10000000 <->补码：10000000
//	//整形提升：11111111 11111111 11111111 10000000
//
//	char a = 128; //4294967168
//  unsigned char a = 128; //128无符号
//	printf("%u\n", a); 
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	// 00000000 00000000 00000000 10000000
//	//截断：10000000 <->补码：10000000
//	//整形提升：11111111 11111111 11111111 10000000
//
//	//char a = -128; //4294967168
//
//	// 00000000 00000000 00000001 10000001
//	//截断：10000001 <->补码：01111111
//	//整形提升：00000000 00000000 00000000 01111111
//	
//	char a = -129;  //127
//	printf("%u\n", a);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned  int j = 10;
//	//i：10000000 00000000 0000000 00010100
//	//补码：11111111 11111111 11111111 11101100
//
//	//j：00000000 00000000 0000000 00001010
//	//补码：00000000 00000000 0000000 00001010
//
//	//+: 11111111 11111111 11111111 11110110
//	//反码：11111111 11111111 11111111 11110101
//	//原码：10000000 00000000 00000000 00001010
//
//	printf("%d\n", i + j); //-10
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	unsigned int i; 
//	for (i = 9; i >= 0; i--) 
//	{
//		printf("%u\n", i);//9到1 再到 1 + （-1）再到0 + （-1）。。。。
//	}
//
//	system("pause");
//	return 0;
//}

//int main() 
//{ 
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{ 
//		a[i] = -1 - i; 
//		//a[0] = -1  补：11111111 11111111 11111111 11111111
//		//a[1] = -2  补：11111111 11111111 11111111 11111110
//		//a[2] = -3  补：11111111 11111111 11111111 11111101
//		// ...
//		//a[126] = -127 补：11111111 11111111 11111111 10000001
//		//a[127] = -128 补：11111111 11111111 11111111 10000000
//		//...
//		//a[254] = -255 补：11111111 11111111 11111111 00000001
//		//a[255] = -256 补：11111111 11111111 11111111 00000000
//	}
//	printf("%d", strlen(a)); //找为0
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	unsigned char i = 0; 
//    for (i = 0; i <= 255; i++) 
//	{ 
//		printf("hello world\n"); 
//	}
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	*p1 = 100;
//
//	free(p1); //释放空间 -> 系统收回
//	p1 = NULL; //防止变成野指针
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int) * 10);
//	//memset(p1, 0, sizeof(int)*10); //初始化为0
//
//	int* p2 = (int*)calloc(10, sizeof(int)); //calloc = malloc + memset
//
//	free(p1);
//	free(p2);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int* p1 =(int*)malloc(4);
//	printf("%p\n", p1);
//
//	int* p2 = (int*)realloc(p1, 8); //扩
//	printf("%p\n", p2);
//
//	free(p1);
//	free(p2);
//
//	int* p3= (int*)malloc(8);
//	printf("%p\n", p3);
//
//	int* p4 = (int*)realloc(p3, 4); //缩
//	printf("%p\n", p3);
//	
//	system("pause");
//	return 0;
//}

//void test()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}

//void test()
//{
//	int i = 0;
//	int *p = (int *)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//}

//void test()
//{
//	int a = 10;
//	int *p = &a;
//	free(p); //×
//}
//
//void test()
//{
//	int *p = (int *)malloc(100);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//}
//
////void test()
//{
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);//重复释放
//}
//
//void test()
//{
//	int *p = (int *)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//
//int main()
//{
//	test();
//	while (1);
//}


//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	//GetMemory(str); //×没有传值过去
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p; //p返回，可以接收到
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}


//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}

//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL; //添加str = NULL 否则为野指针
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}
