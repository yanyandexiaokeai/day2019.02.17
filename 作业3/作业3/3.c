//1�������齻������
//#define _CRT_SECURE_NO_WARNINGS
//#define   N  10
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr1[N];
//	int arr2[N];
//	int i = 0;
//	int j = 0;
//	printf("������ʮ����arr1=");
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	printf("������ʮ����arr2=");
//	for (j = 0; j < N; j++)
//	{
//		scanf("%d", &arr2[j]);
//	}
//	for (i = 0; i < N - i; i++)
//	{
//		arr1[i] = arr1[i] + arr2[j];
//		arr2[j] = arr1[i] - arr2[j];
//		arr1[i] = arr1[i] - arr2[j];
//
//	}
//	printf("arr1=  ");
//	for (i = 0; i < N; i++)
//	{
//		printf("%d  ", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2=  ");
//	for (int j = 0; j < N; j++)
//	{
//		printf("%d  ", arr2[j]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//���⣺����û�û�а���ָ��������ô������������
//2.����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
//#include <stdio.h>
//#include<stdlib.h>
//#include <math.h>
//int main()
//{
//	int i;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//
//		sum += pow(-1, i + 1) * 1 / i;
//	}
//	printf("sum = %lf\n", sum);
//	system("pause");
//	return 0;
//}
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
//1 - 100���ֵ�9�޷��Ǹ�λ��ʮλ�ϵ�9������ģ�����жϸ�λ�Ƿ����9����Ϊint�͵ı���Ϊ���Σ��������ǿ���ͨ��
/// 10�Ƿ����9���ж�ʮλ
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i;
//	int num = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			num++;
//		if (i / 10 == 9)
//			num++;
//	}
//	printf("9�ĸ���Ϊ��%d\n", num);
//	system("pause");
//	return 0;
//}
//ע�⣺ifΪ������䣬д��һ����������ڼӡ�������

