//1.�����������α�����ֵ��������ֵ�����ݽ��н���
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
//2.����������ʱ���������������������ݣ������⣩
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
//3.��10 �����������ֵ��
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[10 ] = { 0 };
//	int i = 0;
//	int max = 0;
//	printf("������ʮ������");
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
//	printf("�����Ϊ��%d\n", max);
//	system("pause");
//	return 0;
//}
//4.�������������Ӵ�С��������⣺С����ô�죿
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	printf("��������������");
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
//		printf("�Ӵ�С������Ϊ��%d %d %d\n", a, b, c);
//	    system("pause");
//	    return 0;
//}
//5.�������������Լ����(��ģ��������whileѭ��
//���⣺������ôʵ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a;
//	int b;
//	int t;
//	printf("��������������");
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
//	printf("���Լ��Ϊ��%d\n", b);
//	system("pause");
//	return 0;
//}
