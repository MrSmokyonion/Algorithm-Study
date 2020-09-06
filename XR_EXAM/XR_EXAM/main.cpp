#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

//--------------------------------------------------

//1. �� ���� ����(������)�� �Է��ϸ� �� ���� ��Ģ���� ����� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
void Problem_01() {
	printf("Problem_01\n");

	int a, b;

	printf("First number : ");
	scanf("%d", &a);
	printf("Second number : ");
	scanf("%d", &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
}

//2. �� ���� ����(�Ǽ���)�� �Է��ϸ� �� ������ �հ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
void Problem_02() {
	printf("Problem_02\n");

	float a, b, c;

	printf("First number(float) : ");
	scanf("%f", &a);
	printf("Second number(float) : ");
	scanf("%f", &b);
	printf("Third number(float) : ");
	scanf("%f", &c);

	printf("\n");
	printf("Sum : %f\n", a + b + c);
	printf("Avr : %f\n", (a + b + c) / 3);
}

//3. � ���� �������� ��� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. [����� �Է� : �� ���� �������α׷� ��� : ��� ������]
void Problem_03() {
	printf("Problem_03\n");

	int a, b;

	printf("First number : ");
	scanf("%d", &a);
	printf("Second number : ");
	scanf("%d", &b);

	printf("\n");
	printf("Mok : %d\n", a / b);
	printf("Namerge : %d", a % b);
}

//4. �� ��(����)�� �Է� �޾�, �� �� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_04() {
	printf("Problem_04\n");

	int a, b;

	printf("First number : ");
	scanf("%d", &a);
	printf("Second number : ");
	scanf("%d", &b);

	if (a > b) {
		printf("%d is bigger", a);
	}
	else if(b > a) {
		printf("%d is bigger", b);
	}
}

//5. �ϳ��� ������ �Է� �޾� �� ���� ¦��(even number)���� Ȧ��(odd number)������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_05() {
	printf("Problem_05\n");

	int a;

	printf("Enter your number : ");
	scanf("%d", &a);

	printf("\n");

	if ((a % 2) > 0)
	{
		printf("Odd number\n");
	}
	else 
	{
		printf("Even number\n");
	}
}

//6. �� ��(������)�� �Է� �޾� ���� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_06() {
	printf("Problem_06\n");

	int a, b, c;
	int max = 0;

	printf("First number : ");
	scanf("%d", &a);
	printf("Second number : ");
	scanf("%d", &b);
	printf("Third number : ");
	scanf("%d", &c);

	printf("\n");

	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;

	printf("Maximum is %d", max);
}

//7. 7. ����(����)�� �Է� �޾Ƽ� ���(A, B, C, D, E)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(A:100-80,B:79-60,C:59-40,D:39-20,E:19-0)
void Problem_07() {
	printf("Problem_07\n");

	int a;

	printf("Enter your number : ");
	scanf("%d", &a);

	printf("\n");

	if (a > 100 || a < 0) {
		printf("Wrong number!");
	}
	else if (a >= 80) {
		printf("AAAAAA");
	}
	else if (a >= 60) {
		printf("BBBBBB");
	}
	else if (a >= 40) {
		printf("CCCCCC");
	}
	else if (a >= 20) {
		printf("DDDDDD");
	}
	else if (a >= 0) {
		printf("EEEEEE");
	}
}

//8. � �� �ڸ� ���� �ڸ����� ������ ���� �ٲٴ� ���α׷��� �ۼ��Ͻÿ�.����� �Է� : �� ���� �� �ڸ� ������� : �ڸ����� ������ �ݴ�� �� ����
void Problem_08() {
	printf("Problem_08\n");

	int a;

	printf("Enter your number (10~99) : ");
	scanf("%d", &a);

	printf("\n");

	if (a > 99 || a < 10) {
		printf("wrong number!");
		return;
	}

	
	int front, back, result;
	front = a / 10;	//������ ���ڸ�
	back = a % 10;//������ ���ڸ�
	result = (back * 10) + front;
	
	printf("Result : %d", result);
}

