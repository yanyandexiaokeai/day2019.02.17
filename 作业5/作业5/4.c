//1.��ɲ�������Ϸ��
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 66;
//	int n = 0;
//	printf("������һ������");
//	while (1){
//		scanf("%d", &n);
//		if (n > i)
//		{
//			printf("���ˣ�������Ŷ\n");
//		}
//		else if (n < i)
//		{
//			printf("С�ˣ�������Ŷ\n");
//		}
//		else if (n == i)
//		{
//			printf("����,��̫����\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 666;
//	int j = 0;
//	printf("������һ����λ�������룺");
//	for (int i = 3; i > 0; i--)
//	{
//		scanf("%d", &j);
//		if (j != a)
//		{
//			if (i == 1)
//			{
//				printf("��������˳�����\n");
//			}
//			else if (i != 1)
//			{
//				printf("��������㻹��%d�λ��᣺", i - 1);
//			}
//		}
//		else if (j == a)
//		{
//			printf("��½�ɹ���\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
//
//#define _CRT_SECURE_NO_WARNINGS
//#define n  100
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char number;
//	while (1)
//	{
//		scanf("%c", &number);
//		if (number >= 'A' && number <= 'Z')
//		{
//			printf("%c\n", number + 32);
//		}
//		if (number >= 'a'&&number <= 'z')
//		{
//			printf("%c\n", number - 32);
//		}
//
//	}
//
//	system("pause");
//	return 0;
//
//}
//2.��һ�����������в���һ����
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int to_find = 5;
//	//[left,right]����������
//	int left = 0;
//	int right = 10 - 1;
//	int mid = 0;
//	while (left <= right){
//		mid = (left + right) / 2;
//		if (mid > to_find){
//			//�������
//			right = mid - 1;
//		}
//		else if (mid < to_find){
//			//���Ҳ���
//			left = mid + 1;
//		}
//		else{
//			break;
//		}
//	}
//	if (left <= right){
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//	}
//	else{
//		printf("û�ҵ���\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
