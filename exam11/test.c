//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
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
//						if (((b == 2) + (a == 3) == 1)//逻辑判断
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
//							if(a * b * c * d * e == 120)//不同数的乘积为一个定值 此题：1*2*3*4*5
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
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//
//以A，B，C, D的顺序为编号即：
//A说：不是我。  killer != 1
//B说：是C。     killer == 3
//C说：是D。     killer == 4
//D说：C在胡说   killer != 4

//#include<stdio.h>
//#include<stdlib.h>
 
//void predicted()
//{
//	int killer = 0;
//	for (killer = 1; killer <= 4; killer++)
//	{
//		if ((killer != 1) + (killer == 3) + (killer == 4) + (killer != 4) == 3)
//		{
//			printf("凶手是：%c\n", killer + 'A' - 1);//输出A，B，C，D其中一个，killer从1开始，‘A’的ASCII为65，即为：‘A’-1		
//		}
//	}
//}

//void predicted2()//直接以字符判断，无再转换
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("凶手是：%c\n", killer);	
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

//3.在屏幕上打印杨辉三角。
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