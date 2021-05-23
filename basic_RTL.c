#include <stdio.h>
#include <stdlib.h>

int main(){

    puts("Welcome RTL world @~@!");

    char buf[125];
    printf("Input : ");

    fgets(buf, 0x256, stdin);

    return 0;
}

