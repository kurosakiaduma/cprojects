#include<stdio.h>
#include<conio.h>

int main()
{

	/*locl variable  definition*/
	int i, j;

	for (i = 2; i < 100; i++) {

		for (j = 2; j < 100; j++)

			if (!(i%j)) break; //if factor found, not prime
		if (j > (i / j)) printf("%d is a prime number\n", i);
	}


	_getch();
	return 0;
}