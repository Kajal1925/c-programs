#include<stdio.h>
void main(){
char ch;
printf("Enter a character:\n");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{printf("The character %c is an ALPHABET\n",ch);}
else {printf("The character is %c is NOT an alphabet\n",ch);}
getch();}