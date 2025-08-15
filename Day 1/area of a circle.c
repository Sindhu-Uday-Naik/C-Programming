/*2. Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height. */
#include<stdio.h>
int main(){
    //area
    int r=2.0;
    float area;
    r=2.0;
    area=3.14*r*r;
    printf("Area of circle is %f",area);
    //volume
    float h, volume;
    h=4.0;
    volume=3.14*r*r*h;
    printf("Volume of circle is %f",volume);
}