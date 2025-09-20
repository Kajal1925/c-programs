#include<stdio.h>
void main(){
char ch;
printf("Enter an alphabet:\n");
scanf("%c",&ch);
switch(ch){
case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O':case 'u': case 'U':
printf("%c is a VOWEL.\n",ch);
break;
default :if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{printf("%c is a CONSONANT.\n",ch);}
else{printf("Invalid Input\n Please enter alphabet.\n");}
}
getch();}


