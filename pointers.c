#include"stdio.h"
int main(){
    int a=10;
    int *p;
    p=&a;
    printf("address of a=%lx\n",p);
    printf("value of a is = %d",*p);
}
