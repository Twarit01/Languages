#include<stdio.h>
int z;
int add(int x ,int y ){
    z=x+y;
    printf("%d",z);
}
int subs(int x,int y ){
    z=x-y;
    printf("%d",z);
}
int mult(int x ,int y){
    z=x*y;
    printf("%d",z);
}
int div(int x ,int y ){
    z=x/y;
    printf("%d",z);
}
int main(){
    int a,b,choice;
    printf("Pls Enter the first number");
    scanf("%d",&a);
    printf("Pls Enter the second number");
    scanf("%d",&b);
    printf("Pls Enter 1 for sum\n");
    printf("Pls Enter 2 for minus\n");
    printf("Pls Enter 3 for multiplication\n");
    printf("Pls Enter 4 for division\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        add(a,b);
        break;
        case 2:
        subs(a,b);
        break;
        case 3:
        mult(a,b);
        break;
        case 4:
        div(a,b);
        break;
    return 0;
}
}