//9. 1���� 10���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_09() {
	printf("Problem_09\n");

	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
	}
}

//10. 10���� ������ �Է� �޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_10() {
	printf("Problem_10\n");

	int sum = 0;

	for (int i = 1; i <= 10; i++) {
		int temp;
		printf("number [%d] : ", i);
		scanf("%d", &temp);

		sum += temp;
	}

	printf("Sum : %d", sum);
}

//11. 1���� 100������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(do-while�� ���)
void Problem_11() {
	printf("Problem_11\n");

	int sum = 0;
	int i = 1;

	do {
		if (i % 3 == 0)
		{
			sum += i;
			printf("%d\n", i);
		}

		i++;
	} while (i <= 100);

	printf("sum : %d", sum);
}

//12. � ���� ����(n)�� �Է� �޾�(���� 0�̳� ���� ������ �Է��ϸ�, ���� �޽����� ��� ��, �ٽ� �Է��ϵ��� ó��), �� ���� 2n�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_12() {
	printf("Problem_12\n");

	int num;

	while (true) {
		printf("Enter your number (only +) : ");
		scanf("%d", &num);

		if (num <= 0) {
			printf("Wrong number!\n");
			continue;
		}
		break;
	}

	printf("Result : %d", 2 * num);
}

//13. 0�� �Էµ� ������ ��� ������ �Է� �ް�, �Էµ� ��� ���ڵ��� ������ ����Ͻÿ�.
void Problem_13() {
	printf("Problem_13\n");

	int sum = 0;

	while (true) {
		int num;

		printf("Enter your number (0 to Esc) : ");
		scanf("%d", &num);

		if (num == 0)
			break;

		sum += num;
	}

	printf("Sum : %d", sum);
}

//14. 1���� 9������ ���� �ϳ��� �Է� �޾� �� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(5�̸� 5���� ���)
void Problem_14() {
	printf("Problem_14\n");

	int num;

	printf("Enter your number : ");
	scanf("%d", &num);

	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", num, i, num*i);
	}
}

//16. ���� �������� 1���� 9���� �̿��� ���ڸ� ����ڰ� �߸� �Է��� ���� ������, �� ��쿡 �߸��� ���ڶ�� ���� �˷��ִ� ���� �޽����� ����ϰ� �ٽ� ���ڸ� �Է� �޵��� ó���Ͻÿ�.(�Է��� ��ȿ�� �˻�)
void Problem_16() {
	printf("Problem_16\n");

	int num;

reInput:
	printf("Enter your number : ");
	scanf("%d", &num);

	if (num < 1 || num > 9) {
		printf("Wrong number!\n");
		goto reInput;
	}

	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", num, i, num*i);
	}
}

//17. for��(while)�� ���� �ݺ��� break ���� �̿��Ͽ� 0�� �Էµ� ������ �Է� ���� ���� �� ���� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_17() {
	printf("Problem_17\n");

	int max = 0;

	for (;;) {
		int num;

		printf("Enter your number (0 to Esc) : ");
		scanf("%d", &num);

		if (num == 0)
			break;

		if (max < num)
			max = num;
	}

	printf("Maximum : %d", max);
}

//18. ����ڷκ��� ���� �ϳ��� �Է¹޾�, 7���� �Է¹��� �������� ��� �������� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. �Է¹��� ���ڰ� 7���� ������ ���� �޽����� ����Ѵ�.
void Problem_18() {
	printf("Problem_18\n");

	int num;
	int sum = 0;

	printf("Enter your number (bigger than 7) : ");
	scanf("%d", &num);

	if (num < 7) {
		printf("Wrong Number!\n");
		return;
	}
	
	for (int i = 7; i <= num; i++) {
		sum += i;
	}

	printf("Result : %d", sum);
}

