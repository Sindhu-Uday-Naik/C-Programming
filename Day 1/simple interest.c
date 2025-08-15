/*4. Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest.*/
#include<stdio.h>
int main(){
    //SI=PTR/100
    int P=2000, T=2, R=4;
    float SI;
    SI=(P*T*R)/100.0;
    printf("Simple interest is %f",SI);
}