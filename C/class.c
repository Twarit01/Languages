// write a program to findout the greatest number amongst 3 integers
/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("Pls Enter first number");
    scanf("%d",&a);
    printf("Pls Enter second number");
    scanf("%d",&b);
    printf("Pls Enter third number");
    scanf("%d",&c);
    if(a>b && a>c)
     { printf("%d is largest number",a);}
    else if( b>a && b>c)
     { printf("%d is largest number",b);}
    else
     { printf("%d is largest number",c);}
    return 0;
}*/

// write a program to check wheather number is even or odd.if number is even, compute its square
// else compute its cube

/*#include<stdio.h>
int main(){
    int a;
    printf("Pls Enter number");
    scanf("%d",&a);
    if(a%2==0)
     { printf("%d number is even",a*a);}
    else
     { printf("%d number is odd",a*a*a);}
    return 0;
}*/

// Wap to check whether roots of quadratic equation are
// 1)Real and Unequal
// 2)Real and equal
// 3)Imaginary

/*#include<stdio.h>
int main(){
    int x,y,z,result;
    printf("Pls Enter A value of ax^2+bx+c");
    scanf("%d",&x);
    printf("Pls Enter B value of ax^2+bx+c");
    scanf("%d",&y);
    printf("Pls Enter C value of ax^2+bx+c");
    scanf("%d",&z);
    result=((y*y)-4*x*z);
    if(result>0)
     { printf("Roots are real and unequal");}
    if(result=0)
     { printf("Roots are real and equal");}
    else
     { printf("Roots are imaginary");}
    return 0;

}*/

// WAP to take input of two numbers from user and ask him to perform which action +,-,*,/

/*#include<stdio.h>
int main(){
    int a,b;
    int operator;
    printf("Pls Enter first number");
    scanf("%d",&a);
    printf("Pls Enter second number");
    scanf("%d",&b);
    printf("Pls Enter 1 for addition\n");
    printf("Pls Enter 2 for substraction\n");
    printf("Pls Enter 3 for multiplication\n");
    printf("Pls Enter 4 for division\n");
    scanf("%d",&operator);
    switch(operator)
    {
        case 1:
          printf("%d",(a+b));
          break;
        case 2:
          printf("%d",(a-b));
          break;
        case 3:
          printf("%d",(a*b));
          break;
        case 4:
          printf("%d",(a/b));
          break;
        default:
          printf("Invalid Input");
    }
    return 0;
}*/

// you can write if else statement in one line also
// but you can only state one condition

/*#include <stdio.h>

int main(){
  int a,b,c;
  printf("provide 2 values");
  scanf("%d %d",&a,&b);
  c=(a>b)?a-b:a+b;
  printf("%d",c);

  return 0;
}*/

/* Wap to accept % from the student.Compute the grade as'A' if per>=75 else grade as 'B'
using conditional operator*/
/*#include <stdio.h>
int main(){
  int a;
  printf("Provide your percentage");
  scanf("%d",&a);
  if(a>=90){
    printf("Your grade is A");
  }
  else if(a>=75){
    printf("Your grade is B");
  }
  else if(a>=60){
    printf("Your grade is C");
  }
  else if(a>=45){
    printf("Your grade is D");
  }
  else{
    printf("Your grade is E");
  }
  return 0;
}*/

// WAP to accept 3 sides of triangle. COmpute whether triangle is equilateral,isoceles or none of these

/*#include<stdio.h>
#include<math.h>

int main(){
  int a,b,c;
  printf("Pls Enter 3 sides of triangle");
  scanf("%d %d %d",&a,&b,&c);
  ((a==b&&b==c&&a==c))?printf("Triangle is equilateral"):((a=b)||(b=c)||(a=c))?printf("triangle is isoceles"):(a*a==b*b+c*c)?printf("Triangle is right angled triangle"):printf("None of these");

  return 0;
}*/

/*#include <stdio.h>

int main(){

  return 0;
}*/

//wap to check whether number is prime or not through while loop
#include <stdio.h>
int main(){
  int num, i = 2; 
  int isPrime = 1; 
  printf("Pls Enter a number: ");
  scanf("%d", &num);
  if (num <= 1){
    isPrime = 0; 
  }
  else{
    while (i <= num / 2){ 
      if (num % i == 0){
        isPrime = 0; 
        break;   
      }
      i++;
    }
  }
  if (isPrime){
    printf("%d is a prime number.\n", num);
  }
  else{
    printf("%d is not a prime number.\n", num);
  }
  return 0;
}


