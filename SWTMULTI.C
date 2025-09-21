#include<stdio.h>
void main(){
int num,i;
printf("Enter number:\n");
scanf("%d",&num);
printf("Multiplication table for %d\n",num);
for(i=0;i<=10;i++){
switch(i){
case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
printf("%d*%d =%d\n",num,i,num*i);
break;}
}
getch();}