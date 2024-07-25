#include<stdio.h>
int main(){
    int n;
    printf("enter the total chocolate value");
    scanf("%d",&n);
    int choc=n;
    int pack=n;
    while(pack>=4){
        choc=choc+(pack/4);
        pack=(pack/4)+(pack%4);
    }
    printf("Total eaten chocholate is %d",choc);
return 0;
}
