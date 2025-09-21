#include<stdio.h>
void main(){
int num_1,num_2,num_3;
int max_val;
printf("Enter numbers(a,b and c):");
scanf("%d%d%d",&num_1,&num_2,&num_3);
if(num_1>=num_2&&num_1>=num_3){
max_val=0;}
else if(num_2>=num_1&&num_2>=num_3){
max_val=1;}
else{max_val=2;}
switch(max_val){
case 0:printf("%d is the maximum number.\n",num_1);
break;
case 1:printf("%d is maximum number.\n",num_2);
break;
case 2:printf("%d is the maximum number.\n",num_3);
break;
default:printf("Invalid Input\n");}
getch();}