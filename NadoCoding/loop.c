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
	// ++ 뿔뿔
	int a = 10;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);
	a++;
	*/



	/*
	int b = 0;

	printf("b는 %d\n", ++b); // b = b + 1 
	printf("b는 %d\n", b++); // 문장을 수행하고 나서 b + 1
	printf("b는 %d\n", b); // 최종 출력

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



	//반복문
	// for, while, do while


	/*
	//for (선언 : 조건 증감)
	for (int i = 1; i <= 10; i++)
	{
		printf("hello world %d\n", i);
	}
	*/

	
	/*
	// while (조건) {}
	int i = 1;
	while (i <= 10)
	{
		printf(" hello world %d\n", i++);
		// i++ 이 자리에 써도 괜찮습니당
	}
	*/


	/*
	// do {} while (조건)
	int i = 1;
	do {
		printf("hello world %d\n", i++);

	} while (i <= 10);
	*/

	/*
	
	//2중 반복문
	for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문 : \n%d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("두 번째 반복문 : %d\n", j);
		}
	}

	*/



/*
	// 구구단을 짜보겠습니당
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



	//피라미드를 쌓아보자.
	/*
	SSSS*
	SSS***
	SS*****
	S*******
	*********
	*/

	int floor;
	printf("몇층으로 쌓으실?");
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