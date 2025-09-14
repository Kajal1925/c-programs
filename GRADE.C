#include<stdio.h>
void main(){
float marks;
char grade;
printf("Enter marks(out of 100):\n");
scanf("%f",&marks);
if(marks>=0&&marks<30){
grade='F';
printf("The grade is :%c\n",grade);}
else if(marks>=30&&marks<50){
grade='E';
printf("The grade is :%c\n",grade);}
else if(marks>=50&&marks<70){
grade='D';
printf("The grade is :%c\n",grade);}
else if(marks>=70&&marks<80){
grade='C';
printf("The grade is:%c\n",grade);}
else if(marks>=80&&marks<90){
grade='B';
printf("The grade is :%c\n",grade);}
else if(marks>=90&&marks<=100){
grade='A';
printf("The grade is :%c\n",grade);}
else{printf("The input is wrong!!\n please enter valid marks(0-100)\n");}
getch();}