#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Calculator_functions.h"
#include "Calculator.c"

int main(void)
{
    printf("\nFour arithmetic choices:\n");

    char *operations[] = {"addition", "subtraction", "multiplication", "division"};

    int x = sizeof(operations)/sizeof(operations[0]);

    for(int i = 0; i < x; i++){
        printf("%d %s\n", i + 1, operations[i]);    
    };
    
        
    printf("\nAre you looking to calculate any whole numbers? ");
    scanf("%s", answer);

        
    if(strcmp(answer, "yes") == 0 || strcmp(answer, "Yes") == 0 ||
        strcmp(answer, "YES") == 0 ){ 
        
        printf("\nEnter first number: ");
        fnum = scanf("%d", &num1);
        if (fnum != 1){
            printf("\nInvalid Input!");
            exit(1);
    }        
        printf("Enter second number: ");
        snum = scanf("%d", &num2);
        if(snum != 1){
            printf("\nInvalid Input");
            exit(1);
    }
    };

    if(strcmp(answer, "no") == 0 || strcmp(answer, "No") == 0 ||
        strcmp(answer, "NO") == 0 ){ 
        printf("\nTake care!");
        exit(1);
    };

    printf("\nWhat arithmatic operation would you like? ");
    scanf("%s", answer2);
    

    
    if(strcmp(answer2, "addition") == 0 || strcmp(answer2, "Addition") == 0 ||
        strcmp(answer2, "ADDITION") == 0) {
        int add(int num1, int num2);
        printf("\nThe sum is %d\n ", add(num1,num2));
    }    
    else if(strcmp(answer2, "subtraction") == 0 || strcmp(answer2, "Subtraction") == 0 ||
        strcmp(answer2, "SUBTRACTION") == 0) {
        int sub(int num1, int num2);
        printf("\nThe difference is %d\n ", sub(num1,num2));
    }
    else if(strcmp(answer2, "multiplication") == 0 || strcmp(answer2, "multiplication") == 0 ||
        strcmp(answer2, "multiplication") == 0) {
        int mul(int num1, int num2);
        printf("\nThe answer is %d\n ", mul(num1,num2));
    }
    else if(strcmp(answer2, "division") == 0 || strcmp(answer2, "division") == 0 || 
        strcmp(answer2, "division") == 0) {
        int divi(int num1, int num2);
        printf("\nThe answer is %d\n ", divi(num1,num2));
    }
    else{
        printf("\nInvalid input!\n");
        exit(1);
    };


    printf("\nAre you looking to calculate any fractions? ");
    scanf("%s", answer3);

    if(strcmp(answer3, "yes") == 0 || strcmp(answer3, "Yes") == 0 ||
       strcmp(answer3, "YES") == 0 ) {

    printf("\nEnter fraction: ");
    scanf("%d/%d", &nom1, &dom1);

    printf("\nEnter second fraction: ");
    scanf("%d/%d", &nom2, &dom2);

    if(strcmp(answer3, "no") == 0 || strcmp(answer3, "No") == 0 ||
       strcmp(answer3, "NO") == 0) {
        printf("\nTake care! ");
    }   

    printf("\nWhat arithmatic operation would you like? ");
    scanf("%s", answer4);
    }


    if(strcmp(answer4, "addition") == 0 || strcmp(answer4, "addition") == 0 || 
       strcmp(answer4, "addition") == 0) {
       int add_frac(int nom1, int dom2, int nom2, int dom1);
       printf("\nThe answer is: %d/%d", fraction_1, fraction_2);  
    }
    else if(strcmp(answer4, "subtraction") == 0){
    numerator = (nom1 * dom2) - (nom2 * dom1);
    denominator = dom1 * dom2;
    fraction_1 = numerator;
    fraction_2 = denominator;
    printf("\nThe answer is: %d/%d", fraction_1, fraction_2);  
    }
    else if(strcmp(answer4, "multiplication") == 0){
    numerator = (nom1 * nom2);
    denominator = dom1 * dom2;
    fraction_1 = numerator;
    fraction_2 = denominator;
    printf("\nThe answer is: %d/%d", fraction_1, fraction_2);  
    }

 
}