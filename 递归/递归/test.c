//1..�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ .����1234�����1 2 3 4
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
//2.�ݹ�(��ʹ����ʱ������ѭ����䣩�ͷǵݹ�ֱ�ʵ��strlen 
//ɶʱ�ַ���
//�ַ����飡=�ַ���
//�ַ�����һ��������ַ����飬��'\0'��β
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
//C�����У������������Ϊ�����Ĳ������ͻᱻ��ʽת����ָ��
//int Strlen(char str[]){
//str�Ѿ��Ѿ���ʽת������char*
	//if (*str == '\0'){
	//	return 0;
	//}
//str���ǿ��ַ�
//	return 1 + Strlen(str + 1);
//}
//�ݹ飺���»�С
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
//3.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 
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
//4���ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
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
//	int last1 = 1;//��n-1��
//	int last2 = 1;//��n-2��
//	int cur = 0;//��i��
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
//5..��дһ������ʵ��n^k(�����Ǹ�������ʹ�õݹ�ʵ��
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
//6.дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
//7.��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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