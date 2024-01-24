#include <stdio.h>

int main()
{

	int age;
	float gpa;
	char grade;
	printf("Enter your age: ");
	scanf("%i", &age);    // 14\n3.14\nA\n
	fflush(stdin);

	printf("Enter your gpa: ");
	scanf(" %f", &gpa);
	fflush(stdin);

	printf("Enter your grade: ");
	scanf(" %c", &grade);

	printf("My age is %i", age);
	printf("My gpa is %f", gpa);
	printf("My grade is %c", grade);
        return 0;

}
