#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//for:例题：输出1-100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//switch:改良版星期输出
//int main() 
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//
//	default:  
//		printf("输无效数据入");
//		break; 
//	}
//	system("pause");
//	return 0; 
//}


//题： 
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)  //应为k == 0作判断条件
//		k++;
//
//	return 0;
//}

//1. 计算n的阶乘
//int main()
//{
//	int i = 0;
//	int tmp = 1;
//	int n = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		tmp = tmp * i;
//	}
//
//	printf("%d " ,tmp);
//	system("pause");
//	return 0;
//}

//2. 计算 1!+ 2!+ 3!+ …… + 10!
//int main()
//{
//	int i = 0;
//	int tmp = 1;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		tmp = tmp * i;
//		sum += tmp;
//	}
//
//	printf("%d ", sum);
//	system("pause");
//	return 0;
//}

//3. 在一个有序数组中查找具体的某个数字n。编写int binsearch(int x, int v[], int n); 功能：在v[0] <= v[1] <= v[2] <= …. <= v[n - 1]的数组中查找x
//二分查找！！
//int binsearch(int arr[], int k, int left, int right)
//{ 
//	while (left <= right) // <=
//	{
//		int mid = left + (right - left) / 2; //防止栈溢出  亦可用 mid = (left + right) >> 1  左移
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid; //找到了
//		}
//	}
//	return -1; //没有找到
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1; //求数组长度
//	int k = 7; //要找的数为7
//
//	int ret = binsearch(arr, k, left, right);
//	if (ret == -1)
//	{
//		printf("找不到了");
//	}
//	else
//	{
//		printf("找到了");
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}


//4. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录 成，如果三次均输入错误，则退出程序
//int main() 
//{ 
//	char psw[10] = ""; //初始化
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; ++i) //只允许三次
//	{
//		printf("please input:");
//		scanf("%s", psw);
//		if (strcmp(psw, "123456") == 0) //输入的密码与本身密码进行字符串比较
//			break;
//
//		printf("输入错误，请重新输入：\n");
//	}
//
//	if (i == 3)
//		printf("exit\n");
//	else
//		printf("log in\n"); 
//
//	system("pause");
//	return 0;
//}

////猜数字游戏
//void menu() 
//{
//	printf("**********************************\n");
//	printf("*************1.play***************\n");
//	printf("*************0.exit***************\n"); 
//	printf("**********************************\n");
//} 
//
//void game() 
//{
//	int random_num = rand()%100+1; //rand（）生成0-32767的随机数
//	int input = 0;  
//	while(1)
//	{     
//		printf("请输入猜的数字0-99>:");    
//		scanf("%d", &input); 
//		if(input > random_num) 
//		{        
//			printf("猜大了\n"); 
//		}      
//		else if(input < random_num) 
//		{           
//			printf("猜小了\n");
//		}      
//		else     
//		{           
//			printf("恭喜你，猜对了\n");     
//			break;   
//		}   
//	}
//} 
//int main() 
//{    
//	int input = 0;  
//	srand((unsigned)time(NULL)); //设置起点
//	do  
//	{  
//		menu(); 
//		printf("请选择>:"); 
//        scanf("%d", &input); 
//       switch (input) 
//	   { 
//	   case 1: 
//           game();   
//	   	   break;       
//	   case 0:  
//           break;    
//	   default:        
//		   printf("选择错误,请重新输入!\n");
//		   break;
//	   }  
//	}
//	while (input);  
//	return 0; 
//}


int main(void)
{
	int n = 1;
	while (n != 0) {
		printf("选择你要进行的运算：\n1.加法；2.减法；3.乘法；4；除法；0.退出\n");
		scanf("%d", &n);
		if (n == 0)
		{
			break;
		}
		switch (n)
		{
		case 1:
		{

			int a;
			double e = 0;
			printf("请输入相加数字的个数\n");
			scanf("%d", &a);
			for (int i = 1; i <= a; i++)
			{
				printf("请输入第%d个数:\n", i);
				double m;
				scanf("%lf", &m);
				e += m;
			}
			printf("和为%f\n", e);

		}
		break;
		case 2:
		{
			int b;
			int f;
			printf("请输入相减数字的个数\n");
			scanf("%d", &b);
			for (int i = 1; i <= b; i++)
			{
				int o;
				printf("请输入第%d个数:\n", i);
				scanf("%d", &o);
				if (i > 1)
				{
					f -= o;
					continue;
				}
				f = o;
			}
			printf("差为%d\n", f);
			break;
		}
		case 3:
		{
			int c;
			int g = 1;
			printf("请输入相乘数字的个数\n");
			scanf("%d", &c);
			for (int i = 1; i <= c; i++)
			{
				int p;
				printf("请输入第%d个数:\n", i);
				scanf("%d", &p);
				g *= p;
			}
			printf("乘为%d\n", g);
		}
		break;
		case 4:
		{
			int d;
			int h = 1;
			printf("请输入相除数字的个数\n");
			scanf("%d", &d);
			for (int i = 1; i <= d; i++)
			{
				int q;
				printf("请输入第%d个数:\n", i);
				scanf("%df", &q);
				if (i > 1)
				{
					h /= q;
					continue;
				}
				h = q;
			}
			printf("除为%d\n", h);
		}
		break;
		default:
			break;
		}
	}
	return 0;
}