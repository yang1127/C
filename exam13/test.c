#define _CRT_SECURE_NO_WARNINGS 1
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void judge(int a[], int sz)
//{
//	int start = 0;
//	int end = sz - 1;
//	while (start < end)
//	{
//		while (a[start] % 2 != 0)//从头找第一个偶数
//		{
//            ++start;
//		}
//		while (a[end] % 2 != 1)//从尾找第一个奇数
//		{
//            --end;
//		}	
//		if (start < end)//交换第一个偶数和奇数
//		{
//			a[start] = a[start] ^ a[end];
//			a[end] = a[start] ^ a[end];
//			a[start] = a[start] ^ a[end];
//		}
//	}
//}
//
//int main()
//{
//	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	judge(a, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	system("pause");
//	return 0;
//}
//2.
//杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

#include<stdio.h>
#include<stdlib.h>
#define N 3

 int find(int a[][N], int row, int col, int key)
{
	int x = row - 1;
	int y = 0;
	while ((x >= 0) && (y < col))
	{
		if (key == a[x][y])
			return 1;
		else if (key > a[x][y])
			++y;
		else
			--x;
	}
	return 0;
}

int main()
{
	int a[N][N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int key;
	printf("输入要查找的数>");
	scanf("%d\n", &key);
	if (find(a, N, N, key))
	{
        printf("find ! %d ", key);
	}	
	else
	{
        printf("not find!");
	}
	system("pause");
	return 0;
}