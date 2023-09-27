//                      ASSINGMENT ON CSE 1202 
//                      SUBMITTED BY: ABDULLAH AL SHAFI
//                      ROLL:2007055

#include<stdio.h>
#include"calculator.h"
int main()
{
  char c;int a,b,x;
  printf("Please Input Two Numbers: ");
  printf("\n");
  scanf("%d %d",&a,&b);
  printf("Select type of operation: ");
  printf("\n");
  printf("ADD(+) //  SUB(-)  //  MUL(*)  //  DIV(/)  \n");
  getchar();
  scanf("%c",&c);
  printf("RESULT : ");
  switch(c)
  {
case '+':
    x=add(a,b);
    printf("%d + %d =% d",a,b,x);
    break;
case '-':
    x=sub(a,b);
    printf("%d - %d = %d",a,b,x);
    break;
case '*':
    x=mul(a,b);
    printf("%d * %d = %d",a,b,x);
    break;
case '/':
    x=div(a,b);
    printf("%d / %d = %d  ",a,b,x);
    break;
  }
}
