#include<stdio.h>
#include<math.h>
void main(){
int num,root;
printf("Enter a number:\n");
scanf("%d",&num);
if(num<0){
printf("%d cannot bs a perfect square\n");}
//negative numbers cannot be a perfect square
root=sqrt(num);
if(root*root==num){
printf("%d is a PERFECT square\n",num);}
else{
printf("%d is NOT a perfect square\n",num);}
getch();}