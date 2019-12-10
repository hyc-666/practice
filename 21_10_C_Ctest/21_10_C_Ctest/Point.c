//1. 写一个函数打印arr数组的内容，不使用数组下标，使用指针。
#if 0
#include <stdio.h>

void printArr(int *arr,int len){
	while (len){
		printf("%d ", *arr);
		arr++;
		len--;
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//在这里完成代码
	int len = sizeof(arr) / sizeof(int);
	printArr(arr,len);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a = %d b = %d c = %d\n:", a, b, c);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
	int a = 1;
	int ret = (++i) + (++i) + (++i);
	printf("ret = %d\n", ret);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int i;
int main()
{
	i--;
	if (i > sizeof(i))
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}
#endif
#include <stdio.h>
#if 0
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	short *p = (short*)arr;
	int i = 0;
	for (i = 0; i<4; i++)
	{
		*(p + i) = 0;
	}
	for (i = 0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
#endif
#include <stdio.h>
int main()
{
	int a = 0x11223344;
	char *pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}