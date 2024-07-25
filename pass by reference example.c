#include<stdio.h>
int main()
{
    int a=5,b=8;
    swap(&a,&b);
    printf("a=%d b=%d ",a,b);
return 0;
}
void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
