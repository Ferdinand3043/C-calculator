#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Calculator.h"


void greeting(){

    char name[20];

    printf("\nWelcome to version 2 of my calculator!");
    printf("\n----------------------------------------");
    printf("\nPress enter to continue.....\n");
    getchar();

    printf("\n\nTo get started type your name: ");
    fgets(name, 19, stdin);

    printf("\nIt is nice to meet you %s", name); 
    printf("\nBelow are the arithmetic options for this calculator:\n");
};

void decision(){

    printf("\nProvide first number: ");
    scanf("%d", &num1);

    printf("\nProvide second number: ");
    scanf("%d", &num2);

    printf("\nWhat operation would you like? ");
    scanf("%s", answer);

   if(strcmp(answer, "addition") == 0 || strcmp(answer, "Addition") == 0 ||
      strcmp(answer, "ADDITION") == 0) {
      int add(int num1, int num2);
      printf("\nAnswer is: %d\n", add(num1, num2));
    }
    else if(strcmp(answer, "subtraction") == 0 || strcmp(answer, "Subtraction") == 0 ||
      strcmp(answer, "SUBTRACTION") == 0) {
      int sub(int num1, int num2);
      printf("\nThe difference is %d\n ", sub(num1,num2));
    }
    else if(strcmp(answer, "multiplication") == 0 || strcmp(answer, "Multiplication") == 0 ||
      strcmp(answer, "MULTIPLICATION") == 0) {
      int mul(int num1, int num2);
      printf("\nThe answer is %d\n ", mul(num1,num2));
    }
    else if(strcmp(answer, "division") == 0 || strcmp(answer, "Division") == 0 || 
      strcmp(answer, "DIVISION") == 0) {
      int divi(int num1, int num2);
      printf("\nThe answer is %d\n ", divi(num1,num2));
    }
    else{
        printf("\nInvalid input!\n");
        exit(1);
    };
}

void decision_2(){

  printf("\nAre you looking to calculate any fractions? ");
  scanf("%s", answer2);

  if(strcmp(answer2, "yes") == 0 || strcmp(answer2, "Yes") == 0 ||
    strcmp(answer2, "YES") == 0 ) {

    printf("\nEnter fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    printf("\nEnter second fraction: ");
    scanf("%d/%d", &numerator_2, &denominator_2);


  printf("\nWhat arithmatic operation would you like? ");
  scanf("%s", answer3);

  if(strcmp(answer3, "addition") == 0 || strcmp(answer3, "Addition") == 0 || 
    strcmp(answer3, "ADDITION") == 0) {
    int add_frac(int nom1_result, int dom1_result);
    printf("\nAnswer: %d\n", add(nom1_result, dom1_result));  
  
  }
  };
}

int add(int num1, int num2){

    return num1 + num2;
}

int sub(int num1, int num2){

    return num1 - num2;
}

int divi(int num1, int num2){

    return num1 / num2;
}

int mul(int num1, int num2){

    return num1 * num2;

}

int add_frac(int nom1_result, int dom1_result){

  nom1_result = (numerator * denominator_2) + (numerator_2 * denominator);
  dom1_result = denominator * denominator_2;

  return (nom1_result,dom1_result);
}
