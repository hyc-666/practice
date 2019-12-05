#include<stdio.h>
#include<windows.h>

void printarray(int *arr, int len);
//动态排序
//先写一个冒泡排序
void sort(int arr[], int len){
	for (int i = 0; i < len; i++){
		for (int j = 0; j < len - i-1; j++){
			if (arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

//动态排序
void dynamic_sort(){
	int arr[100];
	int len = 0;
	int input = 0;
	while (len < 100){
		system("cls");
		printf("输入数据：");
		scanf_s("%d", &input);
		if (input == 0){
			break;
		}
		arr[len] = input;
		printf("当前数组：\n");
		len++;
		printarray(arr, len);
		sort(arr, len);
		printf("当前排序：\n");
		printarray(arr, len);
		system("pause");
		//len++;
	}
}

//打印输出数组
void printarray(int *arr, int len){
	while (len){
		printf("%d ", *arr);
		len--;
		arr++;
	}
	printf("\n");
}
int main(){
	int array[] = { 45, 12, -66, 9, 37, 99 ,-9,-78};
	int size = sizeof(array) / sizeof(array[0]);
	printarray(array,size);
	sort(array, size);
	printarray(array, size);


	dynamic_sort();

	system("pause");
	return 0;
}