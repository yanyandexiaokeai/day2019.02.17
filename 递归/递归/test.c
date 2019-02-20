//1..递归方式实现打印一个整数的每一位 .例如1234，输出1 2 3 4
//#include<stdio.h>
//#include<stdlib.h>
//void Printf(int n){
//	if (n > 9){
//		Printf(n / 10);
//	}
//	printf(" %d", n % 10);
//}
//int main(){
//	Printf(1234);
//	system("pause");
//	return 0;
//}
//2.递归(不使用临时变量和循环语句）和非递归分别实现strlen 
//啥时字符串
//字符数组！=字符串
//字符串是一种特殊的字符数组，以'\0'结尾
//#include<stdio.h>
//#include<stdlib.h>
//int Strlen(char str[]){
//	int i = 0;
//	while (str[i] != '\0'){
//		i++;
//	}
//	return i;
//}
//int main(){
//	int len = Strlen("abcdef");
//	printf("%d", len);
//   system("pause");
//   return 0;
//}
#include<stdio.h>
#include<stdlib.h>
//C语言中，如果把数组作为函数的参数，就会被隐式转换成指针
//int Strlen(char str[]){
//str已经已经隐式转换成了char*
	//if (*str == '\0'){
	//	return 0;
	//}
//str不是空字符
//	return 1 + Strlen(str + 1);
//}
//递归：大事化小
//"abcd" = >1 + "bcd"
//"bcd" = >1 + "cd"
//"cd" = >1 + "d"
//"d" = >1 + ""
	//int main(){
	//	int len = Strlen("abcdef");
	//	printf("%d", len);
	//	system("pause");
	//	return 0;
	//}
//3.递归和非递归分别实现求n的阶乘 
//#include<stdio.h>
//#include<stdlib.h>
//int Factor(int n){
//	int ret = 1;
//	for (int i = 1; i <= n; i++){
//		ret *= i;
//	}
//	return ret;
//}
//int main(){
//	printf("%d", Factor(5));
//   system("pause");
//   return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
////n!=>n*n-1!
////n-1!=>n-1*n-2!
//int Factor(int n){
//	if (n == 1){
//		return 1;
//	}
//	return n*Factor(n - 1);
//}
//int main(){
//	printf("%d", Factor(5));
//   system("pause");
//   return 0;
//}
//4、递归和非递归分别实现求第n个斐波那契数
//#include<stdio.h>
//#include<stdlib.h>
//int count = 0;
//int Fib(int n){
//		if (n == 1 || n == 2){
//		return 1;
//	}
//		if (n == 3){
//			count++;
//		}
//	return Fib(n - 1) + Fib(n - 2);
//}
//int main(){
//	printf("%d\n", Fib(5));
//	printf("%d\n", count);
//   system("pause");
//   return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int Fib(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	int last1 = 1;//第n-1项
//	int last2 = 1;//第n-2项
//	int cur = 0;//第i项
//	for (int i = 3; i <= n; i++){
//		cur = last1 + last2;
//		last2 = last1;
//		last1 = cur;
//	}
//	return cur;
//}
//int main(){
//	printf("%d\n", Fib(5));
//   system("pause");
//   return 0;
//}
//5..编写一个函数实现n^k(不考虑负数），使用递归实现
//#include<stdio.h>
//#include<stdlib.h>
//int Pow(int n, int k){
//	if (n == 0){
//		return 0;
//	}
//	if (k == 0){
//		return 1;
//	}
//	return n*Pow(n,k-1);
//}
//int main(){
//	printf("%d", Pow(2, 5));
//   system("pause");
//   return 0;
//}
//6.写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//#include<stdio.h>
//#include<stdlib.h>
//int Digitsum(int n){
//	if (n <10){
//		return n;
//	}
//	return n%10 + Digitsum(n / 10 );
//}
//int main(){
//	printf("%d", Digitsum(1729));
//   system("pause");
//   return 0;
//}
//7.编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char * string)
{
	   string++;
	if (*string != '\0')
	{
		reverse_string(string);
	}
	   string--;
	printf("%c ", *string);
}

int main()
{
	char *p = "abcdefghijk";
	reverse_string(p);
	system("pause");
	return 0;
}