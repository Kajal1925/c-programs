#include<stdio.h>
void main(){
int choice;
float radius,length,breadth,base,height,area;
printf("Define the shape you want to find the area of:\n");
printf("1.Area of CIRCLE(enter 1)\n");
printf("2.Area of RECTANGLE(enter 2)\n");
printf("3.Area of TRIANGLE(enter 3)\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice){
case 1:printf("To find the area of a circle\n");
printf("Enter the radius of the circle\n");
scanf("%f",&radius);
area=3.14*radius*radius;
printf("Area of circle=%.2f\n",area);
break;
case 2:printf("To find the area of a rectangle\n");
printf("Enter the length and breadth of the rectangle\n");
scanf("%f%f",&length,&breadth);
area=length*breadth;
printf("Area of rectangle=%.2f\n",area);
break;
case 3:printf("To find the area of triangle\n");
printf("Enter the base and height of the triangle\n");
scanf("%f%f",&base,&height);
area=0.5*base*height;
printf("Area of triangle=%.2f\n",area);
break;
default:printf("Ivalid Input\n Please enter number from menu\n");
}
getch();}




