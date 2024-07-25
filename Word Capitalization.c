
#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char name[1000];
      scanf("%s",name);
    for(i=0;i<strlen(name);i++){

        if(name[0]>96){
            name[0]=name[0]-32;
        }

    }
puts(name);
return 0;
}
