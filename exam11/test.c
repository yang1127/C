//1.
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//

//#include<stdio.h>
//#include<stdlib.h>
//
//void predicted()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						/*if (((b == 2 && a != 3) || (b != 2 && a == 3))
//							&& ((b == 2 && e != 4) || (b != 2 && e == 4))
//							&& ((c == 1 && d != 2) || (c != 1 && d == 2))
//							&& ((c == 5 && d != 3) || (c != 5 && d == 3))
//							&& ((e == 4 && a != 1) || (e != 4 && a == 1))
//							)*/
//						if (((b == 2) + (a == 3) == 1)//�߼��ж�
//							&&((b == 2) + (e == 4) == 1)
//							&&((c == 1) + (d == 2) == 1)
//							&&((c == 5) + (d == 3) == 1)
//							&&((e == 4) + (a == 1) == 1)
//							)
//						{
//							/*if (a != b && a != c && a != d && a != e
//								&& b != c && b != d && b != e
//								&& c != d && c != e
//								&& d != e
//								)*/
//							if(a * b * c * d * e == 120)//��ͬ���ĳ˻�Ϊһ����ֵ ���⣺1*2*3*4*5
//								printf("A=%d, B=%d, C=%d,  D=%d, E=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	predicted();
//	system("pause");
//	return 0;
//}


//2.
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//
//��A��B��C, D��˳��Ϊ��ż���
//A˵�������ҡ�  killer != 1
//B˵����C��     killer == 3
//C˵����D��     killer == 4
//D˵��C�ں�˵   killer != 4

//#include<stdio.h>
//#include<stdlib.h>
 
//void predicted()
//{
//	int killer = 0;
//	for (killer = 1; killer <= 4; killer++)
//	{
//		if ((killer != 1) + (killer == 3) + (killer == 4) + (killer != 4) == 3)
//		{
//			printf("�����ǣ�%c\n", killer + 'A' - 1);//���A��B��C��D����һ����killer��1��ʼ����A����ASCIIΪ65����Ϊ����A��-1		
//		}
//	}
//}

//void predicted2()//ֱ�����ַ��жϣ�����ת��
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("�����ǣ�%c\n", killer);	
//		}
//	}
//}
// 
//int main()
//{
//	/*predicted();*/
//	predicted2();
//	system("pause");
//	return 0;
//}

//3.����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1

#include<stdio.h>
#include<stdlib.h>
#define N 10

int main()
{
	int a[N][N];
	for (int i = 0; i < N; i++)
	{
		a[i][0] = a[i][i] = 1;
	}
	for (int i = 2; i < N; i++)
	{
		for (int j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}