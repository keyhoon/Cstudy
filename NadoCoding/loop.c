#include <stdio.h>

int main_loop(void)
{
	/*
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n"); 
	printf("hello world\n"); 
	printf("hello world\n"); 
	printf("hello world\n"); 
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");*/



	/*
	// ++ �Ի�
	int a = 10;
	printf("a �� %d\n", a);
	a++;
	printf("a �� %d\n", a);
	a++;
	*/



	/*
	int b = 0;

	printf("b�� %d\n", ++b); // b = b + 1 
	printf("b�� %d\n", b++); // ������ �����ϰ� ���� b + 1
	printf("b�� %d\n", b); // ���� ���

	*/



	/*
	int i = 1;
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	*/



	//�ݺ���
	// for, while, do while


	/*
	//for (���� : ���� ����)
	for (int i = 1; i <= 10; i++)
	{
		printf("hello world %d\n", i);
	}
	*/

	
	/*
	// while (����) {}
	int i = 1;
	while (i <= 10)
	{
		printf(" hello world %d\n", i++);
		// i++ �� �ڸ��� �ᵵ �������ϴ�
	}
	*/


	/*
	// do {} while (����)
	int i = 1;
	do {
		printf("hello world %d\n", i++);

	} while (i <= 10);
	*/

	/*
	
	//2�� �ݺ���
	for (int i = 1; i <= 3; i++)
	{
		printf("ù ��° �ݺ��� : \n%d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("�� ��° �ݺ��� : %d\n", j);
		}
	}

	*/



/*
	// �������� ¥���ڽ��ϴ�
for (int i = 1; i <= 9; i++)
{
	for (int j = 1; j <= 9; j++)
	{
		printf(" %d x %d = %d \n ", i, j, i * j);

	}
}
*/

	/*
	*
	**
	***
	****
	*****
	*/

/*
for (int i = 0; i < 5; i++)
{
	for (int j = 0; j <= i; j++)
	{
		printf("*");

	}
	printf("\n");
	}
	
	*/

	/*for (int i = 0 ; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
	
		}
		printf("\n");
	}*/



	//�Ƕ�̵带 �׾ƺ���.
	/*
	SSSS*
	SSS***
	SS*****
	S*******
	*********
	*/

	int floor;
	printf("�������� ������?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");

		}
		for (int k = 0; k < i*2+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}