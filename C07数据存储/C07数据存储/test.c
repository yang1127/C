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
//		printf("С��\n");  
//	} 
//	else  
//	{  
//		printf("���\n"); 
//	}  
//
//	system("pause");
//	return 0;
//}

//int main() 
//{ 
//	//�ض�
//	char a = -1;
//	signed char b = -1; //�з���
//	unsigned char c = -1; //�޷���
//
//	//�������� char->int
//	//����λ0����0������Ϊ1����1
//	//a����24��1 1(����λ)1111111 �����룩
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
//	//�ضϣ�10000000 <->���룺10000000
//	//����������11111111 11111111 11111111 10000000
//
//	char a = 128; //4294967168
//  unsigned char a = 128; //128�޷���
//	printf("%u\n", a); 
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	// 00000000 00000000 00000000 10000000
//	//�ضϣ�10000000 <->���룺10000000
//	//����������11111111 11111111 11111111 10000000
//
//	//char a = -128; //4294967168
//
//	// 00000000 00000000 00000001 10000001
//	//�ضϣ�10000001 <->���룺01111111
//	//����������00000000 00000000 00000000 01111111
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
//	//i��10000000 00000000 0000000 00010100
//	//���룺11111111 11111111 11111111 11101100
//
//	//j��00000000 00000000 0000000 00001010
//	//���룺00000000 00000000 0000000 00001010
//
//	//+: 11111111 11111111 11111111 11110110
//	//���룺11111111 11111111 11111111 11110101
//	//ԭ�룺10000000 00000000 00000000 00001010
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
//		printf("%u\n", i);//9��1 �ٵ� 1 + ��-1���ٵ�0 + ��-1����������
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
//		//a[0] = -1  ����11111111 11111111 11111111 11111111
//		//a[1] = -2  ����11111111 11111111 11111111 11111110
//		//a[2] = -3  ����11111111 11111111 11111111 11111101
//		// ...
//		//a[126] = -127 ����11111111 11111111 11111111 10000001
//		//a[127] = -128 ����11111111 11111111 11111111 10000000
//		//...
//		//a[254] = -255 ����11111111 11111111 11111111 00000001
//		//a[255] = -256 ����11111111 11111111 11111111 00000000
//	}
//	printf("%d", strlen(a)); //��Ϊ0
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
//	free(p1); //�ͷſռ� -> ϵͳ�ջ�
//	p1 = NULL; //��ֹ���Ұָ��
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int) * 10);
//	//memset(p1, 0, sizeof(int)*10); //��ʼ��Ϊ0
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
//	int* p2 = (int*)realloc(p1, 8); //��
//	printf("%p\n", p2);
//
//	free(p1);
//	free(p2);
//
//	int* p3= (int*)malloc(8);
//	printf("%p\n", p3);
//
//	int* p4 = (int*)realloc(p3, 4); //��
//	printf("%p\n", p3);
//	
//	system("pause");
//	return 0;
//}

//void test()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;//���p��ֵ��NULL���ͻ�������
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
//		*(p + i) = i;//��i��10��ʱ��Խ�����
//	}
//	free(p);
//}

//void test()
//{
//	int a = 10;
//	int *p = &a;
//	free(p); //��
//}
//
//void test()
//{
//	int *p = (int *)malloc(100);
//	p++;
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}
//
////void test()
//{
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
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
//	//GetMemory(str); //��û�д�ֵ��ȥ
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
//	return p; //p���أ����Խ��յ�
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
//	str = NULL; //���str = NULL ����ΪҰָ��
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
