#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void Swap(int*x, int*y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
//������Ҫ��������֮ǰ������ĳ��ȱ��ã������������������У����ں����޸Ĵ��룩
void Bubblesort(int*arr, int size){
	//������Ϊ��������������ʽת����ָ�루ָ��������Ԫ�ص�ָ�룩
	//��������
	//ÿ���ҵ���С�ķ�����ʼλ��
	int bound = 0;//�߽�
	//[0,bound):�Ѿ��ź��������
	//[bound,size):����������
	for (; bound < size; bound++){
		//���ѭ��ִ��һ��֮�󣬾��ҳ��˵�ǰ�������������Сֵ��
		for (int cur = size - 1; cur>bound; cur--){
			//cur�Ǻ����Ԫ�أ�cur-1��ǰ���Ԫ��
			//��ʱ��Ҫ������������������ֺ����Ԫ�ر�ǰ���С
			//�ͽ�����������
			if (arr[cur] < arr[cur - 1]){
			//����
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