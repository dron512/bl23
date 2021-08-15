#include <stdio.h>

int main(){
    int a = 10;
    int *ptra = &a;

    double d = 10.0;
    double *ptrd = &d;

    printf("a = %d\n",a);
    printf("&a = %d\n",&a);
    printf("ptra = %d\n",ptra);
    printf("*ptra = %d\n",*ptra);
    printf("&ptra = %d\n",&ptra);

    printf("ptra+1 = %d\n",ptra+1);
    printf("ptra+2 = %d\n",ptra+2);

    printf("ptrd+1 = %d\n",ptrd+1);
    printf("ptrd+2 = %d\n",ptrd+2);
    printf("ptrd+3 = %d\n",ptrd+3);
   
}
