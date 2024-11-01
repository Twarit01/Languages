//rectangle pattern
/*#include <stdio.h>
int main(){
    int a,i,j;
    printf("Pls Enter the valur of a");
    scanf("%d",&a);
    for(i=0;i<3;i++){
        for(j=1;j<=a;j++){
            printf("*");
        }
    printf("\n");
    }   
    return 0;
}*/

// square pattern
/*#include <stdio.h>
int main(){
    int a,i,j;
    printf("Pls Enter the valur of a");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=1;j<=a;j++){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}*/

//number square pattern
/*#include <stdio.h>
int main(){
    int a,i,j;
    printf("Pls Enter the valur of a");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=1;j<=a;j++){
            printf("%d",j);
        }
    printf("\n");
    }
    return 0;
}*/

//star triangle
/*#include <stdio.h>
int main(){
    int a,i,j;
    printf("Pls Enter the value of a");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
    printf("\n"); 
    }
    return 0;
}*/

//ulta star triangle
/*#include <stdio.h>
int main(){
    int a,i,j;
    printf("Pls Enter the value of a");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a+1-i;j++){
            printf("*");
        }
    printf("\n"); 
    }
    return 0;
}*/

//number triangle
/*#include <stdio.h>
int main(){
    int a,i,j;
    printf("Pls Enter the value of a");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);      
        }
    printf("\n");
    }
    return 0;
}*/

//ulta number triangle
/*#include <stdio.h>
int main(){
    int a,i,j;
    printf("Pls Enter the value of a");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a+1-i;j++){
            printf("%d",j);
        }
    printf("\n");
    }
    return 0;
}*/

//odd number triangle
/*#include <stdio.h>
int main(){
    int a,i,j;
    printf("Pls Enter the value of a");
    scanf("%d",&a);
    for(i=0;i<=a;i=i+2){
        for(j=1;j<=i;j=j+2){
            printf("%d",j);
        }
    printf("\n");
    }
    return 0;
}*/

// abc rectangle triangle
/*#include <stdio.h>
int main(){
    int a,i,j;
    printf("Pls Enter the value of a");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=0;j<=a;j++){
            printf("%c",'A'+j);

        }
    printf("\n");
    }
    return 0;
}*/

//abc triangle pattern
/*#include <stdio.h>
int main(){
    int a,i,j;
    printf("Pls Enter the value of a");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=0;j<=i;j++){
            printf("%c",'A'+j);
        }
    printf("\n");    
    }
    return 0;
}*/

//abc ulta triangle pattern
/*#include <stdio.h> 
int main(){
    int a,i,j;
    printf("Pls Enter the value of a");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=0;j<=a+1-i;j++){
            printf("%c",'A'+j);
        }
    printf("\n");
    }
    return 0;
}*/



