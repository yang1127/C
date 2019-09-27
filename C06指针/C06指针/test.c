#include <stdio.h>
#include <stdlib.h>

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

void print_arr1(int arr[3][5], int row, int col) //打印二维数组
{
	int i = 0;
	for (i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++)
		{ 
			printf("%d ", arr[i][j]);
		} 
		printf("\n");
	}
} 

void print_arr2(int(*arr)[5], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
	print_arr1(arr, 3, 5);  //数组名arr，表示首元素的地址，但二维数组的首元素是二维数组的第一行
							//这里传递的arr，其实相当于第一行的地址，是一维数组的地址，可以数组指针来接收 
	print_arr2(arr, 3, 5); 

	system("pause");
	return 0;
}
