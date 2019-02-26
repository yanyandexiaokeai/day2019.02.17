#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void Swap(int*x, int*y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
//往往需要函数调用之前把数组的长度备好，当做参数传到函数中（便于后期修改代码）
void Bubblesort(int*arr, int size){
	//数组作为函数参数，会隐式转换成指针（指向数组受元素的指针）
	//升序排序
	//每次找到最小的放在起始位置
	int bound = 0;//边界
	//[0,bound):已经排好序的区间
	//[bound,size):待排序区间
	for (; bound < size; bound++){
		//这个循环执行一次之后，就找出了当前待排序区间的最小值，
		for (int cur = size - 1; cur>bound; cur--){
			//cur是后面的元素，cur-1是前面的元素
			//此时需要进行升序排序，如果发现后面的元素比前面的小
			//就将两个数交换
			if (arr[cur] < arr[cur - 1]){
			//交换
				Swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
}
int main(){
	int arr[] = { 9, 5, 2, 7 ,3,6,8,0,1,4};
	Bubblesort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
		printf("%d", arr[i]);
	}
	printf("\n");
   system("pause");
   return 0;
}