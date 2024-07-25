#include<stdio.h>
void print_hash(int x);
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        print_hash(i);
}


void print_hash(int x)
{
    int i;
    for(i=0; i<x; i++)
    {
        printf("*");
    }
    printf("\n");
}

