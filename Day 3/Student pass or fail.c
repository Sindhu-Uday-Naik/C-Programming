/*2. Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user.*/ 
#include <stdio.h>
int main(){
    int marks1, marks2, marks3, total;
    float avg;
    printf("Enter the marks of subject 1\n");
    scanf("%d",&marks1);
    printf("Enter the marks of subject 2\n");
    scanf("%d",&marks2);
    printf("Enter the marks of subject 3\n");
    scanf("%d",&marks3);

    total=marks1+marks2+marks3;
    printf("%d\n",total);
    avg=total/3.0;
    printf("%f\n", avg);

    if (avg>=40 && marks1>=33 && marks2>=33 && marks3>=33)
    {
        printf("PASS\n");
    }else
    {
        printf("FAIL\n");
    }
    
    
}