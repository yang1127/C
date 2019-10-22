#include <stdio.h>
#include <stdlib.h>

//struct Student
//{
//	char name[20];
//	short age;
//	float weight;
//};
//
//
//struct Stu
//{
//	int a;
//	char b;
//	double c;
//};
//
//typedef struct Student
//{
//	char name[20];
//	short age;
//	float weight;
//	struct Stu s;
//}Student;
//
//
//int main()
//{
//	//struct Student s = { "小杨", 20, 54.5f };
//	struct Student s = { "小杨", 20, 54.5f ,{100, 'd', 3.14} };
//	printf("%s %d %f - %d %c %lf", s.name, s.age, s.weight, s.s.a, s.s.b, s.s.c);
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

//struct Stu 
//{
//	char name[20]; 
//	int age; 
//};
//
//void print(struct Stu* ps) 
//{
//	printf("name = %s  age = %d\n", (*ps).name, (*ps).age); 
//
//	//使用结构体指针访问指向对象的成员
//	printf("name = %s  age = %d\n",  ps->name, ps->age); 
//} 
//
//int main() 
//{
//	struct Stu s = {"小杨", 20}; 
//	print(&s);//结构体地址传参  
//
//	system("pause");
//	return 0;
//}

////结构体传参
////函数传参的时候，参数是需要压栈的。 如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
////故：结构体传参的时候，要传结构体的地址
//struct S 
//{ 
//	int data[1000];
//	int num; 
//};
//
//struct S s = { {1,2,3,4}, 1000 }; 
//
////结构体传参 
//void print1(struct S s)
//{    
//	printf("%d\n", s.num);
//} 
//
////结构体地址传参 
//void print2(struct S* ps) 
//{  
//	printf("%d\n", ps->num);
//}
//
//int main() {
//	print1(s); //传结构体
//	print2(&s); //传地址    
//
//	system("pause");
//	return 0;
//} 

//计算结构体
//struct S1 
//{ 
//	char c1;
//	int i; 
//	char c2;
//}; 
//
//struct S2
//{ 
//	char c1;  
//	char c2; 
//	int i;
//};
//
//struct S3 
//{    
//	double d;  
//	char c;   
//	int i;
//};
//
//struct S4 
//{  
//	char c1;  
//	struct S3 s3; 
//	double d;
//};
//
//int main()
//{
//
//	printf("%d\n", sizeof(struct S1)); //12
//	printf("%d\n", sizeof(struct S2)); //8
//	printf("%d\n", sizeof(struct S3)); //16
//	printf("%d\n", sizeof(struct S4)); //32
//
//	system("pause");
//	return 0;
//}

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//struct S 
//{ 
//	char a : 3; 
//	char b : 4;
//	char c : 5; 
//	char d : 4; 
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12; 
//	s.c = 3; 
//	s.d = 4;
//
//	printf("%d\n", sizeof(struct A)); //8
//	printf("%d\n", sizeof(struct S)); //3
//
//	system("pause");
//	return 0;
//}

//enum Color//red、green、blue 为常量，放在常量区
//{  
//	red = 1,   
//	green = 2, 
//	blue = 4
//};
//
// int main()
//{
//	printf("%d\n", sizeof(enum Color)); //4 只是整形
//
//	system("pause");
//	return 0;
//}

//联合类型的声明 
//union Un 
//{ 
//	char c;  
//	int i;
//};
//
// int main()
//{
//	//union Un un; //变量定义 
//	//printf("%d\n", sizeof(un)); //4
//
//	//union Un un; //变量定义 
//	//un.c = 10;
//	//printf("%d\n", un.c); //10
//	//printf("%d\n", un.i); //随机值
//
//    //union Un un = { 0 };
//	//un.c = 10; //截断
//	//printf("%d\n", un.c); //10
//	//printf("%d\n", un.i); //10
//
//    //union Un un = { 0 };
//    //un.c = 129; //截断、整形提升
//    //printf("%d\n", un.c); //-127
//    //printf("%d\n", un.i); //129
//
//	system("pause");
//	return 0;
//}

union Un1 
{ 
	char c[5]; 
	int i;
}; 

union Un2
{
	short c[7]; 
	int i; 
}; 

 int main()
{
	printf("%d\n", sizeof(union Un1)); //8
	printf("%d\n", sizeof(union Un2)); //16

	system("pause");
	return 0;
}
