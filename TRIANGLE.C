#include<stdio.h>
void main(){
int side_1,side_2,side_3;
printf("Enter the sides of the triangle:\n");
scanf("%d%d%d",&side_1,&side_2,&side_3);
if(side_1==side_2&&side_2==side_3){
printf("The triangle is an EQUILATERAL triangle\n");}
else if(side_1==side_2||side_2==side_3||side_1==side_3){
printf("The triangle is an ISOSCELES triangle\n");}
else{printf("The triangle is a SCALENE triangle\n");}
getch();}