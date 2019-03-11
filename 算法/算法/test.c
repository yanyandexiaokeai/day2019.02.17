//设计一个算法, 将一维数组A(下标从1开始)中的元素循环右移k位，
//要求只用一个元素大小的附加存储空间。给出算法的时间复杂度。
#define _CRT_SECURE_NO_WARNINGS
#define n 10
#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k, i, j, m;
	int tmp = 0;
	printf("请输入循环右移几位:\n");
	scanf("%d", &k);
	for (j = 0; j<k; j++){
		tmp = arr[n - 1];
		for (i = n - 1; i > 1; i--){
			arr[i] = arr[i - 1];
		}
			arr[1] = tmp;
	}
	for (m = 1; m < n; m++){
		printf("%d", arr[m]);
	}
	system("pause");
	return 0;
}
