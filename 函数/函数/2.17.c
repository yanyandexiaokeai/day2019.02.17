//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	//����һ���ַ�����������ַ�������
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
//�ú���ʵ��Ϊ
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
//�ҳ����������е����ֵ
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int Max(int x, int y){
//	if (x > y){
//		return x;
//	}
//	return y;
//	//Ҳ��дΪ��return(x>y)?(x):(y);
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int t = Max(a, b);
//	printf("%d\n", t);
//   system("pause");
//   return 0;
//}
//�����������ֵ���
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//��Ϊ�ڳ����У���ĸ����Ϊ0
//���������ú�����������ֵ
//һ����ʾ��
//һ����ʾ�����ܷ�ɹ�����
//�������ִ�гɹ����Ͱ�okָ��ı�������Ϊ1
//���ִ��ʧ�ܣ�����okָ��ı�������Ϊ0
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
//	//�˴�ok��ʾһ������Ͳ���
//	int t = Divide(a, b, &ok);
//	printf("%d %d\n", t ,ok);
//   system("pause");
//   return 0;
//}