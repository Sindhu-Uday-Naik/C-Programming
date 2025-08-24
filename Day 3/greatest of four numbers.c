/*6. Write a program to find greatest of four numbers entered by the user.*/
#include <stdio.h>
int main(){
    int num1, num2, num3, num4;
    printf("Enter number 1\n");
    scanf("%d",&num1);
    printf("Enter number 2\n");
    scanf("%d",&num2);
    printf("Enter number 3\n");
    scanf("%d",&num3);
    printf("Enter number 4\n");
    scanf("%d",&num4);

    if (num1>num2 && num1>num3 && num1>num4)
    {
        printf("%d is greater\n", num1);
    }
    else if (num2>num1 && num2>num3 && num2>num4)
    {
        printf("%d is greater\n", num2);
    }
    else if (num3>num1 && num3>num2 && num3>num4)
    {
        printf("%d is greater\n", num3);
    }
    else
    {
        printf("%d is greater\n", num4);
    }
    
}