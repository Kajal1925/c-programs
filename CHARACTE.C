#include<stdio.h>
void main(){
char ch;
printf("Enter a character:\n");
scanf("%c",&ch);
if(ch>='a'&&ch<='z'){
printf("This is a LOWERCASE character\n");}
else if(ch>='A'&&ch<='Z')
{printf("This is an UPPERCASE character\n");}
else if(ch>='0'&&ch<='9')
{printf("This character is a DIGIT\n");}
else{printf("This is a SPECIAL SYMBOL\n");}
getch();}