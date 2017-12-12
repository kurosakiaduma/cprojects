#include<stdio.h>
#include<conio.h>

int main()
{
	/*scanf("format string", list of address of variables);*/

	int age;
	float weight;


	printf("Enter your age and weight here \n");

	scanf_s("%d %f", &age, &weight);
	printf("Your age is %d \n Your weight is %f", age, weight);

	_getch();
	return 0;

}