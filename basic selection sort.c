#include<stdio.h>
int main()
{
    int n=8;
    int i;
    int ara[]= {12,7,9,3,15,2,6,5};
    int min=ara[0];
    int min_indx=0;
    int sort_ara[8];

    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");
    int j;
    for(j=0; j<n; j++)
    {
        min=ara[0];
        min_indx=0;
        for(i=0; i<n; i++)
        {
            if(ara[i]<min)
            {
                min=ara[i];
                min_indx=i;
            }
        }
        sort_ara[j]=min;
        ara[min_indx]=9999;

        for(i=0; i<n; i++)
        {
            printf("%d ",ara[i]);
        }
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",sort_ara[i]);
    }
    printf("\n");
}
