//1.在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
//注：图案题找规律。
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{	int x;
//	int y;
//	for ( x = 1; x<=7; x++)
//	{
//
//		for ( y = 1; y <= 2 * x - 1; y++){
//
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for ( x = 6; x>=1; x--)
//	{
//
//		for ( y = 1; y <= 2 * x - 1; y++)
//		{
//
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i;
//	int a;
//	int b;
//	int c;
//	for (i = 0; i <= 999; i++)
//	{
//		a = i / 100;//分离千位
//		b = i / 10 % 10;//分离十位
//		c = i % 10;//分离个位
//		if ( i==a*a*a + b*b*b + c*c*c)
//			printf("%d  ", i);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int t = 0;
//	int sum = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &a);
//	for (i = 0; i<5; i++)
//	{
//
//		t = 10 * t + a; //		所加项       
//		sum = sum + t;//		每次循环结束时的和
//
//	}
//
//	printf("Sn=%d\n", sum);
//	system("pause");
//	return 0;
//}

