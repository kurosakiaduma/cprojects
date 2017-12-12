#include<stdio.h>
#include<conio.h>

int main()
{
	/*scanf("format string", list of address of variables);*/

	int age;

	printf("Enter your age here \n");

	scanf_s("%d", &age);
	printf("Your age is %d", age);

	_getch();
	return 0;

}