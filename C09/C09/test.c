#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//strlen
//int main()
//{
//	const char* str1 = "abcdef";
//	printf("%d ", strlen(str1));//6 //strlen 遇到\0 停止
//	printf("%d ", sizeof(str1));// 4 / 8  char*
//	printf("\n");
//
//	const char str2[] = "hello";
//	printf("%d ", strlen(str2));//5
//	printf("%d ", sizeof(str2));//6 数组的大小 h e l l o \0
//	printf("\n");
//
//	const char str3[] = "abcde\0fg\0";
//	printf("%d ", strlen(str3));//5 a b c d e
//	printf("%d ", sizeof(str3));//10 a b c d e \0 f g \0 \0
//	printf("\n");
//
//	const char str4[] = "abcde\\0fg\\\0";
//	printf("%d ", strlen(str4));//10 a b c d e \\ 0 f g \\ 
//	printf("%d ", sizeof(str4));//12 a b c d e \\ 0 f g \\ \0 \0
//	printf("\n");
//
//	const char str5[] = "abcde\\0fg\t\n\r";
//	printf("%d ", strlen(str5));//12 a b c d e \\ 0 f g \t \n \r
//	printf("%d ", sizeof(str5));//13 a b c d e \\ 0 f g \t \n \r \0
//	printf("\n");
//
//	system("pause");
//	return 0;
//}

////计数器方式
//size_t strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0') //遍历
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////不能创建临时变量计数器
//size_t strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + strlen(str + 1); //递归
//}
//
////指针—指针方式
//size_t strlen(char* str)
//{
//	char* p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//}
//
//int main()
//{
//	const char* s1 = "abcdef";
//	printf("%d ", strlen(s1));//6
//
//	system("pause");
//	return 0;
//}

//strcpy 
//int main()
//{
//	char dst[20];
//	strcpy(dst, "hello xiaoyang");
//
//	printf("%s\n", dst); // hello xiaoyang
//	system("pause");
//	return 0;
//}

//
//char* my_strcpy(char* dst, const char* src)
//{
//	assert(src && dst); //判断是否为空
//
//	char* ret = dst;
//	while (*dst++ = *src++);
//
//	return ret;
//}
//
//int main()
//{
//	char dst[20];
//	my_strcpy(dst, "hello xiaoyang");
//
//	printf("%s\n", dst); // hello xiaoyang
//
//	system("pause");
//	return 0;
//}

//strcat

////字符串拼接
//char *my_strcat(char *dst, const char*src)
//{
//	char *ret = dst;
//	assert(dst && src);
//
//	//while (*dst++); //++优先级高于* ,已经走到 \0 后面的位置再解引用，无法找到\0的位置
//	
//	while (*dst++);
//	--dst;
//
//	//while (*dst)  //走到最后\0开始拼接
//	//{
//	//	dst++;
//	//}
//	//
//	while (*dst++ = *src++); //src++ 赋值给 dst++
//
//	return ret;
//}
//
//int main()
//{
//	char a1[10] = "hello";
//	my_strcat(a1, " xiaoyang");
//
//	printf("%s", a1); //hello xiaoyang
//	system("pause");
//	return 0;
//}

//
////strcmp:ASCII比较大小
//int strcmp(const char* str1, const char* str2)
//{
//
//	assert(str1 && str2);
//
//	while (*str1 && *str2)
//	{
//		if (*str1 > *str2)
//			return 1;
//		else if (*str1 < *str2)
//			return -1;
//		else
//		{
//			++str1;
//			++str2;
//		}
//	}
//
//	if (*str1 != '\0') //str1长于str2, str1没有走完，str2走完
//		return 1;
//	else if (*str2 != '\0') //str2长于str1, str2没有走完，str1走完
//		return -1;
//	else
//		return 0;
//
//}
//
//int main()
//{
//	char* p1 = "abcd";
//	char* p2 = "aacd";
//	printf("%d\n", strcmp(p1, p2)); //1 p1 > p2
//
//	char* p3 = "abcd";
//	char* p4 = "abcd";
//	printf("%d\n", strcmp(p3, p4)); //0 p3 = p4
//
//	char* p5 = "abcd";
//	char* p6 = "bbcd";
//	printf("%d\n", strcmp(p5, p6)); //-1 p5 < p6
//
//	system("pause");
//	return 0;
//}



//strncpy
//char* my_strncpy(char* dst, const char* src, size_t num)
//{
//	assert(dst && src);
//
//	char* ret = dst;
//
//	while (num-- && *src)  //num-- 走了num次；--num 走了num+1次 // 看要复制的是否越界
//	{
//		*dst++ = *src++;
//	}
//
//	*dst = '\0'; //结束将\0给与
//
//	return ret;
//}
//
//int main()
//{
//	char dst[20];
//	char* src = "xiaoyang";
//	my_strncpy(dst, src, 5);
//
//	printf("%s\n", dst);//xiaoy
//	system("pause");
//	return 0;
//}


