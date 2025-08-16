//#include<stdio.h>
//int main(){
//    int a=2, b=3, c=4.5, d=a/b;
//    float e=6, f=3.4, g=a+f;
//    printf("%d %d %d %d %f %f %f",a, b, c, d, e, f, g);
//}

//Write a program to check whether a number is divisible by 97 or not.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if (num%97==0)
    {
        printf("%d is divisible by 97\n", num);
    }
    else
    {
        printf("%d is not divisible by 97\n", num);
    }
    
}