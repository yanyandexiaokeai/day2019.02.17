//素数：大于1的自然数，且除了1和本身，没有其他因数。
//1：输出100-200之间的素数。
//#include<stdio.h>
//#include<stdlib.h>
//int main() 
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	for (n = 100; n <= 200; n = n + 1)
//	{
//		for (i = 2; i <= n - 1; i++)
//		{
//			if (n%i == 0)
//				break;
//		}
//		if (i ==n)
//		{
//			printf("  %d", n);
//			count++;
//		}
//
//	}
//	printf("\n总共有%d\n", count);
//    system("pause");
//	return 0;
//}
//优化：可用sqrt减少循环次数，且素数肯定为奇数，可每次加2.
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	int n, i, k;
//	int count = 0;
//	for (n = 101; n <= 200; n = n + 2)
//	{
//		k = sqrt(n);
//		for (i = 2; i <= k; i++)
//
//		if (n%i == 0)break;
//		if (i >= k + 1)
//		{
//			printf("  %d", n);
//			count++;
//		}
//	}
//	printf("\n总共%d\n", count);
//	system("pause");
//	return 0;
//}
//2:打印乘法口诀表
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int  i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %d*%d=%2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//2:问题：如何让每个乘法之间有间隔？
//3:判断1000-2000年之间的闰年。
//闰年：1、能整除4且不能整除100 2、能整除400
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0))
//		{
//			printf(" %d", i);
//			count++;
//		}
//	}
//	printf("\n总数=%d\n", count);
//	system("pause");
//    return 0;
//}