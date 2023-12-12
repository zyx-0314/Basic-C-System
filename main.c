#include <stdio.h>
#include <math.h>

int MainMenu();
int SubMenu(char[]);	  // reusable, can accept a string to be used for the sub menu
int BinaryToDecimal(int); //functions for convertions
void DecimalToBinary(int);
void DecimalToHexadecimal(int);
void DecimalToOctal(int);

int main()
{
	int number, choice, sub_choice = 0;
	int decimal, hexadecimal, octal, binary;
	int conversion_choice;

	choice = MainMenu(); // should receive the return value of MainMenu

	printf("Enter a number: ");
	scanf("%d", &number);

	if (choice == 1) // selection of sub-menu
	{
		sub_choice = SubMenu("Binary");

		if (sub_choice == 1)
		{
			printf("What kind of converstion do you want to do?\n");
			printf("1. Binary to Decimal\n");
			printf("2. Binary to Hexadecimal\n");
			printf("3. Binary to Octal\n");
			printf("Enter your choice: ");
			scanf("%d", &conversion_choice);

			switch (conversion_choice)
			{
			case1:
				decimal = BinaryToDecimal(number);
				printf("Binary: %d\nDecimal: %d", number, decimal);
				break;
			default:
				break;
			}
		}
		else if (sub_choice == 2)
		{
		}
		else
		{
			printf("Invalid choice!");
		}
	}

	else if (choice == 2)
	{
		sub_choice = SubMenu("Decimal");

		printf("What kind of converstion do you want to do?\n");
		printf("1. Decimal to Binary\n");
		printf("2. Decimal to Hexadecimal\n");
		printf("3. Decimal to Octal\n");
		printf("Enter your choice: ");
		scanf("%d", &conversion_choice);

		if (sub_choice == 1)
		{
			printf("Decimal: %d\n", number);
			DecimalToBinary(number);
		}
		else if (sub_choice == 2)
		{
			printf("Decimal: %d\n", number);
			DecimalToHexadecimal(number);
		}
		else if (sub_choice == 3)
		{
			printf("Decimal: %d\n", number);
			DecimalToOctal(number);
		}
		else
		{
			printf("Invalid choice!");
		}
	}

	else if (choice == 3)
	{
		sub_choice = SubMenu("Hexadecimal");
	}
	else if (choice == 4)
	{
		sub_choice = SubMenu("Octal");
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
	int binary[512]; //Assuming a 512-bit binary representation
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

void DecimalToHexadecimal(int decimal)
{
	char hexadecimal[20];
	int i = 0;
	while (decimal != 0)
	{
		int rem = 0;
		rem = decimal % 16;
		if (rem < 10)
		{
			hexadecimal[i] = rem + 48;
			i++;
		}
		else
		{
			hexadecimal[i] = rem + 55;
			i++;
		}
		decimal /= 16;
	}
	printf("Hexadecimal: ");
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%c", hexadecimal[j]);
	}
	printf("\n");
}
void DecimalToOctal(int decimal)
{
	int octal_num = 0, i = 1;
	while (decimal != 0)
	{
		octal_num += (decimal % 8) * i;
		decimal /= 8;
		i *= 10;
	}
	printf("Octal: %d\n", octal_num);
}