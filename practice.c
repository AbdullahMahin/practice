#include<stdio.h>
int main(){
   int n,i,q;
   printf("enter a size of array -");
   scanf("%d",&n);
   int ara[n];
   for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
   }
   printf("enter the value of q");
   scanf("%d",&q);
   for(i=0;i<q;i++){
     int I,v;
   scanf("%d %d",&I,&v);
    ara[I]=ara[I]+v;
   }
for(i=0;i<n;i++){
     printf("%d ",ara[i]);

}

return 0;
}
