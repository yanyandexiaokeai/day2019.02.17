#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int score = 0;
	printf("������ѧ���ĳɼ���");
	scanf("%d", &score);
	while (score<0 || score>100)
	{
		printf("������ĳɼ��Ǵ���ģ�����������ѧ���ĳɼ���");
		scanf("%d", &score);
	}
	if (90 < score&&score <= 100)
	{
		printf("��ĳɼ��ȼ��ǣ�A");
	}
	else if (80 < score&&score <= 90)
	{
		printf("��ĳɼ��ȼ��ǣ�B");
	}
	else if (70 < score <= 80)
	{
		printf("��ĳɼ��ȼ��ǣ�C");
	}
	else if (60 <= score&&score <= 70)
	{
		printf("��ĳɼ��ȼ��ǣ�D");
	}
	else if (0 < score&&score < 60)
	{
		printf("��ĳɼ���������ĳɼ��ȼ��ǣ�E");
	}
	system("pause");
	return 0;
}

