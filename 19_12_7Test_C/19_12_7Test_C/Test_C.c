#include<stdio.h>
//1.��ѡ��һ��
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
	k *= i + j;//+=��-=��*=��/=�������㣬�ȼ����ұ߽���ټ�����ߵ�����ֵ
	printf("%d\n", k);
}
#endif
