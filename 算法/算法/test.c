//���һ���㷨, ��һά����A(�±��1��ʼ)�е�Ԫ��ѭ������kλ��
//Ҫ��ֻ��һ��Ԫ�ش�С�ĸ��Ӵ洢�ռ䡣�����㷨��ʱ�临�Ӷȡ�
#define _CRT_SECURE_NO_WARNINGS
#define n 10
#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k, i, j, m;
	int tmp = 0;
	printf("������ѭ�����Ƽ�λ:\n");
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
