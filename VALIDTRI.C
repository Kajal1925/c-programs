#include<stdio.h>
void main(){
int angle_1,angle_2,angle_3;
printf("Enter the angles of a triangle\n");
scanf("%d%d%d",&angle_1,&angle_2,&angle_3);
if(angle_1>0&&angle_2>0&&angle_3>0&&(angle_1+angle_2+angle_3==180)){
printf("The triangle is VALID\n");}
else{printf("The triangle is INVALID\n");}
getch();}