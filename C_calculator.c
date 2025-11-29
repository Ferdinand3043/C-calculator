#include <stdio.h>
#include <string.h>

int main(void)
{

    int num1, num2, addition, subtraction, division, multiplication;
    int nom1, dom1, nom2, dom2, numerator, denominator,fraction_1, fraction_2;
    char answer[10], answer2[10], answer3[10];

    printf("\nFour arithmetic choices:\n");

    char *operations[] = {"addition", "subtraction", "multiplication", "division"};

    int x = sizeof(operations)/sizeof(operations[0]);

    for(int i = 0; i < x; i++){
        printf("%d %s\n", i + 1, operations[i]);    
    };

    printf("\nEnter first number: ");
    scanf("%d,", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nWhat arithmatic operation would you like? ");
    scanf("%s", answer);

    
    if(strcmp(answer, "addition") == 0)
    {
    addition = num1 + num2;
    printf("\nThe sum is %d\n ", addition);
    }    
    else if(strcmp(answer, "subtraction") == 0){
    subtraction = num1 - num2;
    printf("\nThe difference is %d\n ", subtraction);
    }
    else if(strcmp(answer, "multiplication") == 0){
    multiplication = num1 * num2;
    printf("\nThe answer is %d\n ", multiplication);
    }
    else if(strcmp(answer, "division") == 0){
    division = num1 / num2;
    printf("\nThe answer is %d\n ", division);
    }
    else{
    printf("\nInvalid input\n");
    };


    printf("\nAre you looking to calculate any fractions? ");
    scanf("%s", answer2);

    if(strcmp(answer2, "yes") == 0 )
    {
    printf("\nEnter fraction: ");
    scanf("%d/%d", &nom1, &dom1);

    printf("\nEnter second fraction: ");
    scanf("%d/%d", &nom2, &dom2);

    printf("\nWhat arithmatic operation would you like? ");
    scanf("%s", answer3);
    }

    if(strcmp(answer2, "no") == 0){
    printf("\nTake care! ");
    }   

    if(strcmp(answer3, "addition") == 0){
    numerator = (nom1 * dom2) + (nom2 * dom1);
    denominator = dom1 * dom2;
    fraction_1 = numerator;
    fraction_2 = denominator;
    printf("\nThe answer is: %d/%d", fraction_1, fraction_2);  
    }
    else if(strcmp(answer3, "subtraction") == 0){
    numerator = (nom1 * dom2) - (nom2 * dom1);
    denominator = dom1 * dom2;
    fraction_1 = numerator;
    fraction_2 = denominator;
    printf("\nThe answer is: %d/%d", fraction_1, fraction_2);  
    }
    else if(strcmp(answer3, "multiplication") == 0){
    numerator = (nom1 * nom2);
    denominator = dom1 * dom2;
    fraction_1 = numerator;
    fraction_2 = denominator;
    printf("\nThe answer is: %d/%d", fraction_1, fraction_2);  
    }

}