//1.给定两个整形变量的值，将两个值的内容进行交换
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int temp = 0;
//	{temp = a;
//	a = b;
//	b = temp;
//	}
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	system("pause");
//    return 0;
//}
//2.不允许创建临时变量，交换两个数的内容（附加题）
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	system("pause");
//	return 0;
//}
//3.求10 个整数中最大值。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[10 ] = { 0 };
//	int i = 0;
//	int max = 0;
//	printf("请输入十个数：");
//	for (i = 0; i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//		max = arr[0];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大数为：%d\n", max);
//	system("pause");
//	return 0;
//}
//4.将三个整数按从大到小输出。问题：小数怎么办？
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	printf("请输入三个数：");
//		scanf("%d%d%d", &a,&b,&c);
//		if (a < b)
//		{
//			t = a;
//			a = b;
//			b = t;
//		}
//		if (a < c)
//		{
//			t = a;
//			a = c;
//			c = t;
//		}
//		if (b < c)
//		{
//			t = b;
//			b = c;
//			c = t;
//		}
//		printf("从大到小输出结果为：%d %d %d\n", a, b, c);
//	    system("pause");
//	    return 0;
//}
//5.求两个数的最大公约数。(求模法）可用while循环
//问题：用求差法怎么实现
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a;
//	int b;
//	int t;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	while ((a%b)!= 0)
//	{
//	    t = b;
//		b = a%b;
//		a = t;
//	}
//	printf("最大公约数为：%d\n", b);
//	system("pause");
//	return 0;
//}
