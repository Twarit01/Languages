/*#include <stdio.h>

int main(){
    int a,*q;
    int *ptr;
    a=30;
    ptr=&a;
    q=&ptr;
    printf("%d\n",*ptr+1);
    printf("%d\n",(*ptr)+1);
    printf("%p\n",ptr );
    printf("%d\n",ptr+1);
    printf("%d\n",q);
    return 0;
}*/

#include <stdio.h>
int main(){
    int a=30,**q;
    int *ptr=&a;
    q=&ptr;
    printf("%d\n",q);
    return 0;
}