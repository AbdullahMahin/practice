
#include<stdio.h>
int main(){
    char sen[1000];
    fgets(sen,sizeof(sen),stdin);
    printf("%s",sen);
    puts(sen);
return 0;}
