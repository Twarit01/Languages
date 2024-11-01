// switch case code
/*#include <stdio.h>
int main(){
    int a;
    printf("Pls Enter your number");\
    scanf("%d",&a);
    switch(a){
        case 1:
         printf("You Pls Entered 1");
        case 2:
         printf("You Pls Entered 2 number");
        default:
         printf("Nothing matched to the system");

    }
    return 0;
}*/
// ques
/*#include <stdio.h>
int main(){
    int a,b,c,total;
    printf("Pls Enter the marks of first subject");
    scanf("%d",&a);
    printf("Pls Enter the marks of second subject");
    scanf("%d",&b);
    printf("Pls Enter the marks of third subject");
    scanf("%d",&c);
    total=(a+b+c);
    if(total>=120&&(a>=33)&&(b>=33)&&(c>=33))
     printf("Student is passed");
    else
     printf("Student is failed");
    return 0;
}*/
/*#include <stdio.h>

int main(){
    int a=1;
    while(a<10){
        printf("The number is %d\n",a);
        a++;
    }
    return 0;
}*/
/*#include <stdio.h>

int main(){     
    int a;
    printf("Hello pls Pls Enter the first number");
    scanf("%d", &a);
    printf("Your number is %d", a);
    return 0;
}*/

#include <stdio.h>

int main(){
    int i,j;
    for(i=0;i<6;i++){
        printf("*");
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }    
    return 0;
}