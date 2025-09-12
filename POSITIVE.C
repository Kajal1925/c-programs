 #include<stdio.h>
 void main(){
 int num;
 printf("Enter the number:");
 scanf("%d",&num);
 if(num>0){
 printf("%d is a POSITIVE number");}
 else if (num<0){
 printf("%d is a NEGATIVE number");
 }else{
 printf("The number is ZERO");
 }getch();
 }