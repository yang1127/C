#define _CRT_SECURE_NO_WARNINGS 1
//1.дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//int count_one_bits(unsigned int val)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		if (val % 2 == 1)
//		{
//			count++;
//		}
//		val = val / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int val = 0;
//	printf("������һ����>");
//	scanf("%d", &val);
//	int ret = 0;
//	ret = count_one_bits(val);
//	printf("��������1�ĸ�����%d", ret);
//	system("pause");
//	return 0;
//}
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//
//#include<stdio.h>
//#include<stdlib.h>
//void get_two(int val)
//{
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	int i = 0;
//	for (i = 0; i < 16; i++)
//	{
//		if ((val & 1) == 1)
//			arr1[i] = 1;
//		val >>= 1;
//		if ((val & 1) == 1)
//			arr2[i] = 1;
//		val >>= 1;
//	}
//	printf("ż������\n");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	printf("��������\n");
//	for (i = 15; i >= 0; i--)
//	{
//
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//}
//
//void print_binary_bit(int val)
//{
//	//��ӡż������, �����λ��ӡ
//	for (int i = 31; i > 0; i -= 2)
//	{
//		printf("%d ", (val >> i) & 1);
//	}
//	printf("\n");
//	//��ӡ����λ�������λ��ӡ
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (val >> i) & 1);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int val = 0;
//	scanf("������һ����>%d", &val);
//	get_two(val);
//	print_binary_bit(val);
//	system("pause");
//	return 0;
//}
//3. ���һ��������ÿһλ��
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void prt(int i)
//{
//	if (i > 9)
//	{
//		prt(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//
//int main()
//{
//	int i = 0;
//	printf("������һ������");
//	scanf("%d",&i);
//	prt(i);
//	system("pause");
//	return 0;
//}

//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 1999;
	int b = 2299;
	int count = 0;
	int ret = a ^ b;
	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}