#include<stdio.h>
//1.单选第一题
#if 0
int cnt = 0;
int fib(int n){
	cnt++;
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	else
		return fib(n - 1) + fib(n - 2);
}
void main()
{
	fib(8);
	printf("%d", cnt);
}
#endif
//4.
#if 0
void main(){
	int i = 10;
	int j = 20;
	int k = 3;
	k *= i + j;//+=、-=、*=、/=等最后计算，先计算右边结果再计算左边的最终值
	printf("%d\n", k);
}
#endif
