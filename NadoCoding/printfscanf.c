#include <stdio.h>

int main_printfscanf(void)

{
	/*
	int age = 12;
	printf("%d\n", age);

	age = 13;
	printf("%d\n", age);

	*/


	// 실수형 변수에 대한 예제
	/*float f = 46.5f;
	printf(" %.2f\n", f);

	double d = 4.432;
	printf("%.1lf\n" , d);
	*/


	//const int year = 2000;

	//printf("태어난 년도 = %d\n", year);
	

	//print
	//연산 

	/*/int add = 3 + 7; //10
	printf("3+7=%d\n", add);

	printf("%d * %d = %d\n", 30, 79, 30*79);
	*/

	/*
	int input;
	printf("값을 입력하세요.");

	scanf_s("%d", &input);

	printf("입력값 = %d\n", input);
	*/

	/*
	int one, two, three;
	printf("3개의 값을 입력하세용 : ");

	scanf_s("%d %d %d", &one, &two, &three);
	printf("one : %d\n", one);
	printf("two : %d\n", two);
	printf("three : %d\n", three);
	*/

	//문자(한 글자) , 문자열 (두 글자 이상의 여러 글자)

	/*
	char c = 'A';
	printf("%c\n", c);
	*/

	/*
	char str[256];
	scanf_s(" % s", str, sizeof(str));
	printf("%s\n ", str);
	*/







	//프로젝트
	//경찰 조서 작성 게임
	//이름 , 나이 , 몸무게 , 키 , 범죄명


	char name[256];
	printf("이름이 뭐니?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이신가요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg 입니까");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm입니까?");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀나요");
	scanf_s("%s", what, sizeof(what));

	//조서 내용 출력 합니다

	printf("\n\n --- 범죄자 정보 ---\n\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게 : %.1f\n", weight);
	printf("키 : %.1lf\n", height);
	printf("범죄 : %s\n", what);



	return 0;
}