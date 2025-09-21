#include<stdio.h>
void main(){
int num_1,num_2;
printf("Enter numbers(a and b):");
scanf("%d%d",&num_1,&num_2);
switch(num_1>num_2){
case 1:printf("%d is greater\n",num_1);
break;
case 0:printf("%d is greater\n",num_2);
break;}
getch();}