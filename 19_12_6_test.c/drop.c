#include<stdio.h>
#include<windows.h>

void drop(float height,int n){
	float s = 0.0;
	for (int i = n; i > 0;i--){
		s += height;
		height /= 2;
	}
	printf("һ���ƶ��ľ���Ϊ��%f \n��%d�εķ����߶�Ϊ:%f\n", s, n, height);
}

int main(){

	drop(10,10);
	printf("\n");
	system("pause");
	return 0;
}