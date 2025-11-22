#include <stdio.h>
#include <string.h>

int main(void)
{

    int num1, num2, addition, subtraction, division, multiplication;
    char answer[100], fraction[100];

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
    return 0;
        
    }
}