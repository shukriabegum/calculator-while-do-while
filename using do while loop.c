
#include<stdio.h>
#include<math.h>
int main()
{
   char op,choice='y';
    int num1,num2;
      do{
    printf("Enter an operator(+,-,*,/,%): ");
    scanf(" %c",&op);
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);





    switch(op)
    {
        case'+':

        printf("%d + %d : %d",num1,num2,num1+num2);
        break;
    case'-':
        printf("%d - %d : %d",num1,num2,num1-num2);
        break;
        case '*':
        printf("%d * %d : %d",num1,num2,num1*num2);
        break;

        case'%':
        printf("%d %% %d : %d",num1,num2,num1%num2);
        break;
        case'/':
        printf("%d / %d : %d",num1,num2,num1/num2);
        break;
    default:
        printf("Invalid");}
        printf("\nDo you want to calculate continue?(y/n):\n ");
        scanf(" %c",&choice);
    }while(choice=='y'|| choice=='Y' );
    printf("Calculator exited. Thank you\n");
        return 0;
}
