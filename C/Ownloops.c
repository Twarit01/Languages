// print  hello n times and take n form user
/*#include <stdio.h>

int main(){
    int a,i;
    printf("Pls Enter the value of a");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        printf("Hello\n");

    }
    return 0;
}*/

// print all number from 1 to 100
/*#include <stdio.h>

int main(){
    int i;
    for(i=1;i<=100;i++){
        printf("%d\n",i);
    }
    return 0;
}*/

// print all even number from 1 to 100
/*#include <stdio.h>

int main(){
    int i;
    for(i=0;i<=100;i=i+2){
        printf("%d\n",i);
    }
    return 0;
}*/

// print all odd numbers from 1 to 100
/*#include <stdio.h>

int main(){
    int i;
    for(i=1;i<=100;i=i+2){
        printf("%d\n",i);
    }
    return 0;
}*/

// print the table of n and take n from user
/*#include <stdio.h>

int main(){
    int a,i;
    printf("Pls Pls Enter the number");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        printf("%dX%d=%d\n",a,i,a*i);
    }
    return 0;
}*/

// display this AP=1,3,5,7,... upto n terms and take n from user
/*#include <stdio.h>

int main(){
    int a,i;
    printf("Pls Enter the value of n");
    scanf("%d",&a);
    for(i=1;i<=(2*a-1);i=i+2){
        printf("%d",i);
    }
    return 0;
}*/

// Display this Ap=4,7,10,13...upto n terms and take n from user
/*#include <stdio.h>

int main(){
    int a,i;
    printf("Pls Enter the value of n");
    scanf("%d",&a);
    for(i=4;i<=(3*a-1);i=i+3){
        printf("%d ",i);
    }
    return 0;
}*/

// wap to check whether number is prime or composite
/*#include <stdio.h>

int main()
{
    int a,i;
    printf("Pls Enter the number");
    scanf("%d", &a);
    if ((a % a)==0){
        printf("Your number is prime number");
    }
    else{
        printf("Your number is composite number");
        }
    
    return 0;
}*/

//wap to count the digits of given number
/*#include <stdio.h>

int main(){
    int count=0,n;
    printf("Pls Enter your no.");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count++;
    }
    printf("The number of digits are %d",count);
    return 0;
}*/

//wap to find the factorial of number
/*#include <stdio.h>

int main(){
    int a,i,j=1;
    printf("Pls Enter the number");
    scanf("%d",&a);
    i=a;
    do{
        j=j*i;
        i--;
    }
    while(i>=1);
    printf("%d",j);
    return 0;
}*/

#include <stdio.h>

int main(){
    int a,fac=1;
    printf("Pls Enter the n number");
    scanf("%d",&a);
    for(int i=1;i>=a;i++){
        printf("Factorial of number %d",i);
        for(int j=i;j>=i;j++){
            printf("%d",fac);
        })
    }
    return 0;
}