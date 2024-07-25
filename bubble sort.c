#include<stdio.h>
int main()
{
    int ara[8]= {12,7,9,3,15,2,6,5};
    int i,j,n=8,temp;
    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");

    for(j=0; j<n; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(ara[i]>ara[i+1])
            {
                temp=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }

    printf("\n");

}