//19. 1~100 ������ ���� �ϳ��� ���� ��(�������� �����ص� ��), 10�� �̳��� �� ���ڸ� ���ߴ� ������ �ۼ��Ͻÿ�. 
void Problem_19() {
	printf("Problem_19\n");
	srand(time(NULL));
	
	int target = rand() % 100 + 1;
	int life = 10;

	while (true) {
		int num;
		printf("Guess the number : ");
		scanf("%d", &num);

		if (target == num) {
			printf("Correct!");
			break;
		}
		else {
			printf("Wrong!\n");
			life--;

			if (life == 0) {
				printf("GAME OVER!\n");
				break;
			}
		}
	}
}

//20. �� Ư���� ������ ��ü �ڸ����� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.����� �Է� : �� ���� ���� ��� : �ڸ����� ����
void Problem_20() {
	printf("Problem_20\n");

	int num;
	int temp = 1, count = 0;

	printf("Enter your number : ");
	scanf("%d", &num);

	num = abs(num);

	while (true) {
		int mok = num / temp;
		if (mok > 0) {
			count++;
			temp *= 10;
			continue;
		}
		else {
			break;
		}
	}
	printf("result : %d", count);
}

//21. 1���� 100������ ���� for loop�� �Ἥ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_21() {
	printf("Problem_21\n");

	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}

	printf("Sum : %d", sum);
}

//22. 1���� 100���� 5�� ����� ���� for loop�� �Ἥ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_22() {
	printf("Problem_22\n");

	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0) {
			sum += i;
		}
	}

	printf("Sum : %d", sum);
}

//23. ����ڷκ��� �� ���ڸ� �Է¹޾�, �Է¹��� ���ڰ� �Ҽ����� �ƴ����� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_23() {
	printf("Problem_23\n");

	int num;
	printf("Enter your number : ");
	scanf("%d", &num);
	
	for (int i = 2; i < num; i++) {

		if (num == i)
			break;

		if (num % i == 0) {
			printf("number");
			return;
		}
	}
	printf("prime number");
}

//24. 100 ������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_24() {
	printf("Problem_24\n");

	for (int i = 2; i <= 100; i++) {
		for (int j = 2; j <= i; j++) {
			if (i == j) {
				printf("%d\n", i);
				break;
			}

			if (i % j == 0) {
				break;
			}
		}
	}
}

//25. ����ڷκ��� �� ���ڸ� �Է¹޾�, �Է¹��� ���� ������ �Ҽ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_25() {
	printf("Problem_25\n");

	int num, sum = 0;
	printf("Enter your number : ");
	scanf("%d", &num);

	for (int i = 2; i <= num; i++) {
		for (int j = 2; j <= i; j++) {
			if (i == j) {
				sum += i;
				break;
			}

			if (i % j == 0) {
				break;
			}
		}
	}

	printf("Sum : %d", sum);
}

//26. ����ڰ� 0�� �Է��� ������ ���� ���ڸ� �Է¹޾�, �Է¹��� ������ �ִ밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
void Problem_26() {
	printf("Problem_26\n");

	int max = 0;

	while (true) {
		int num;

		printf("Enter your number (0 to Esc) : ");
		scanf("%d", &num);

		if (num == 0)
			break;

		if (max < num)
			max = num;
	}

	printf("Max : %d", max);
}

