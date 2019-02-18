//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	//给定一个字符串，将这个字符串逆序
//	char str[] = "hellow,world";
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left <= right){
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//	printf("%s\n", str);
//   system("pause");
//   return 0;
//}
//用函数实现为
//#include<stdio.h>
//#include<stdlib.h>
//#include<algorithm>
//int main(){
//	char str[]="hellow,world";
//	std::reverse(str, str + strlen(str));
//	printf("%s\n",str);
//   system("pause");
//   return 0;
//}
//找出两个整数中的最大值
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int Max(int x, int y){
//	if (x > y){
//		return x;
//	}
//	return y;
//	//也可写为：return(x>y)?(x):(y);
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int t = Max(a, b);
//	printf("%d\n", t);
//   system("pause");
//   return 0;
//}
//计算两个数字的商
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//因为在除法中，分母不能为0
//所以我们让函数返回两个值
//一个表示商
//一个表示除法能否成功进行
//如果函数执行成功，就把ok指向的变量设置为1
//如果执行失败，几把ok指向的变量设置为0
//int Divide(int x, int y,int* ok){
//	if (y == 0){
//		*ok = 0;
//		return 0;
//	}
//	*ok = 1;
//	return x / y;
//}
//int main(){
//	int a = 10;
//	int b = 5;
//	int ok = 0;
//	//此处ok表示一个输出型参数
//	int t = Divide(a, b, &ok);
//	printf("%d %d\n", t ,ok);
//   system("pause");
//   return 0;
//}