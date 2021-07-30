#include <stdio.h>
#include <time.h>
int main_condition(void)

{
	// 버스를 탄다고 가정 학생/일반인으로 구분 (일반인 : 20세)
	// int age = 16;
	
	// if (조건) {    } esle {    } 
	
	
	
	/*if (age >= 20)
	{
		printf("성인입니다.\n");
	}

	else
	{
		printf("학생입니다.\n");
	}
	*/


	// 초딩 8~13 / 중딩 14~16 / 고딩 17~19 으로 나눠보자
	// if / else if / else

		
	/*
	
	int age = 25;
	
	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.");
	}

	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.");
	}

	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니당");
	}

	else
	{
		printf("성인입니다.");

	}*/



	//break / continue
	// 1번~30번까지 있는 반에서 1번~5번 조별발표
	
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("6번 학생부터는 집에 가세용~");
			break;
		}
		printf(" %d번 학생 조별발표 준비해요\n", i);
	}*/


	// 1~30번 있는데 7번 결석
	// 7번 제외하고 6번~10번 발표해보세요

	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다\n", i);
				continue;
			}
			printf("%d 번 학생은 발표를 준비해주세요\n", i);
		}
	}*/




	// && 이건 AND 연산 
	// || 이건 OR 연산

	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a 와 b가 같거나 또는 c와 d가 같습니다\n");
	

	}
	

	else
	{
		printf("값이 서로 다르네여");

	}*/


	//가위 바위 보

// srand(time(NULL));
// int i = rand() % 3; // 0~2 반환
	/*if (i == 0)
{
	printf("가위\n");
}

else if (i == 1)
{
	printf("바위\n");
}
else if (i == 2)
{
	printf("보\n");
}

else
{
	printf("몰라요\n");

}*/








	/*int i = 1;

switch (i)
{

case 0: printf("가위\n"); break;
case 1: printf("바위\n"); break;
case 2: printf("보\n"); break;
	
default:printf("몰라요\n"); break;

}*/
	









	/*int age = 25;
switch (age)
{
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:printf("초등학생임\n"); break;
case 14:
case 15:
case 16:printf("중학생임\n"); break;
case 17:
case 18:
case 19:printf("고등학생임\n"); break;

default:printf("학생 아닌듯\n"); break;

}
if (age >= 8 && age <= 13)
{
	printf("초등학생입니다.");
}

else if (age >= 14 && age <= 16)
{
	printf("중학생입니다.");
}

else if (age >= 17 && age <= 19)
{
	printf("고등학생입니당");
}

else
{
	printf("학생이 아닌가봅니당");

}*/








// Up and Down

	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100 사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 42; // 정답
	int chance = 5; // 기회
	while (chance > 0)
	{
		printf("남은 기회는 %d 번 입니다. \n", chance--);
		printf("숫자를 맞혀보세요 1~100 사이입니다. \n");
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
			printf("정답입니다.\n");
		}

		else
		{
			printf("오류가 발생했네용.\n");
		}

		if (chance == 0)
		{
			printf("기회를 모두 사용하셨습니다.");
			break;
		}
	}





	return 0;
}

