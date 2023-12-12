#include <stdio.h>
#include <math.h>

int MainMenu();
int SubMenu(char[]);	  // reusable, can accept a string to be used for the sub menu
int BinaryToDecimal(int); //functions for convertions
void DecimalToBinary(int);

int main()
{
	int number, choice, sub_choice = 0;
	choice = MainMenu();// should receive the return value of MainMenu

	printf("Enter a number: ");
	scanf("%d", &number);

	if (choice == 1)
	{
		sub_choice = SubMenu("Binary");
	}
	else if (choice == 2)
	{
		sub_choice = SubMenu("Decimal");
	}
	else if (choice == 3)
	{
		sub_choice = SubMenu("Hexadecimal");
	}
	else if (choice == 4)
	{
		sub_choice = (SubMenu("Octal");
	}
	else
	{
		printf("Invalid Choice!");
	}
}

int MainMenu()
{
	int choice;
	
	printf("Choose the number format.\n");
	printf("1. Binary\n");
	printf("2. Decimal\n");
	printf("3. Hexadecimal\n");
	printf("4. Octal\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	return choice;
}
int SubMenu(char format[100])
{
	int choice;

	printf("What do you want to do?\n");
	printf("1. %s Conversion\n", format);
	printf("2. %s Calculator\n", format);
	printf("Enter choice: ");
	scanf("%d", &choice);
	return choice;
}
int BinaryToDecimal(int number)
{
	int decimal = 0, i = 0, rem;

	while (number != 0)
	{
		rem = number % 10;
		number /= 10;
		decimal += rem * pow(2, i);
		++i;
	}
	return decimal;
}
void DecimalToBinary(int decimal)
{
	int Binary[512]; //Assuming a 512-bit binary representation
	int i = 0, j;

	do
	{
		binary[i] = decimal % 2;
		decimal = decimal / 2;
		i++;
	} while (decimal > 0);

	printf("Binary: ");
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}
	printf("\n");
}