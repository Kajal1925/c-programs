#include<stdio.h>
void main(){
float angle_1,angle_2,angle_3,sum;
printf("Enter the angles of the triangles :\n");
scanf("%f%f%f",&angle_1,&angle_2,&angle_3);
sum=angle_1+angle_2+angle_3;
if(sum==180&&angle_1>0&&angle_2>0&&angle_3>0){
printf("The triangle is VALID \n");}
else{
printf("The triangle is NOT Valid \n");}
getch();}