#include <stdio.h>
#include <time.h>
int main_condition(void)

{
	// ������ ź�ٰ� ���� �л�/�Ϲ������� ���� (�Ϲ��� : 20��)
	// int age = 16;
	
	// if (����) {    } esle {    } 
	
	
	
	/*if (age >= 20)
	{
		printf("�����Դϴ�.\n");
	}

	else
	{
		printf("�л��Դϴ�.\n");
	}
	*/


	// �ʵ� 8~13 / �ߵ� 14~16 / ��� 17~19 ���� ��������
	// if / else if / else

		
	/*
	
	int age = 25;
	
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.");
	}

	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�.");
	}

	else if (age >= 17 && age <= 19)
	{
		printf("����л��Դϴ�");
	}

	else
	{
		printf("�����Դϴ�.");

	}*/



	//break / continue
	// 1��~30������ �ִ� �ݿ��� 1��~5�� ������ǥ
	
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("6�� �л����ʹ� ���� ������~");
			break;
		}
		printf(" %d�� �л� ������ǥ �غ��ؿ�\n", i);
	}*/


	// 1~30�� �ִµ� 7�� �Ἦ
	// 7�� �����ϰ� 6��~10�� ��ǥ�غ�����

	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d�� �л��� �Ἦ�Դϴ�\n", i);
				continue;
			}
			printf("%d �� �л��� ��ǥ�� �غ����ּ���\n", i);
		}
	}*/




	// && �̰� AND ���� 
	// || �̰� OR ����

	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a �� b�� ���ų� �Ǵ� c�� d�� �����ϴ�\n");
	

	}
	

	else
	{
		printf("���� ���� �ٸ��׿�");

	}*/


	//���� ���� ��

// srand(time(NULL));
// int i = rand() % 3; // 0~2 ��ȯ
	/*if (i == 0)
{
	printf("����\n");
}

else if (i == 1)
{
	printf("����\n");
}
else if (i == 2)
{
	printf("��\n");
}

else
{
	printf("�����\n");

}*/








	/*int i = 1;

switch (i)
{

case 0: printf("����\n"); break;
case 1: printf("����\n"); break;
case 2: printf("��\n"); break;
	
default:printf("�����\n"); break;

}*/
	









	/*int age = 25;
switch (age)
{
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:printf("�ʵ��л���\n"); break;
case 14:
case 15:
case 16:printf("���л���\n"); break;
case 17:
case 18:
case 19:printf("����л���\n"); break;

default:printf("�л� �ƴѵ�\n"); break;

}
if (age >= 8 && age <= 13)
{
	printf("�ʵ��л��Դϴ�.");
}

else if (age >= 14 && age <= 16)
{
	printf("���л��Դϴ�.");
}

else if (age >= 17 && age <= 19)
{
	printf("����л��Դϴ�");
}

else
{
	printf("�л��� �ƴѰ����ϴ�");

}*/








// Up and Down

	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100 ������ ����
	printf("���� : %d\n", num);
	int answer = 42; // ����
	int chance = 5; // ��ȸ
	while (chance > 0)
	{
		printf("���� ��ȸ�� %d �� �Դϴ�. \n", chance--);
		printf("���ڸ� ���������� 1~100 �����Դϴ�. \n");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf(" Down! \n");
		}

		else if (answer < num)
		{
			printf(" UP! \n");

		}

		else if (answer == num)
		{
			printf("�����Դϴ�.\n");
		}

		else
		{
			printf("������ �߻��߳׿�.\n");
		}

		if (chance == 0)
		{
			printf("��ȸ�� ��� ����ϼ̽��ϴ�.");
			break;
		}
	}





	return 0;
}

