#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main()
{
	int i = 1;
	int j;
	j = i++;

	printf("%d %d", i, j); // 2 1
	system("pause");
	
	return 0;
}


////求最小公倍数

//int main()
//{
//	int a, b, max, min;
//	scanf("%d %d", &a, &b);
//	if (a >= b) //先找出最大数、最小数
//	{
//		max = a;
//		min = b;
//	}
//	else
//	{
//		max = b;
//		min = a;
//	}
//
//	for (int i = max; i > 0; i++) //从最大数开始遍历
//	{
//		if (i % max == 0 && i % min == 0) //i % max、min同时为0时，即为公倍数
//		{
//			printf("%d ", i);
//			break;  //找到第一个最小公倍数就结束
//		}
//	}
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	string s;
//	stack<string> st;
//	while (cin >> s)
//	{
//		st.push(s);
//		if (*(s.rbegin()) == '.')
//			break;
//	}
//
//	cout << st.top();
//	st.pop();
//	while (!st.empty())
//	{
//		cout << " " << st.top();
//		st.pop();
//	}
//
//	system("pause");
//
//	return 0;
//}
