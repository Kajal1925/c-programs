#include<stdio.h>
void main(){
int choice;
float side,radius,length,breadth,height,volume;
printf("Define the shape you want to find the volume of:\n");
printf("1.Area of SPHERE(enter 1)\n");
printf("2.Area of CUBOID(enter 2)\n");
printf("3.Area of CUBE(enter 3)\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice){
case 1:printf("To find the volume of a sphere\n");
printf("Enter the radius of the sphere\n");
scanf("%f",&radius);
volume=(4/3)*3.14*radius*radius*radius;
printf("Volume of sphere=%.2f\n",volume);
break;
case 2:printf("To find the volume of cuboid\n");
printf("Enter the length,breadth and height of the cuboid\n");
scanf("%f%f%f",&length,&breadth,&height);
volume=length*breadth*height;
printf("Volume of cuboid=%.2f\n",volume);
break;
case 3:printf("To find the volume of cube\n");
printf("Enter the side of the cube\n");
scanf("%f",&side);
volume=side*side*side;
printf("Volume of cube=%.2f\n",volume);
break;
default:printf("Ivalid Input\n Please enter number from menu\n");
}
getch();}




