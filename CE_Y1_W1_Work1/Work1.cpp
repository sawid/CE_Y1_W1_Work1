#include <stdio.h>
#include <string.h>

void printHello() {
	printf(" *   *  *****  *      *      *****\n");
	printf(" *   *  *      *      *      *   *\n");
	printf(" *****  *****  *      *      *   *\n");
	printf(" *   *  *      *      *      *   *\n");
	printf(" *   *  *****  *****  *****  *****\n\n");
}

int main() {
	int length;
	char x[100];
	printf("Insert your name : ");
	gets_s(x);
	length = strlen(x);
	if (length < 1 || length > 31)
	{
		printf("You can insert number of Alphabet between 1 - 31 charactor only!");
	}
	else if (length%2 == 0)
	{
		printHello();
		printf(" /////////////WELCOME/////////////\n");
		printf(" /                               /\n");
		printf(" /");
		for (int i = 0; i < (31-length)/2; i++)
		{
			printf(" ");
		}
		printf("%s", x);
		for (int i = 0; i < ((31-length) / 2)+1; i++)
		{
			printf(" ");
		}
		printf("/\n");
		printf(" /                               /\n");
		printf(" /////////////////////////////////\n");
	}
	else
	{
		printHello();
		printf(" /////////////WELCOME/////////////\n");
		printf(" /                               /\n");
		printf(" /");
		for (int i = 0; i < (31 - length) / 2; i++)
		{
			printf(" ");
		}
		printf("%s", x);
		for (int i = 0; i < ((31 - length) / 2); i++)
		{
			printf(" ");
		}
		printf("/\n");
		printf(" /                               /\n");
		printf(" /////////////////////////////////\n");
	}
	return 0;
}