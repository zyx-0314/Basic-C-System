#include <stdio.h>
#include <stdlib.h>

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    // Extracting the last digit of the binary number
    while (temp) {
        int last_digit = temp % 10;
        // Removing the last digit from the binary number
        temp = temp / 10;

        // Multiplying the last digit with the base value
        // and adding it to the decimal value
        dec_value += last_digit * base;

        // Updating the base value by multiplying it by 2
        base = base * 2;
    }

    // Returning the decimal value
    return dec_value;
}

int decimalToBinary(int N)
{
    // To store the binary number
    unsigned long long int B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        unsigned long long int c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        // Count used to store exponent value
        cnt++;
    }
    return B_Number;
}

void binaryAddition(int number, int second_number)
{
    int decimal_1 = binaryToDecimal(number);
    int decimal_2 = binaryToDecimal(second_number);
    int sum = number + second_number;
    int binarysum = decimalToBinary(sum);
    printf("The sum of the 2 binary numbers is: %d", binarysum);
}

int binarySubtraction (number, second_number)
{
    int decimal_1 = binaryToDecimal(number);
    int decimal_2 = binaryToDecimal(second_number);
    int difference = decimal_1 - decimal_2;
    int binary_difference = decimalToBinary(difference);
    return binary_difference;
}

int main ()
{
    char number[632];
    int decimal;
    int binary;
    int number_format;
    unsigned int hex;
    unsigned int octal;
    int binarychoice;
    int conversion_Choice;
    int op_choice;
    int second_number;

    printf("Enter a number: ");
    scanf("%s", &number);

    printf("Choose the number format:\n");
    printf("1. Binary\n");
    printf("2. Decimal\n");
    printf("3. Hexadecimal\n");
    printf("4. Octal\n");
    printf("Enter your choice: ");

    scanf("%d", &number_format);

    if (number_format == 1)
    {
        printf("What do you want to do?\n");
        printf("1. Binary Conversion\n");
        printf("2. Binary Calculations\n");
        printf("3. Binary Complement\n");

        scanf("%d", &binarychoice);

        switch (binarychoice)
        {
        case 1: // Binary Conversion
            printf("What Convertion do you want to do? :\n");
            printf("1. Binary to Decimal\n");
            printf("2. Binary to Hexidecimal\n");
            printf("3. Binary to Octal\n");
            printf("Enter your choice: ");

            scanf("%d", &conversion_Choice);

            switch (conversion_Choice)
            {
            case 1:
                decimal = binaryToDecimal(number);
                printf("Binary: %d\nDecimal: %d\n",number, decimal);
                break;
                /*
            case 2: // Binary to hexadecimal
                hex = binaryToHex(number);
                printf("Binary: %d\nHexadecimal: %x\n",number, hex);
                break;
            case 3: // Binary to octal
                octal = binaryToOctal(number);
                printf("Binary: %d\nOctal: %o\n",number, octal);
                break;
            default:
                printf("Invalid choice\n");
                break;
                */
            }
        case 2: //Binary Operations
            printf("Choose the operation:\n");
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("Enter your choice: ");

            scanf("%d", &op_choice);

            switch (op_choice)
            {
            case 1: // Binary addition
                printf ("Enter the second binary number:");

                scanf("%d", &second_number);

                binaryAddition(number, second_number);


                break;
                /*
            case 2: // Binary subtraction
                printf ("Enter the second binary number:");

                scanf("%d", &second_number);

                printf("The difference of the 2 binary numbers is: %d", binary_difference);
                break;
            case 3: // Binary multiplication
                printf ("Enter the second binary number:");
                scanf("%d", &second_number);

                int binaryMultiplication (number, second_number)
                {
                int decimal_1 = binaryToDecimal(number);
                int decimal_2 = binaryToDecimal(second_number);
                int product = decimal_1 + decimal_2 ;
                int binary_product = decimalToBinary(product);
                }
                printf("The product of the 2 binary numbers is: %d", binary_product);
                break;
            case 4: // Binary division
                printf ("Enter the second binary number:");
                scanf("%d", &second_number);

                int binaryDivision(number, second_number)
                {
                int decimal_1 = binaryToDecimal(number);
                int decimal_1 = binaryToDecimal(second_number);
                int quotient = decimal_1 / decimal_2;
                int binary_quotient = decimalToBinary(quotient);
                }
                printf("The quotient of the 2 binary numbers is: %d", binary_quotient);
                break;
            default:
                printf("Invalid choice\n");
                break;
                */
            }
            break;
            /*
        case 3: // Binary Complement
            printf("Enter 1 if first complement and 2 if second complement");
            int comchoice;
            scanf("%d", &comchoice);

            long long int complement = 0;
            long long int binaryNum; // Add the declaration of binaryNum

            if (scanf("%d", &comchoice) != 1) {
                printf("Invalid input!\n");
                return 1; // Exit the program with an error status
            }
            switch (comchoice)
            {
            case 1:
                complement = ~binaryNum;
                printf("First complement: %lld\n", complement);
                break;
            case 2:
                complement = ~binaryNum + 1;
                printf("Second complement: %lld\n", complement);
                break;
            default:
                printf("Invalid choice!\n");
                break;
            }
            break;
            */
        }
    }
    /*
    else if(number_format == 2)
    {
        printf("What do you want to do?");
        printf("1. Decimal Conversion");
        printf("2. Decimal Calculations");
        printf("3. Decimal Complement");
        int decimal_choice;
        scanf("%d", &decimal_choice);
        switch (decimal_choice)
        {
        case 1: // Decimal Conversion
            printf("What Convertion do you want to do? :\n");
            printf("1. Decimal to Binary\n");
            printf("2. Decimal to Hexidecimal\n");
            printf("3. Decimal to Octal\n");
            printf("Enter your choice: ");
            int conversion_Choice;
            scanf("%d", &conversion_Choice);
            switch (conversion_Choice)
            {
            case 1:
                binary = decimalToBinary(number);
                printf("Decimal: %d\nBinary: %d\n",number, binary);
                break;
            case 2: // Binary to hexadecimal
                hex = decimalToHex(number);
                printf("Binary: %d\nHexadecimal: %x\n",number, hex);
                break;
            case 3: // Binary to octal
                 octal = decimalToOctal(number);
                 printf("Binary: %d\nOctal: %o\n",number, octal);
                 break;
             default:
                 printf("Invalid choice\n");
                 break;
            }
        case 2: //Decimal Operations
            printf("Choose the operation:\n");
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("Enter your choice: ");
            int op_choice;
            scanf("%d", &op_choice);
            switch (op_choice)
            {
            case 1: // Decimal addition
                printf ("Enter the second decimal number:");
                int second_number;
                scanf("%d", &second_number);
                int dec_sum= number +second_number ;
                printf("The sum of the 2 binary numbers is: %d", dec_sum);
                break;
            case 2: // Decimal subtraction
                printf ("Enter the second binary number:");
                scanf("%d", &second_number);
                int dec_sub = number - second_number;
                printf("The difference of the 2 binary numbers is: %d", dec_sum);
                break;
            case 3: // Decimal multiplication
                printf ("Enter the second binary number:");
                scanf("%d", &second_number);
                int dex_product= number * second_number;
                printf("The product of the 2 binary numbers is: %d", dec_product);
                break;
            case 4: // Decimal division
                printf ("Enter the second binary number:");
                scanf("%d", &second_number);
                int dec_quotient= number / second_number;
                printf("The quotient of the 2 binary numbers is: %d", binary_quotient);
                break;
            default:
                printf("Invalid choice\n");
                break;
            }
            break;
        case 3: // Decimal Complement
            decimal= decimalToBinary(number);
            printf("Enter 1 if first complement and 2 if second complement");
            int comchoice;
            scanf("%d", &comchoice);
            long long int complement = 0;
            long long int decimalNum; // Add the declaration of binaryNum
            if (scanf("%d", &comchoice) != 1) {
                printf("Invalid input!\n");
                return 1; // Exit the program with an error status
            }
            switch (comchoice)
            {
            case 1:
                complement = ~decimalNum;
                printf("First complement: %lld\n", complement);
                break;
            case 2:
                complement = ~decimalNum + 1;
                printf("Second complement: %lld\n", complement);
                break;
            default:
                 printf("Invalid choice!\n");
                 break;
            }
            break;
        }
     }
     */
     return 0;
}
