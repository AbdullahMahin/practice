#include<stdio.h>

void  find_maxx_minn(int n,int ara[],int* maxx,int* minn)
{
    int i;
    *maxx=ara[0];
    * minn=ara[0];
    for(i=0;i<n;i++){
        if(ara[i]>*maxx){
            *maxx=ara[i];
        }
        if(ara[i]<* minn){
            * minn=ara[i];
        }
    }

}

int main()
{
    int ara[]={12,15,1,3,7,9,222,444,666,45};
    int n=10;
    int maxx,minn;
    find_maxx_minn(n,ara,&maxx,&minn);
      printf("Max=%d & Min=%d",maxx,minn);
return 0;
}
