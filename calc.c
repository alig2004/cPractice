/*
Program: Simple calculator
Author: Alison Gleeson
Date: 11/07/2024
*/


#include <stdio.h>

int main()
{
    char op = ' ';
    float num1 = 0;
    float num2 = 0;
    char cont = 'y';


    //do while loop to allow for multiple sums
    do
    {
        //asking user for their numbers
        printf("\nPlease enter your two numbers:\n");
        scanf("%f", &num1);
        scanf("%f", &num2);


        //asking user for their operand
        printf("\nPlease enter your operand:\n");
        while(getchar() != '\n');
        scanf("%c", &op);


        //switch to find answer and output sum
        switch (op)
        {
            
            case '+':
            {
                printf("\n%.3f + %.3f = %.3f", num1, num2, (num1 + num2));
                break;
            }
            case '-':
            {
                printf("\n%.3f - %.3f = %.3f", num1, num2, (num1 - num2));
                break;
            }
            case 'x':
            case 'X':
            case '*':
            {
                printf("\n%.3f * %.3f = %.3f", num1, num2, (num1 * num2));
                break;
            }
            case '/':
            {
                printf("\n%.3f / %.3f = %.3f", num1, num2, (num1 / num2));
                break;
            }
            default:
            {
                printf("\nInvalid operator entered");
                break;
            }

        }//end switch


        printf("\nWould you like to do another sum? (y/n)\n");
        while(getchar() != '\n');
        scanf("%c", &cont);

    } while (cont == 'y'); //end while

    printf("\nCalculator finished");

    return 0;

}//end main()
