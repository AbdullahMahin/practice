#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char ara [102];
    fgets(ara,sizeof(ara),stdin);
    for(i=0; i<strlen(ara)-1; i++)
    {
        if(ara[i]>='A'&&ara[i]<='Z')
        {
            ara[i]+=32;
        }
        if(!(ara[i]=='a'||ara[i]=='y'||ara[i]=='e'||ara[i]=='i'||ara[i]=='o'||ara[i]=='u'))
        {
            printf(".%c",ara[i]);
        }
    }
}
