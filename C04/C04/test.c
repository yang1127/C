#include <stdio.h> 
#include <stdlib.h>

//int main() 
//{   
//	int arr[10] = {0}; //数组的不完全初始化   	  
//	int sz = sizeof(arr)/sizeof(arr[0]);  //计算数组的元素个数  
//
//	int i = 0;  //对数组内容赋值,数组是使用下标来访问的，下标从0开始
//
//	for(i=0; i<10; i++)   
//	{      
//		arr[i] = i;
//	}  
//	 
//	for(i=0; i<10; ++i)  //输出数组的内容 
//	{      
//		printf("%d ", arr[i]); 
//	}  
//
//	system("pause");
//	return 0;
//}

//int main() 
//{ 
//	int arr[10] = { 0 }; 
//	int i = 0;   
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{ 
//		printf("&arr[%d] = %p\n", i, &arr[i]); //取地址
//	}  
//	system("pause");
//	return 0;
//}

//二维数组
 //int main()
 //{ 
	// int arr[3][4] = {0}; 
	// int i = 0;   
	// for(i=0; i<3; i++)  
	// {      
	//	 int j = 0;  
	//	 for(j=0; j<4; j++)   
	//	 {      
	//		 arr[i][j] = i*4+j; 
	//	 } 

	// }   
	// 
	// for (i = 0; i < 3; i++) 
	// { 
	//	 int j = 0; 
	//	 for (j = 0; j < 4; j++)
	//	 { 
	//		 printf("%d ", arr[i][j]); 
	//	 }
	//	 printf("\n");
	// }   
	// system("pause");
	// return 0;
 //}

//编写代码实现：求一个整数存储在内存中的二进制中1的个数
//方法1 
int main()
{  
	int num  = 10;
	int count=  0;//计数  
	while(num) 
	{       
		if(num%2 == 1)
			count++;    
		num = num/2;  
	}   
	printf("二进制中1的个数 = %d\n", count);
	return 0; 
}


//方法2
int main() 
{ 
	int num = -1; 
	int i = 0;  
	int count = 0;//计数   
	for(i=0; i<32; i++)  
	{   
		if( ((num>>i)&1) == 1 )   
			count++;      
	}   

	printf("二进制中1的个数 = %d\n",count); 
	return 0;
}

//方法3
int main() 
{   
	int num = -1; 
	int i = 0;   
	int count = 0;//计数   
	while(num) 
	{    
		count++; 
		num = num&(num-1);  
	}   
	printf("二进制中1的个数 = %d\n",count); 
	return 0; 
} 
