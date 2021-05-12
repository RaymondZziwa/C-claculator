#include <stdio.h>
main(){
    int num1,num2;
    int result=0;
    char ch;
    printf("Enter first number:\n");
    scanf("%d",&num1);
    printf("Enter second number:\n");
    scanf("%d",&num2);
    printf("Enter operator:\n");
    scanf(" %c",&ch);

    switch(ch)
    {
        case '+':
        result=num1+num2;
        printf("The sum is : %d",result);
        break;

        case '-':
        result=num1-num2;
        printf("The difference is : %d",result);
        break;

        case '/':
        result=num1/num2;
        printf("The quotient is : %d",result);
        break;

        case '*':
        result=num1*num2;
        printf("The product is : %d",result);
        break;
        default:
            printf("invalid operator");
    }
}
