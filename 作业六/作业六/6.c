//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
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
//	printf("请输入一个数：");
//	scanf("%d", &x);
//	mul(x);
//   system("pause");
//   return 0;
//}
//使用函数实现两个数的交换。
//#include<stdio.h>
//#include<stdlib.h>
//void swap1(int x, int y){
//	int tmp = 0;
//	tmp = x;
//	y = x;
//	y = tmp;
//}
//在c语言中，形参是实参的一份副本（拷贝）
//如果需要让函数内部能够影响到函数外部的变量，需要按照指针的方式来传参。
//对指针解引用：拿着内存中的房间号，找到对应房间中的内容是啥）
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
//实现一个函数判断year是不是润年。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void year(int i){
//	if (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0)){
//		printf("是闰年\n");
//	}else{
//		printf("不是闰年\n");
//	}
//}
//int main(){
//	int x = 0;
//	printf("请输入一个年份：");
//	scanf("%d", &x);
//	year(x);
//   system("pause");
//   return 0;
//}
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void init(int arr[], int len){//初始化数组
//	printf("初始化数组,请输入十个数\n");
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
//	printf("清空数组后的数组");
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
//	printf("逆置后的数组");
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
//实现一个函数，判断一个数是不是素数。
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
		printf("%d不是素数\n", n);
		break;
	}
	else{
		printf("%d是素数\n", n);
		break;
	}
}
int main(){
	int x = 0;
	printf("请输入一个数：");
	scanf("%d", &x);
	prime(x);
	system("pause");
	return 0;
}
