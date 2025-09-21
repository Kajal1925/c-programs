#include<stdio.h>
void main(){
int choice;
double num1,num2,result;
do{
printf("\n   Arithmetic Operations    \n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("Enter you choice:\n");
scanf("%d",&choice);
switch(choice){
case 1:printf("For Addition\n");
printf("Enter two numbers:\n");
scanf("%lf%lf",&num1,&num2);
result=num1+num2;
printf("Result=%.2lf\n",result);
break;
case 2:printf("For Subtraction\n");
printf("Enter two numbers:\n");
scanf("%lf%lf",&num1,&num2);
result=num1-num2;
printf("Result=%.2lf\n",result);
break;
case 3:printf("For Multiplication\n");
printf("Enter two numbers:\n");
scanf("%lf%lf",&num1,&num2);
result=num1*num2;
printf("Result=%.2lf\n",result);
break;
case 4:printf("For Division\n");
printf("Enter two numbers:\n");
scanf("%lf%lf",&num1,&num2);
if(num2==0){
printf("Denominator cannot be ZERO\n");}
else{result=num1/num2;
printf("Result=%.2lf\n",result);}
break;
default:printf("Invalid Choice\n Please enter a number between 1-5\n");
break;}
}while(choice!=5);
getch();}

