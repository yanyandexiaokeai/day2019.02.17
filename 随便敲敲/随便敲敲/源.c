#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int score = 0;
	printf("请输入学生的成绩：");
	scanf("%d", &score);
	while (score<0 || score>100)
	{
		printf("你输入的成绩是错误的，请重新输入学生的成绩：");
		scanf("%d", &score);
	}
	if (90 < score&&score <= 100)
	{
		printf("你的成绩等级是：A");
	}
	else if (80 < score&&score <= 90)
	{
		printf("你的成绩等级是：B");
	}
	else if (70 < score <= 80)
	{
		printf("你的成绩等级是：C");
	}
	else if (60 <= score&&score <= 70)
	{
		printf("你的成绩等级是：D");
	}
	else if (0 < score&&score < 60)
	{
		printf("你的成绩不及格，你的成绩等级是：E");
	}
	system("pause");
	return 0;
}

