#include<stdio.h>
int main()
{
int a,b;
printf("Enter two number ");
scanf("%d %d",&a,&b);
if(a<b)
{
    printf("b is big");
}
else if (a>b){
    printf("a is big");
}


else {
    printf("Enter right number ");
}
return 0;
}
