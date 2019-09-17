#include<stdio.h>
#include<stdlib.h>

//1. 打印100-200之间的素数
//思路：素数：在大于1的自然数中，除了1和它本身以外不再有其他因数
//若该数为n，则将该数进行%运算，运算从2到（n-1）次，除了1和本身外，%上其他数进行计算

//int main()
//{
//	int i, j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i%j == 0)
//				break; //如果能整除就跳出该次循环，避免多余运算
//		}
//
//		if (j == i) //该条件代表没有整除。
//			printf("%d ", i);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//2. 输出乘法口诀表
//使用两层循环，乘数1 * 乘数2 = 积，外层循环做乘数2，内层循环做乘数1
//乘数2 <= 乘数1

//int main()
//{
//	int a, b, c;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			c = b * a;
//			printf("%d*%d =%d  ", b, a, c);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//3. 判断1000年---- 2000年之间的闰年
//闰年：每四年为一次且每百年不是，每四百年一次
//使用循坏判断

int main()
{
	int year;
	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			printf("%d ", year);
		}
	}

	system("pause");
	return 0;
}