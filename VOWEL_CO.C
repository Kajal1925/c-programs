#include<stdio.h>
void main(){
char ch;
printf("Enter a character:\n");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{printf("The character %c is a VOWEL\n",ch);}
else{printf("The character %c is a CONSONANT\n",ch);}
}else
{printf("Invalid input,please enter an ALPHABET to check for vowel and consonant\n");}
getch();}
