#include<stdio.h>
int gcd(int a,int b){
 if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main (){
    int a,b;
    printf("enter two number = ");
    scanf("%d %d",&a,&b);
    int w=gcd(a,b);
    printf("%d",w);
return 0;
}
