﻿#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4; 
	/*i = a++ && ++b && d++; */
	i = a++||++b||d++;

	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
	system("pause");
	return 0; 
} 
