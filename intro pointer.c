#include<stdio.h>
int main ()
{
    int a=12;
    int* p;
    p=&a;
    printf("%p\n",p);
    printf("%d",*p);
    return 0;
}
