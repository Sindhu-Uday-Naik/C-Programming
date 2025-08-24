/*5. Write a program to determine whether a character entered by the user is 
lowercase or not.*/
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    if (ch>=97 && ch<=122)
    {
        printf("It is a lower case");
    }
    else
    {
        printf("It is not a lowercase");
    }
    
    
}