#define	_CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//

//void left_move(char* str, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//
//	{
//		char tmp = *str;
//		int j = 0;
//		while (*(str + j + 1))
//		{
//			*(str + j) = *(str + j + 1);
//			j++;
//		}
//		*(str + j) = tmp;
//	}
//}
//int main()
//{
//	char str[] = "ABCD";
//	int a = 0;
//	printf("�������������ַ�����\n");
//	scanf("%d", &a);
//	printf("%s\n", str);
//	left_move(str, a);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}

//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA

void reserve(char *left, char*right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_reserve(char arr[], int k)
{
	int len = strlen(arr) - 1;
	char *pstart = &arr[0];
	char *pend = arr + len;
	reserve(pstart, pstart + k - 1);
	reserve(pstart + k, pend);
	reserve(pstart, pend);
}
void right_reserve(char arr[], int k)
{
	int len = strlen(arr) - 1;
	char *pstart = &arr[0];
	char *pend = arr + len;
	reserve(pstart, pstart + len - k);
	reserve(pend - k + 1, pend);
	reserve(pstart, pend);
}
int main()
{
	char arr[10] = "AABCD";
	char arr2[10] = "ABCDA";
	char *p = arr;
	int k = 5;
	while (k)
	{
		left_reserve(arr, k);
		if (strcmp(arr, arr2) == 0)
		{
			printf("1\n");
			break;
		}
		right_reserve(p, k);
		if (strcmp(p, arr2) == 0)
		{
			printf("1\n");
			break;
		}
		k--;
	}
	if (0 == k)
	{
		printf("0\n");
	}
	system("pause");
}

//
//AABCD����һ���ַ��õ�DAABC

