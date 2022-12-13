#include<stdio.h>
#include<stdlib.h>

main(){
    int num,
    count=1;
    printf("digite um numero:");
    scanf("%d",&num);
    printf("impares \t pares\n");
    while(count<=num) //enquanto
    {
        if(count%2==1)
        printf(" %d \t", count);
        else
        printf(" \t %d\n", count);
        count++;
    }

}