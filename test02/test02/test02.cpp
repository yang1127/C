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


////����С������

//int main()
//{
//	int a, b, max, min;
//	scanf("%d %d", &a, &b);
//	if (a >= b) //���ҳ����������С��
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
//	for (int i = max; i > 0; i++) //���������ʼ����
//	{
//		if (i % max == 0 && i % min == 0) //i % max��minͬʱΪ0ʱ����Ϊ������
//		{
//			printf("%d ", i);
//			break;  //�ҵ���һ����С�������ͽ���
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
