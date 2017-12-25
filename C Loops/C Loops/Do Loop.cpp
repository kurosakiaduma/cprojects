#include<stdio.h>
#include<conio.h>

int main() {
	/*local variable definition*/
	int a = 10;

	/*do loop execution*/
	do
	{
		printf("value of a is %d\n",a);
		a++;
	} while (a < 20);

	_getch();
	return 0;
}