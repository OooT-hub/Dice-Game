#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[20];
    int dice1,dice2,to;
    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hello,%s\n",name);
    dice1=rand()%6+1;
    dice2=rand()%6+1;
    to=dice1+dice2;
    printf("Rolling dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n",dice1,dice2,to);
    if (to>7){
        printf("You won\n");
    }else{
        printf("You lost\n");
    }
}