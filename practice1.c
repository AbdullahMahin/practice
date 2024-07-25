#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
        int isunique=1;
        for(i=0; i<n; i++)
        {
            if (ara[i]!=ara[0])
            {
                isunique=0;
                break ;
            }

        }
        if(isunique)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        return 0;
    }

