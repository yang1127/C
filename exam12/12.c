#define _CRT_SECURE_NO_WARNINGS 1
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//

//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (value >> i & 1)
//		{
//			ret = (value >> i & 1) << (31 - i);
//		}
//	}
//	return ret;
//}

//int main()
//{
//	int a = 25;
//	int ret = 0;
//	ret = reverse_bit(a);
//	printf("%u\n", ret);   
//	system("pause");
//	return 0;
//}

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//#include<stdio.h>
//#include<stdlib.h>
//
////int average(int a, int b)
////{
////	return a + ((b - a) >> 1);
////}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������>");
//	scanf("%d %d", &a, &b);
//	int avg = a - (a - b) / 2;
//	printf("ƽ����Ϊ>");
//	printf("%d", avg);
//	system("pause");
//	return 0;
//}

//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ��,�����������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩�������
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[] = { 1,3,3,1,4,6,4,5,5 };
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("�������Ϊ>%d\n", arr[0]);
//	system("pause");
//	return 0;
//}

//4.
//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//	student a am i
//	i ma a tneduts
//	i am a student

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strLen(char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}

	return count;
}

void reverse_str(char* str, char* end)
{
	while (str < end)
	{
		char tmp = *str;
		*str = *end;
		*end = tmp;
		str++;
		end--;
	}
}

void reverse(char* str)
{
	//������ת
	int len = strLen(str);
	reverse_str(str, str + len - 1);
	//�ֲ���ת
	while (*str)
	{
		char* start = str;
		//��ȡ���ʵĽ���
		while (*str != ' ' && *str != '\0')
		{
			str++;
		}
		//������ת
		reverse_str(start, str - 1);
		//�ƶ�����һ�����ʵ���ʼλ��
		while (*str == ' ')
		{
			++str;
		}
	}
}

int main()
{
	char str[100];
	gets(str);
	printf("%s\n", str);
	reverse(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}