//27. ũ�Ⱑ 10�� ���� �迭�� ����Ͽ� �л� 10���� ������ �Է� ���� ��, ���� ���հ� ��� ����, �ְ� ����, ���� ������ ����ϴ� ���α׷��� �ۼ� �Ͻÿ�.
void Problem_27() {
	printf("Problem_27\n");

	int arr[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		printf("student [%d] : ", i + 1);
		scanf("%d", &arr[i]);
	}

	int max = 0, min = 100, sum = 0, avr;
	for (int i = 0; i < 10; i++) {
		sum += arr[i];

		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	avr = sum / 10;
	printf("sum : %d\n", sum);
	printf("avr : %d\n", avr);
	printf("max : %d\n", max);
	printf("min : %d\n", min);
}

//28. �� ���� ���ڿ��� �Է� �޾�, ù��° ���ڿ��� �� ��° ���ڿ��� ���ԵǾ� �ִ� ���� �˻��ϰ�, ���� ���� �Ǿ� ������ �� ��ġ�� ����Ͻÿ�
void Problem_28() {
	printf("Problem_28\n");

	char str1[1024];
	char str2[1024];

	printf("first str : ");
	scanf("%s", str1);

	printf("second str : ");
	scanf("%s", str2);

	char * result = strstr(str1, str2);
	if (result == NULL)
		return;
	printf("%s", result);
}


//30. �ҹ��ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�.
void Problem_30() {
	printf("Problem_30\n");

	char c;
	scanf("%c", &c);

	c = c - 32;
	printf("%c", c);
}

//31. � �� �Ǽ��� ������ �ٲٸ鼭 �Ҽ��� ���ϸ� �ڸ��� �Լ��� �ۼ��Ͻÿ�.
void Problem_31() {
	printf("Problem_31\n");

	float f = 0.0f;

	scanf("%f", &f);

	printf("%d", (int)f);
}

//32. �߼��� �����͸� ���� 3x3 ��� 2���� �Է¹޾�, �� ���� ����ϴ� ���α׷� �ۼ��Ͻÿ�!
void Problem_32() {
	printf("Problem_32\n");

	int arr[3][3] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}

//33. ���ڿ��� �Է��ϸ� ���� ������ ����ϴ� ���α׷� �ۼ�
void Problem_33() {
	printf("Problem_33\n");

	char str[1024] = { 0 };

	scanf("%s", str);

	printf("%d", strlen(str));
}


//***�õ������� ������
//34. ��ũ�� ����Ʈ����� ��ȭ��ȣ�� �����! ��� �̸��� ��ȭ��ȣ �� �ɹ��� �ϴ� ����ü ���� (1. �Է�/2. ����/3. ���)
/*
typedef struct {

	char name[64];
	char phone[32];

	Human * front;
	Human * back;

}Human;

void Problem_34() {

	Human Head = { NULL };

	while (true) {

		int num;
		printf("1. �Է�\n");
		printf("2. ����\n");
		printf("3. ���\n");
		printf("Answer : ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			User_Insert(&Head);
			break;
		case 2:
			User_Delete(&Head);
			break;
		case 3:
			User_Print(&Head);
			break;
		default:
			break;
		}
	}
}

void User_Insert(Human *Head) {
	
	Human * node = (Human *)malloc(sizeof(Human));
	printf("�̸� : ");
	scanf("%s", node->name);
	printf("��ȭ��ȣ : ");
	scanf("%s", node->phone);

	Human * temp = Head;
	while (true) {
		if (temp->back != NULL) {
			temp = temp->back;
			continue;
		}
		temp->back = node;
	}
	printf("------------\n");
}
void User_Delete(Human *Head) {

	char name[64] = { 0 };
	printf("�̸� : ");
	scanf("%s", name);

	Human * temp = Head;
	while (true) {

		if (strcmp(temp->name, name) != 0) {
			if (temp->back == NULL) {
				break;
			}
			temp = temp->back;
			continue;
		}
		
		if (strcmp(temp->name, name) == 0) {
			if (temp->back == NULL) {
				temp->front->back = NULL;
			}
			else {
				temp->front->back = temp->back;
			}

		}
	}
}
void User_Print(Human *Head) {

	Human * temp = Head;
	while (true) {
		
		printf("%s, %s\n", temp->name, temp->phone);
		if (temp->back == NULL) {
			break;
		}
		temp = temp->back;
	}
}
*/
//--------------------------------------------------

int main() {

	Problem_33();

	return 0;
}