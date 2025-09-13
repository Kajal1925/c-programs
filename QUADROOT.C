#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,discriminant,root_1,root_2;
clrscr();
printf("Enter the cofficients a,b and c :\n");
scanf("%f%f%f",&a,&b,&c);
discriminant=b*b-4*a*c;
printf("The discriminant is %f\n",discriminant);
//condition for real and different roots
if(discriminant>0){
root_1 = (-b+sqrt(discriminant))/(2*a);
root_2 = (-b-sqrt(discriminant))/(2*a);
printf("The roots are:\n");
printf("Root 1=%f\n",root_1);
printf("Root 2 =%f\n",root_2);
}
//condition for real and equal roots
else if(discriminant==0){
root_1=root_2=-b/(2*a);
printf("The roots are:\n Root 1= Root 2 =%f\n",root_1);}
//condition for imaginary roots
else{
printf("The roots are not real\n");
}
return 0;}
