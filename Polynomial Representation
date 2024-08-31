#include <stdio.h>
struct poly
{
int coeff;
int exp;
};
int main()
{
struct poly x[15];
int term,i;
printf("Enter the number of terms:");
scanf("%d",&term);
printf("Enter the coeffient term and exponent in descending order:\n");
for(i=0;i<term;i++)
{
printf("Coeff:");
scanf("%d",&x[i].coeff);
printf("Exponent:");
scanf("%d",&x[i].exp);
}
printf("The polynomial is:");
for(i=0;i<term;i++)
{
printf("(%dx^%d)",x[i].coeff,x[i].exp);
if(i<term-1)
{
printf("+");
}
}
}
