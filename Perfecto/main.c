#include <stdio.h>

int main() {
    int i,num,mul=0,sum=0;
    printf("Ingrese su numero");
    scanf("%d",&num);
    for (int i = 1; i < num; ++i) {
        mul=num%i;
                if(mul==0){
                    sum=sum+i;
                }
    }
    if(sum==num){
        printf("Es prefecto");
    }else{
        printf("No es perfecto");
    }
    return 0;
}