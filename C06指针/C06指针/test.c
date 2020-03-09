#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <windows.h>

//int main()
//{
//	int a = 10;  //在内存中开辟一块空间
//	int *p = &a; //对变量a取出它的地址，可以使用&操作符
//				 //将a的地址存放在p变量中，p就是一个指针变量
//
//	printf("%p", p); //p取地址
//	system("pause");
//	return 0;
//}

//指针 +- 整数
//int main() 
//{   
//	int n = 10;  
//	char *pc = (char*)&n;  
//	int *pi = &n; 
//
//	printf("%p\n", &n);
//	printf("%p\n", pc);    
//	printf("%p\n", pc+1);  
//	printf("%p\n", pi);    
//	printf("%p\n", pi+1);  
//
//	system("pause");
//	return 0; 
//} 

//指针解引用
//int main()
//{
//	int n = 0x11223344;
//	char *pc = (char *)&n;
//	char *pi = &n;
//
//	*pc = 0x55; 
//	*pi = 0;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//
//	system("pause");
//	return 0;
//}

//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 }; 
//	int *p = arr; //指针存放数组首元素的地址 
//	int sz = sizeof(arr)/sizeof(arr[0]); //计算数组大小
//	for(int i=0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p <=> p+%d = %p\n", i, &arr[i], i, p+i); 
//	}
//
//	system("pause");
//	return 0;
//} 

//int main() 
//{ 
//	char ch = 'w'; 
//	char *pc = &ch; 
//	*pc = 'w'; 
//
//	system("pause");
//	return 0; 
//}

//int main() 
//{
//	char* p = "hello yang"; //本质：把字符串hello yang中的首字符的地址放到p中
//	printf("%s\n", p);
//
//	system("pause");
//	return 0;
//} 

//int main() 
//{
//	char str1[] = "hello world."; 
//	char str2[] = "hello world.";
//	char *str3 = "hello world."; 
//	char *str4 = "hello world.";
//
//	if (str1 == str2)   
//		printf("str1 and str2 are same\n");
//	else       
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)    
//		printf("str3 and str4 are same\n");
//	else   
//		printf("str3 and str4 are not same\n");
//
//	system("pause");
//	return 0;
//}

//int main()
//{    
//	int arr[10] = { 0 };   //初始化
//	printf("arr = %p\n", arr);   //数组名
//	printf("&arr= %p\n", &arr);  //&数组名
//
//	printf("arr+1 = %p\n", arr + 1); 
//	printf("&arr+1= %p\n", &arr + 1);   
//
//	system("pause");
//	return 0; 
//}

//void print_arr1(int arr[3][5], int row, int col) //打印二维数组
//{
//	int i = 0;
//	for (i = 0; i < row; i++) 
//	{
//		for (int j = 0; j < col; j++)
//		{ 
//			printf("%d ", arr[i][j]);
//		} 
//		printf("\n");
//	}
//} 
//
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 3, 5);  //数组名arr，表示首元素的地址，但二维数组的首元素是二维数组的第一行
//							这里传递的arr，其实相当于第一行的地址，是一维数组的地址，可以数组指针来接收 
//	print_arr2(arr, 3, 5); 
//
//	system("pause");
//	return 0;
//}

//void print(int *p, int sz) 
//{ 
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{ 
//		printf("%d\n", *(p + i)); 
//	} 
//} 
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(p, sz);	//一级指针p,传给函数 
//
//	system("pause");
//	return 0;
//}


//void test(int** ptr)
//{ 
//	printf("num = %d\n", **ptr);
//} 
//
//int main()
//{
//	int n = 10;  
//	int*p = &n;
//	int **pp = &p;
//	test(pp); 
//	test(&p);
//
//	system("pause");
//	return 0;
//}


//int add(int a, int b) //加
//{
//	return a + b;
//}
//
//int sub(int a, int b) //减
//{
//	return a - b;
//}
//
//int mul(int a, int b) //乘
//{
//	return a * b;
//}
//
//int div(int a, int b) //除
//{
//	return a / b;
//}
//
//int main()
//{
//	int x, y;
//	int num = 1;
//	int tmp = 0;
//	int (*p[5])(int x, int y) = { 0, add, sub, mul, div}; //转移表，注意div函数调用库函数不能同时使用stdio、stdlib两个库函数
//	while (num)
//	{
//		printf("***********************\n"); //菜单
//		printf("** 1.add   2.sub     **\n");
//		printf("** 3.mul   4.div     **\n");
//		printf("***********************\n");
//		printf("请输入要执行的数字：");
//		scanf("%d", &num);
//		if (num >= 1 && num <= 4)
//		{
//			printf("请输入要进行操作的两个数x,y：");
//			scanf("%d %d", &x, &y);
//			tmp = (*p[num])(x, y);
//		}
//		else
//		{
//			printf("输入的数字有误！");
//			return ;
//		}
//		printf("tmp = %d\n", tmp);
//		Sleep(5000); //windows 使用Sleep，参数为毫秒,表示让程序睡眠/暂停一段时间
//		system("cls"); //清屏
//	}
//	system("pause");
//	return 0;
//}

//int cmp(const void *p1, const void *p2)
//{
//	return (*(int *)p1 > *(int *)p2);
//}
//
//int main()
//{
//	int arr[] = { 1, 7, 5, 6, 4, 3, 10, 8, 2, 9 };
//	int i = 0;
//
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 0 }; 
//	
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0])); 
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", sizeof(*(a[0] + 1))); 
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(*(a + 1))); 
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[3]));
//	
//	system("pause");
//	return 0;
//}

//int main() 
//{ 
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1)); //2 5
//
//	system("pause");
//	return 0;
//}

//结构体的大小是20个字节
//struct Test 
//{ 
//	int Num;
//	char *pcName; 
//	short sDate;   
//	char cha[2]; 
//	short sBa[4];
//}*p;
//
//假设p 的值为0x100000
// int main() 
// {   
//	 printf("%p\n", p + 0x1); //0x1000014  加20
//	 printf("%p\n", (unsigned long)p + 0x1);  //0x100001
//	 printf("%p\n", (unsigned int*)p + 0x1);  //0x100004
//	 
//	 system("pause");
//	 return 0;
// }


//4
//#include <stdio.h>
//int main(int argc, char * argv[])
//{
//	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };  //1
//	int a[3][2] = { 0, 1, 2, 3, 4, 5 }; //0
//	int *p;
//	p = a[0];
//	printf("%d", p[0]); //1
//}


////5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); //FFFFFFFC,-4
//	system("pause");
//	return 0;
//}

//
////6
//
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10.5
//	system("pause");
//	return 0;
//}
//
//
////7
//#include <stdio.h>
//int main()
//{
//	char *a[] = { "work","at","alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);// at
//	system("pause");
//	return 0;
//}
//
//
////8
int main()
{
	char *c[] = { "ENTER","NEW","POINT","FIRST" };
	char**cp[] = { c + 3,c + 2,c + 1,c };
	char***cpp = cp;
	printf("%s\n", **++cpp); //POINT
	printf("%s\n", *--*++cpp + 3); //ER
	printf("%s\n", *cpp[-2] + 3); //ST
	printf("%s\n", cpp[-1][-1] + 1); //EW
	system("pause");
	return 0;
}