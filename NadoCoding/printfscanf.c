#include <stdio.h>

int main_printfscanf(void)

{
	/*
	int age = 12;
	printf("%d\n", age);

	age = 13;
	printf("%d\n", age);

	*/


	// �Ǽ��� ������ ���� ����
	/*float f = 46.5f;
	printf(" %.2f\n", f);

	double d = 4.432;
	printf("%.1lf\n" , d);
	*/


	//const int year = 2000;

	//printf("�¾ �⵵ = %d\n", year);
	

	//print
	//���� 

	/*/int add = 3 + 7; //10
	printf("3+7=%d\n", add);

	printf("%d * %d = %d\n", 30, 79, 30*79);
	*/

	/*
	int input;
	printf("���� �Է��ϼ���.");

	scanf_s("%d", &input);

	printf("�Է°� = %d\n", input);
	*/

	/*
	int one, two, three;
	printf("3���� ���� �Է��ϼ��� : ");

	scanf_s("%d %d %d", &one, &two, &three);
	printf("one : %d\n", one);
	printf("two : %d\n", two);
	printf("three : %d\n", three);
	*/

	//����(�� ����) , ���ڿ� (�� ���� �̻��� ���� ����)

	/*
	char c = 'A';
	printf("%c\n", c);
	*/

	/*
	char str[256];
	scanf_s(" % s", str, sizeof(str));
	printf("%s\n ", str);
	*/







	//������Ʈ
	//���� ���� �ۼ� ����
	//�̸� , ���� , ������ , Ű , ���˸�


	char name[256];
	printf("�̸��� ����?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̽Ű���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� kg �Դϱ�");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm�Դϱ�?");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ����������");
	scanf_s("%s", what, sizeof(what));

	//���� ���� ��� �մϴ�

	printf("\n\n --- ������ ���� ---\n\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("������ : %.1f\n", weight);
	printf("Ű : %.1lf\n", height);
	printf("���� : %s\n", what);



	return 0;
}