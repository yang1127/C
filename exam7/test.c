#define _CRT_SECURE_NO_WARNINGS 1
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//�ݹ�
//#include<stdio.h>
//#include<stdlib.h>
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fib(n);
//	printf("%d", fib(n));
//	system("pause");
//	return 0;
//}
//�ǵݹ�
//#include<stdio.h>
//#include<stdlib.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fib(n);
//	printf("%d", fib(n));
//  system("pause");
//  return 0;
//}
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int f(int n, int k)
//{
//	if (k > 0)
//	{
//		return n*f(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int result = f(n, k);
//	printf("%d",result);
//	system("pause");
//	return 0;
//}
//
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//#include<stdio.h>
//#include<stdlib.h>
//int DigitSum(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		int k = n % 10;
//		return (k + DigitSum(n / 10));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	DigitSum(n);
//	printf("%d", DigitSum(n));
//	system("pause");
//  return 0;
//}
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//#include<stdio.h>
//#include<stdlib.h>
//char * reverse_string(char *arr1)
//{
//	int n = 0;
//	char temp;
//	char *arr2;
//	arr2 = arr1;
//	while (*arr1 != 0)
//	{
//		n++;
//		arr1++;
//	}  
//	if (n > 1)
//	{
//		temp = arr2[0];
//		arr2[0] = arr2[n - 1];
//		arr2[n - 1] = '\0';
//		reverse_string(arr2 + 1);
//		arr2[n - 1] = temp;
//	}
//	return arr2;
//}
//
//int main()
//{
//	char arr1[] = "yangzhiqi";
//	//printf("ԭ�ַ����ǣ�%s\n", arr1);
//	printf("��ת���ǣ�%s\n", reverse_string(arr1));
//	system("pause");
//	return 0;
//}
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//#include<stdio.h>
//#include<stdlib.h>
//int f1(int n)
//{
//    int i = 1;
//	int result = 1;
//    for (i = 1; i <= n; i++)
//    {
//	    result = result * i;
//    }
//	return result;
//}
//int f2(int n)
//{
//    int result = 1;
//	while (n > 1)
//	{
//		result *= n;
//		n -= 1;
//	}
//	return result;
//}
//int main()
//{
//int n = 0;
//scanf("%d", &n);
//f2(n);
//printf("�ǵݹ飺%d\n", f1(n));
//printf("�ݹ飺%d\n", f2(n));
//system("pause");
//return 0;
//}
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
#include<stdio.h>
#include<stdlib.h>

int p(int n)
{	
	printf("%d", n % 10);
	printf(" ");
	if (n < 10)
	{
		return 0;
	}
	return p(n / 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	p(n);
	system("pause");
	return 0;
}