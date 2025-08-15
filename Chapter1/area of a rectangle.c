/* Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. 
b. Using inputs supplied by the user. */

    //Using hard coded inputs.
    //int l, w, area;
    //l=2;
    //w=4;
    //area=l*w;
    //printf("Area of rectangle is %d", area);

    //Using inputs supplied by the user.
    #include<stdio.h>
    int main(){
    int length, width, area;
    printf("Enter the length\n");
    scanf("%d", &length);
    printf("Enter the width \n");
    scanf("%d", &width);
    area=length*width;
    printf("Area of rectangle is %d\n", area);
}