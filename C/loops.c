/*#include <stdio.h>

int main(){
    int i=1;//intitalization
    while(i<=10){
        i++;//condition
        printf("%d",i);
        printf("Hello\n");
        }//updation
    return 0;
}*/


//WAP to accept number from user and display its table
/*#include <stdio.h>
int main(){
    int i,num;
    printf("Pls Enter the number");
    scanf("%d",&num);
    i=1;
    while(i<11){
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    }
    return 0;
}*/

//WAP to accept a number from user to display its factorial
/*#include <stdio.h>

int main(){
    int i,num,f=1;
    printf("Pls Enter number");
    scanf("%d",&num);
    i=num;
    do{
        f=f*i;
        i--;
    }
    while(i>=1);
    printf("%d",f);
    return 0;
}*/

//WAP to compute square of 1-10 no.
/*#include <stdio.h>

int main(){
    int i=1;
    while(i<=10){
        printf("%d\n",i*i);
        i++;
    }
    return 0; 
}*/


//WAP to compute sum of following series: S=1+2+3+....10
#include <stdio.h>
int main(){
    int sum=0;
    int i=0;
    while(i<10){
        i++;
        sum+=i;
    }
    printf("Sum of series is %d",sum);
    return 0;
}

//WAP to compute sum of following series: S=3+6+9+....30
/*#include <stdio.h>

int main(){
    int sum=0;
    int i=0;
    while(i<30){
        i+=3;
        sum+=i;
    }
    printf("Sum of series is %d",sum);
    return 0;
}*/

//WAP to compute sum of following series: S=1+1/4+1/7+...1/25
/*#include <stdio.h>
int main(){
    float sum=0.0;
    int i;
    for(i=1;i<=25;i+=3){
        sum+=(1.0/i);
    }
    printf("Sum of series:%f",sum);
    return 0;
}*/

//WAP to compute sum of following series: S=