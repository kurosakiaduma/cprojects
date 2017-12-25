#include<stdio.h>
#include<conio.h>

int main() {

	/*local variable definition*/

	int a = 100;
	int b = 200;

	switch (a)
	{
	case 100:
		printf("This is part of outer switch\n", a);
		switch (b)
		{
		case 100:
			printf("This is part of inner switch\n",a);
		}
	}

	printf("Ëxact value of a is %d\n", a);
	printf("Exact value of b is %d\n", b);


	_getch();
	return 0;
}