////strncat
//char* my_strncat(char* dst, const char* src, size_t num)
//{
//	assert(src && dst);
//
//	char* ret = dst; //要返回起始值
//
//	while (*dst)
//	{
//		dst++;
//	}
//
//	//for (int i = 0; i < num; i++)
//	//{
//	//	*dst++ = *src++;
//	//}
//
//	while (num-- && *src) //num-- 走了num次；--num 走了num+1次 // 看要追加的是否越界
//	{
//		*dst++ = *src++;
//	}
//	*dst = '\0'; //最后将\0给与
//
//	return ret;
//}
//
//int main()
//{
//	char dst[20] = "hello";
//	char* src = "xiaoyang";
//
//	my_strncat(dst, src, 4);
//	printf("%s\n", dst);//helloxiao
//
//	system("pause");
//	return 0;
//}


//strncmp
//int strncmp(const char* str1, const char* str2, size_t num)
//{
//
//	assert(str1 && str2);
//
//	while (num-- && (*str1 && *str2)) 
//	{
//		if (*str1 > *str2)
//			return 1;
//		else if (*str1 < *str2)
//			return -1;
//		else if (num == 0)
//			return 0;
//		else
//		{
//			++str1;
//			++str2;
//		}
//	}
//
//	if (*str1 != '\0') //str1长于str2, str1没有走完，str2走完
//		return 1;
//	else if (*str2 != '\0') //str2长于str1, str2没有走完，str1走完
//		return -1;
//	else
//		return 0;
//
//}
//
//int main()
//{
//	char* p1 = "abcd";
//	char* p2 = "aacd";
//	printf("%d\n", strncmp(p1, p2, 2)); //1 
//
//	char* p3 = "abcd";
//	char* p4 = "abce";
//	printf("%d\n", strncmp(p3, p4, 3)); //0 
//
//	char* p5 = "abcd";
//	char* p6 = "bbcd";
//	printf("%d\n", strncmp(p5, p6, 4)); //-1 
//
//	char* p7 = "abcdef";
//	char* p8 = "abcde";
//	printf("%d\n", strncmp(p7, p8, 6)); //1
//
//	char* p9 = "abcd";
//	char* p10 = "abcde";
//	printf("%d\n", strncmp(p9, p10, 5)); //-1 
//
//	system("pause");
//	return 0;
//}

//strstr
//char* strstr(const char* str1, const char* str2)
//{
//	//若一个字符没有匹配上，则返回到这个字符的下一个字符重新str2匹配
//	assert(str1 && str2);
//	while (*str1)
//	{
//		const char* match = str1; //匹配串
//		const char* sub = str2; //子串
//		while (*match == *sub && *sub)  //子串不为空
//		{
//			++match;
//			++sub;
//		}
//
//		if (*sub == '\0')//当子串走完时即到‘\0’位置，则匹配成功
//			return str1;
//		else
//			str1++; //返回下一个位置str2重新匹配
//	}
//	return NULL;
//}
//
//int main()
//{
//	char str[] = "This is a simplo simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//
//	printf("%p\n", str);
//	printf("%p\n", pch);
//	printf("%s\n", pch); //simple string, 从simple所指位置往后匹配
//
//	system("pause");
//	return 0;
//}


//strtok
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char * pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	system("pause");
//	return 0;
//}
//
////Splitting string "- This, a sample string." into tokens :
////This
////a
////sample
////string
//
//#include <stdio.h>
//int main()
//{
//	char *p = "yyy123456789@qq.com";
//
//	char arr[30];
//	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
//
//	char* sep = strtok(arr, "@.");
//	while (sep != NULL)
//	{
//		printf("%s\n", sep);
//		sep = strtok(NULL, "@.");
//	}
//
//	system("pause");
//	return 0;
//}
//
////yyy123456789
////qq
////com


//strerror
//#include <errno.h>
//
//int main()
//{
//	FILE * pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	    //Error opening file unexist.ent: No such file or directory
//
//	system("pause");
//	return 0;
//}

//memcpy
//void* memcpy(void *dst, const void *src, size_t size)
//{
//	assert(dst && src);
//
//	char* dst_ = (char*)dst; //强转为char* 无论什么类型，均一个一个拷贝过去
//	char* src_ = (const char*)src;
//
//
//	for (size_t i = 0; i < size; ++i)
//	{
//		dst_[i] = src_[i];
//
//	}
//
//	return dst;
//}
//
//int main()
//{
//	int a1[10];
//	int a2[10] = { 1, 2, 3, 4, 5 };
//	memcpy(a1, a2, sizeof(a2) * sizeof(int)); //memcpy:传字节数
//
//	char str1[20];
//	char str2[] = "hello xiaoyang";
//	//memcpy(str1, str2, 20);
//	memcpy(str1, str2, sizeof(str2) * sizeof(char));
//
//	double b1[10];
//	double b2[] = { 1.1, 1.2, 1.3 };
//	memcpy(b1, b2, sizeof(b2) * sizeof(double));
//	 
//	system("pause");
//	return 0;
//}

//memmove
void* memmove(void* dst, const void* src, size_t size)
{
	assert(dst && src);
	char* dst_ = dst;
	const char* src_ = src;

	if (src_ < dst_ && dst_ < src_ + size) //从后往前拷贝
	{
		for (int i = size - 1; i >= 0; --i)
		{
			dst_[i] = src_[i];		
		}
	}
	else //从前往后
	{
		for (size_t i = size - 1; i < size; ++i)
		{
			dst_[i] = src_[i];
		}
	}

	return dst;
}

int main()
{
	int a1[10] = { 1, 2, 3, 4, 5 };
	memmove(a1 + 3, a1, 5 * sizeof(int)); 

	system("pause");
	return 0;
}
