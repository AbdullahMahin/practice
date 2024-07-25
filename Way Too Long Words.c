#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char name[102];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
fgets(name,sizeof(name),stdin);
        int l=strlen(name)-1;
        if (name[l-1] == '\n')
        {
            name[l-1] = '\0';
            l--;
        }
        if (l>10)
        {
            printf("%c%d%c\n",name[0],l-2,name[l-1]);
        }
        else
        {
            printf("%s\n",name);
        }
    }

    return 0;
}


