/*#include <stdio.h>

int main(){
    int i,n;
    int count;
    for(;i<n;i++){
        scanf("%d",&i);
        if(n%1==0)
        count++;
    }
    if(count==0)
    printf("Prime");
    else
    printf("Not prime");
    return 0;
}*/
#include <stdio.h>

int main(){

    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=1;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

//WAP to write alphabets in order
#include <stdio.h>

int main(){
    int i,j;
    char ch;
    
    for(i=1;i<=5;i++){
        ch='a';
        for(j=1;j<=i;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}