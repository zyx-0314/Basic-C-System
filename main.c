#include <stdio.h>
#include <math.h>

int MainMenu();
int SubMenu();

int main()
{
	MainMenu();
}

int MainMenu()
{
	int number, choice;

	printf("Enter a number: ");
	scanf("%d", &number);

	printf("Choose the number format.\n");
	printf("1. Binary\n");
	printf("2. Decimal\n");
	printf("3. Hexadecimal\n");
	printf("4. Octal\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	if (choice == 1)
	{
		SubMenu();
	}
}
int SubMenu()
{
	int binary_choice;

	printf("What do you want to do?\n");
	printf("1. Binary Conversion\n");
	printf("2.Binary Calculator\n");
	printf("Enter choice: ");
	scanf("%d", &binary_choice);
}