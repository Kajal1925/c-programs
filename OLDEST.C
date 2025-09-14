#include<stdio.h>
void main(){
int age_1,age_2,age_3;
printf("Enter the age of the persons:\n");
scanf("%d%d%d",&age_1,&age_2,&age_3);
if(age_1<=age_2&&age_2>=age_3){
printf("The age of oldest person is :%d\n",age_2);}
else if(age_1>=age_2&&age_1>=age_3){
printf("The age of oldest person is :%d\n",age_1);}
else{printf("The age of oldest person is :%d\n",age_3);}
getch();}