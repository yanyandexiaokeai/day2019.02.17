//����������1����Ȼ�����ҳ���1�ͱ���û������������
//1�����100-200֮���������
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
//	printf("\n�ܹ���%d\n", count);
//    system("pause");
//	return 0;
//}
//�Ż�������sqrt����ѭ���������������϶�Ϊ��������ÿ�μ�2.
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
//	printf("\n�ܹ�%d\n", count);
//	system("pause");
//	return 0;
//}
//2:��ӡ�˷��ھ���
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
//2:���⣺�����ÿ���˷�֮���м����
//3:�ж�1000-2000��֮������ꡣ
//���꣺1��������4�Ҳ�������100 2��������400
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
//	printf("\n����=%d\n", count);
//	system("pause");
//    return 0;
//}