#include<stdio.h>
void main(){
int age;
printf("Enter your AGE:\n");
scanf("%d",&age);
if(age>=18){
printf("The person is eligible to VOTE\n");}
else if(age>0&&age<18){
printf("The person is NOT eligible to VOTE\n");}
else {printf("Invaild Input!!\n Please enter correct age\n");}
getch();}