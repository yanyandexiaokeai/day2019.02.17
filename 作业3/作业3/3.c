//1两个数组交换内容
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
//	printf("请输入十个数arr1=");
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	printf("请输入十个数arr2=");
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
//问题：如果用户没有按照指令输入怎么提醒输入有误？
//2.计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
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
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//1 - 100出现的9无非是个位和十位上的9，用求模可以判断个位是否出现9，因为int型的变量为整形，所以我们可以通过
/// 10是否等于9来判断十位
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
//	printf("9的个数为：%d\n", num);
//	system("pause");
//	return 0;
//}
//注意：if为条件语句，写完一个条件结果在加“；”。

