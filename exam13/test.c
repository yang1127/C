#define _CRT_SECURE_NO_WARNINGS 1
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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
//		while (a[start] % 2 != 0)//��ͷ�ҵ�һ��ż��
//		{
//            ++start;
//		}
//		while (a[end] % 2 != 1)//��β�ҵ�һ������
//		{
//            --end;
//		}	
//		if (start < end)//������һ��ż��������
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
//���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
	printf("����Ҫ���ҵ���>");
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