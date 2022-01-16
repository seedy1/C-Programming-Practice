#include <stdio.h>

int main()
{

    // char operator[9];
    int choice;
    double firstNumber;
    double secondNumber;
    int result;

    printf("Enter and operator you want.\n");
    printf("Example; 1 for add, 2 for substract, 3 for multiply, 4 for divide \n");

    scanf("%i", &choice);
    // printf("%s", operator);

    printf("what two numbers do you want to %i \n", choice);
    scanf("%lf %lf", &firstNumber, &secondNumber);

    switch(choice){
    case 1:
        /* code */
        printf("%lf + %lf = %lf \n", firstNumber, secondNumber, firstNumber+secondNumber);
        break;
    
    default:
    printf("Errrrr... I dunno");
        break;
    }

    /* code */
    return 0;
}
