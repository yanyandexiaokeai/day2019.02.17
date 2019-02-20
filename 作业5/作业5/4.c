//1.完成猜数字游戏。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 66;
//	int n = 0;
//	printf("请输入一个数：");
//	while (1){
//		scanf("%d", &n);
//		if (n > i)
//		{
//			printf("大了，继续猜哦\n");
//		}
//		else if (n < i)
//		{
//			printf("小了，继续猜哦\n");
//		}
//		else if (n == i)
//		{
//			printf("对了,你太棒了\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 666;
//	int j = 0;
//	printf("请输入一个三位数的密码：");
//	for (int i = 3; i > 0; i--)
//	{
//		scanf("%d", &j);
//		if (j != a)
//		{
//			if (i == 1)
//			{
//				printf("密码错误，退出程序\n");
//			}
//			else if (i != 1)
//			{
//				printf("密码错误，你还有%d次机会：", i - 1);
//			}
//		}
//		else if (j == a)
//		{
//			printf("登陆成功！\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
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
//2.在一个有序数组中查找一个数
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int to_find = 5;
//	//[left,right]待查找区间
//	int left = 0;
//	int right = 10 - 1;
//	int mid = 0;
//	while (left <= right){
//		mid = (left + right) / 2;
//		if (mid > to_find){
//			//往左侧找
//			right = mid - 1;
//		}
//		else if (mid < to_find){
//			//往右侧找
//			left = mid + 1;
//		}
//		else{
//			break;
//		}
//	}
//	if (left <= right){
//		printf("找到了，下标为：%d\n", mid);
//	}
//	else{
//		printf("没找到！\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
