#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//找出两个整数中的大值
// int get_max(int x, int y) 
// {  
//	 return (x>y)?(x):(y); 
// }
//
//int main() 
//{ 
//	int num1 = 10;   
//	int num2 = 20;  
//	int max = get_max(num1, num2);  
//	printf("max = %d\n", max); 
//
//	system("pause");
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容
//void Swap1(int x, int y)   //交换不了，未把值给与
//{ 
//	int tmp = x; 
//	x = y; 
//	y = tmp;
//}
//
//void Swap2(int *px, int *py) 
//{ 
//	int tmp = *px;   
//	*px = *py; 
//	*py = tmp; 
//} 
//
//int main()
//{ 
//	int num1 = 1;  
//	int num2 = 2; 
//	Swap1(num1, num2); 
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);  
//
//	Swap2(&num1, &num2);  
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);  
//
//	system("pause");
//	return 0;
//}

//例如： 输入：1234，输出 1 2 3 4
//思路：先/，再%打印
//void print(int n) 
//{ 
//	if (n > 9) 
//	{ 
//		print(n / 10);
//	}   
//	printf("%d ", n % 10);
//}
//
//int main() 
//{
//	int num = 1234; 
//	print(num); 
//
//	system("pause");
//	return 0;
//}

//不允许创建临时变量，求字符串的长度
//递归：
//int Strlen(const char*str) 
//{
//	if (*str == '\0')  
//		return 0;  
//	else 
//		return 1 + Strlen(str + 1);
//}
//
//int main()
//{ 
//	char *p = "abcdef";  
//	int len = Strlen(p);  
//	printf("%d\n", len); 
//
//	system("pause");
//	return 0;
//}

//非递归:
//int Strlen(char*str) 
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;  //计数器每次加1
//		str++;    //字符每往后移动一位
//	}
//	return count;
//}
//
//int main()
//{ 
//	int len = Strlen("abcdef");  
//	printf("%d\n", len); 
//
//	system("pause");
//	return 0;
//}

//求n的阶乘（递归）
//int factorial(int n)
//{ 
//	if (n <= 1) 
//		return 1; 
//	else  
//		return n * factorial(n - 1); 
//}
//
//int main()
//{ 
//	int i = 0;
//	scanf("%d", &i);
//	int num = factorial(i);
//	printf("%d", num);
//	printf("\n");
//
//	system("pause");
//	return 0;
//}

//斐波那契数列：1 1 2 3 5 8 ...
//int fib(int n) 
//{
//	if (n <= 2)
//		return 1;
//	else   
//		return fib(n - 1) + fib(n - 2); 
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int sum = fib(i);
//	printf("%d", sum);
//	printf("\n");
//
//	system("pause");
//	return 0;
//}

//优化：fib调用时重复计算
//int fib(int n)
//{   
//	int count = 0; 
//	if(n == 3)  
//		count++; 
//	if (n <= 2) 
//		return 1;
//	else     
//		return fib(n - 1) + fib(n - 2); 
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int sum = fib(i);
//	printf("%d", sum);
//	printf("\n");
//
//	system("pause");
//	return 0;
//}
// 

//非递归
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	int sum = fib(i);
	printf("%d", sum);
	printf("\n");

	system("pause");
	return 0;
}