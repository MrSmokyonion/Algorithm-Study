#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

//--------------------------------------------------

//1. 두 개의 숫자(정수형)를 입력하면 두 수의 사칙연산 결과를 모두 출력하는 프로그램을 작성하시오
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

//2. 세 개의 숫자(실수형)를 입력하면 이 수들의 합과 평균을 출력하는 프로그램을 작성하시오
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

//3. 어떤 정수 나눗셈의 몫과 나머지를 출력하는 프로그램을 작성하시오. [사용자 입력 : 두 개의 정수프로그램 출력 : 몫과 나머지]
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

//4. 두 수(정수)를 입력 받아, 그 중 큰 수를 출력하는 프로그램을 작성하시오.
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

//5. 하나의 정수를 입력 받아 이 수가 짝수(even number)인지 홀수(odd number)인지를 출력하는 프로그램을 작성하시오.
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

//6. 세 수(정수형)를 입력 받아 가장 큰 수를 출력하는 프로그램을 작성하시오.
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

//7. 7. 점수(정수)를 입력 받아서 등급(A, B, C, D, E)을 출력하는 프로그램을 작성하시오.(A:100-80,B:79-60,C:59-40,D:39-20,E:19-0)
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

//8. 어떤 두 자리 수의 자릿수의 순서를 서로 바꾸는 프로그램을 작성하시오.사용자 입력 : 한 개의 두 자리 정수출력 : 자릿수의 순서가 반대로 된 정수
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
	front = a / 10;	//원본의 앞자리
	back = a % 10;//원본의 뒷자리
	result = (back * 10) + front;
	
	printf("Result : %d", result);
}

//9. 1부터 10까지 연속 출력하는 프로그램을 작성하시오.
void Problem_09() {
	printf("Problem_09\n");

	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
	}
}

//10. 10개의 정수를 입력 받아 그 총합을 출력하는 프로그램을 작성하시오.
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

//11. 1부터 100사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총합을 출력하는 프로그램을 작성하시오.(do-while문 사용)
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

//12. 어떤 양의 정수(n)를 입력 받아(만약 0이나 음의 정수를 입력하면, 에러 메시지를 띄운 뒤, 다시 입력하도록 처리), 그 수의 2n을 구하는 프로그램을 작성하시오.
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

//13. 0이 입력될 때까지 계속 정수를 입력 받고, 입력된 모든 숫자들의 총합을 출력하시오.
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

//14. 1부터 9사이의 숫자 하나를 입력 받아 그 숫자의 구구단을 출력하는 프로그램을 작성하시오.(5이면 5단을 출력)
void Problem_14() {
	printf("Problem_14\n");

	int num;

	printf("Enter your number : ");
	scanf("%d", &num);

	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", num, i, num*i);
	}
}

//16. 위의 문제에서 1부터 9사이 이외의 숫자를 사용자가 잘못 입력할 수도 있으니, 이 경우에 잘못된 숫자라는 것을 알려주는 에러 메시지를 출력하고 다시 숫자를 입력 받도록 처리하시오.(입력의 유효성 검사)
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

//17. for문(while)의 무한 반복과 break 문을 이용하여 0이 입력될 때까지 입력 받은 정수 중 가장 큰 정수를 출력하는 프로그램을 작성하시오.
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

//18. 사용자로부터 숫자 하나를 입력받아, 7부터 입력받은 수까지의 모든 정수들의 합을 구하는 프로그램을 작성하시오. 입력받은 숫자가 7보다 작으면 에러 메시지를 출력한다.
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

//19. 1~100 사이의 숫자 하나를 정한 뒤(랜덤으로 생성해도 됨), 10번 이내로 그 숫자를 맞추는 게임을 작성하시오. 
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

//20. 한 특정한 정수의 전체 자릿수의 개수를 결정하는 프로그램을 작성하시오.사용자 입력 : 한 개의 정수 출력 : 자릿수의 개수
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

//21. 1부터 100까지의 합을 for loop을 써서 구하는 프로그램을 작성하시오.
void Problem_21() {
	printf("Problem_21\n");

	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}

	printf("Sum : %d", sum);
}

//22. 1부터 100까지 5의 배수의 합을 for loop을 써서 구하는 프로그램을 작성하시오.
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

//23. 사용자로부터 한 숫자를 입력받아, 입력받은 숫자가 소수인지 아닌지를 검사하는 프로그램을 작성하시오.
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

//24. 100 이하의 소수를 모두 출력하는 프로그램을 작성하시오.
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

//25. 사용자로부터 한 숫자를 입력받아, 입력받은 숫자 이하의 소수들의 합을 구하는 프로그램을 작성하시오.
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

//26. 사용자가 0을 입력할 때까지 여러 숫자를 입력받아, 입력받은 숫자의 최대값을 출력하는 프로그램을 작성하시오.
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

//27. 크기가 10인 정수 배열을 사용하여 학생 10명의 성적을 입력 받은 후, 성적 총합과 평균 점수, 최고 점수, 최저 점수를 출력하는 프로그램을 작성 하시오.
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

//28. 두 개의 문자열을 입력 받아, 첫번째 문자열에 두 번째 문자열이 포함되어 있는 지를 검사하고, 만약 포함 되어 있으면 그 위치를 출력하시오
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


//30. 소문자를 대문자로 변환하는 함수를 작성하시오.
void Problem_30() {
	printf("Problem_30\n");

	char c;
	scanf("%c", &c);

	c = c - 32;
	printf("%c", c);
}

//31. 어떤 한 실수를 정수로 바꾸면서 소수점 이하를 자르는 함수를 작성하시오.
void Problem_31() {
	printf("Problem_31\n");

	float f = 0.0f;

	scanf("%f", &f);

	printf("%d", (int)f);
}

//32. 중수형 데이터를 갖는 3x3 행렬 2개를 입력받아, 그 곲을 출력하는 프로그램 작성하시오!
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

//33. 문자열을 입력하면 문자 개수를 출력하는 프로그램 작성
void Problem_33() {
	printf("Problem_33\n");

	char str[1024] = { 0 };

	scanf("%s", str);

	printf("%d", strlen(str));
}


//***시도했으나 실패함
//34. 링크드 리스트기반의 전화번호부 만들기! 사람 이름과 전화번호 를 맴버로 하는 구조체 만듬 (1. 입력/2. 삭제/3. 출력)
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
		printf("1. 입력\n");
		printf("2. 삭제\n");
		printf("3. 출력\n");
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
	printf("이름 : ");
	scanf("%s", node->name);
	printf("전화번호 : ");
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
	printf("이름 : ");
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