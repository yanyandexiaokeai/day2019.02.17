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
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
int main(){
	char str[]="hellow,world";
	std::reverse(str, str + strlen(str));
	printf("%s\n",str);
   system("pause");
   return 0;
}
