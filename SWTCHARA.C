#include<stdio.h>
void main(){
char ch;
printf("Enter a character:\n");
scanf("%c",&ch);
switch(ch){
case'0':case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':
printf("%c is a DIGIT\n",ch);
break;
default:if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{printf("%c is an ALPHABET\n",ch);}
else{printf("%c is a SPECIAL SYMBOL\n",ch);}
}
getch();}


