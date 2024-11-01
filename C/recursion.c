/*#include<stdio.h>
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int a,result;
    printf("Enter the number");
    scanf("%d",&a);
    result=factorial(a);
    printf("%d",result);
    return 0;
}*/

//wap to calculate sum of N natural number
/*#include <stdio.h>
int sum(int a){
    if(a==0){
        return 0;
    }
    else{
        return a+sum(a-1);
    }
}
int main(){
    int num,result;
    printf("Enter the number");
    scanf("%d",&num);
    result=sum(num);
    printf("Sum is %d",result);
    return 0;
}*/
// wap to calculate power of given number using recursion
#include <stdio.h>

int main(){
    int num,pow,result;
    printf("Enter the number");
    scanf("%d",&num);
    printf("Enter positive power only");
    scanf("%d",&pow);
    result=power(num,pow);
    printf("Answer is %d",result);
    return 0;
}
int power(int x,int y){
    if(num==0){
        return 0;
    }
    else{
        
    }
}

//WAP to calculate HCF to given 2 numbers using recursion
#include <stdio.h>
int hcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    return hcf(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = hcf(num1, num2);
    printf("HCF of %d and %d is %d\n", num1, num2, result);

    return 0;
}

//WAP to count digit of number using recursion
#include <stdio.h>
int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigits(n / 10);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("The number of digits is 1\n");
    } else {
        int digitCount = countDigits(num < 0 ? -num : num);
        printf("The number of digits is %d\n", digitCount);
    }

    return 0;
}
