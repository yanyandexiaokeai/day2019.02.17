//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void mul(int x){
//	int  i = 0;
//	int  j = 0;
//	for (i = 1; i <= x; i++){
//		for (j = 1; j <= i; j++){
//			printf(" %d*%d=%2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int x = 0;
//	printf("������һ������");
//	scanf("%d", &x);
//	mul(x);
//   system("pause");
//   return 0;
//}
//ʹ�ú���ʵ���������Ľ�����
//#include<stdio.h>
//#include<stdlib.h>
//void swap1(int x, int y){
//	int tmp = 0;
//	tmp = x;
//	y = x;
//	y = tmp;
//}
//��c�����У��β���ʵ�ε�һ�ݸ�����������
//�����Ҫ�ú����ڲ��ܹ�Ӱ�쵽�����ⲿ�ı�������Ҫ����ָ��ķ�ʽ�����Ρ�
//��ָ������ã������ڴ��еķ���ţ��ҵ���Ӧ�����е�������ɶ��
//void swap2(int *px, int *py){
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main(){
//	int a = 1;
//	int b = 2;
//	swap1(a, b);
//	printf("swap1::a=%d b=%d\n", a, b);
//	swap2(&a, &b);
//	printf("swap2::a=%d b=%d\n",a,b);
//	system("pause");
//    return 0;
//}
//ʵ��һ�������ж�year�ǲ������ꡣ
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void year(int i){
//	if (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0)){
//		printf("������\n");
//	}else{
//		printf("��������\n");
//	}
//}
//int main(){
//	int x = 0;
//	printf("������һ����ݣ�");
//	scanf("%d", &x);
//	year(x);
//   system("pause");
//   return 0;
//}
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void init(int arr[], int len){//��ʼ������
//	printf("��ʼ������,������ʮ����\n");
//	for (int i = 0; i < len; i++){
//		int a = 0;
//		scanf_s("%d", &a);
//		arr[i] = a;
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void empty(int arr[], int len){
//	printf("�������������");
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int len){
//	printf("���ú������");
//	int temp = 0;
//	for (int i = 0; i <= len / 2; i++){
//		temp = arr[i];
//		arr[i] = arr[len - 1 - i];
//		arr[len - 1 - i] = temp;
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main(){
//	int arr[10];
//	int a;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", len);
//	init(arr, len);
//	reverse(arr, len);
//	empty(arr, len);
//   system("pause");
//   return 0;
//}
//ʵ��һ���������ж�һ�����ǲ���������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void prime(int n){
	int i = 0;
	int k = 0;
	k = sqrt(n);
	for (i = 2; i < n; i++)
	if (n%i == 0){
		printf("%d��������\n", n);
		break;
	}
	else{
		printf("%d������\n", n);
		break;
	}
}
int main(){
	int x = 0;
	printf("������һ������");
	scanf("%d", &x);
	prime(x);
	system("pause");
	return 0;
}
