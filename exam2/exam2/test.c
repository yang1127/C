#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//�����������α�����ֵ��������ֵ�����ݽ��н���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp;
//
//	tmp = a;
//	a = b;
//	b = tmp;
//
//	printf("a = %d b = %d ", a, b);
//	printf("\n");
//
//	system("pause");
//	return 0;
//}

void swap(int* x, int* y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a = %d b = %d ", a, b);
	system("pause");
	return 0;
}

//����������ʱ����������������������

//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	//����һ����λ���
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	
//	//���������ӷ�ԭ��
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//���������˷�ԭ��
//	//a = a * b;
//	//b = a / b;
//	//a = a / b;
//	//�ӷ��ͳ˷�ԭ���б׶ˣ������ջ��������
//
//	printf("a = %d b = %d ", a, b);
//	system("pause");
//	return 0;
//}

//��10 �����������ֵ
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int arr[10];
//
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i]; 
//		}
//	}
//	printf("%d ", max);
//
//	system("pause");
//	return 0;
//}

//�����������Ӵ�С���
int main()
{
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d", a, b, c);

	system("pause");
	return 0;
}

