/*3. Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit).*/
#include<stdio.h>
int main(){
  //F= (9/5)C+32
  float C, F;
  C=37.0;
  F=(9.0/5.0)*C+32.0;
  printf("Temperature in Farenheit is %f",F);
} 