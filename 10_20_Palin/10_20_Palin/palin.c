#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<assert.h>
#pragma warning(disable:4996)
//回文判断
//初始化字符串，其实这一步可以完全不要
#if 0
void init(char *array){
	for (int i = 0; i < 100; i++){
		array[i] = 0;
	}
}
#endif
//先计算字符串的长度
//其实可以调用库函数
//自己实现也可以
int getStringSize(char *array){
	int count = 0;
	/*for (int i = 0; i < 100; i++){
		if (array[i] != 0){
			count++;
		}
		这种方法比较笨，需要遍历整个字符串
		但是我们知道字符串后面都有一个‘\0’
		那就不用整个的遍历整个字符串了
	}*/
	while (*array){
		count++;
		array++;
	}
	//也可以直接调用库函数，库函数也跟上面这么写的差不多
	//但是更简单
	//自己练习一下
	return count;
}
int isPalin(char *array, int size){//判断是否回文串
	//int count = getStringSize(*array);
	//如果直接把字符串长度的参数带进来的话就不用再重新计算了
	//如果没有带进来则需要重新计算，不过模块之间的耦合性还是要尽量低一点
	//不然如果在这里计算字符串长度的话可能会改变指针array的指向，而后面还需要用到，
	//需要提前把array保存或者复制
	//有时候容易忘
	assert(array); //如果需要对字符串检查
	assert(size);//必须要求输入有校字符串，这可能对程序不利
	/*
	int left = 0;
	int right = size-1;
	while (left <= right){
		if (array[left] != array[right]){
			return 0;
		}
		left++;
		right--;
	}*/
	//也可以用指针完成
	char *left = array;
	char *right = left + size - 1;
	while (left <= right){
		if (*left == *right){
			left++;
			right--;
		}
		else{
			return 0;
		}
	}
	return 1;
}
int main(){
	char string1[100];
	//init(string1);
	//printf("%s\n", string1);
	printf("Please Enter your String:");
	gets(string1);
	//printf("\n%s\n", string1);
	//int count1 = getStringSize(string1);
	if (isPalin(string1, getStringSize(string1))){
		printf("yes!\n");
	}
	else{
		printf("no!\n");
	}
	system("pause");
	return 0;

}
