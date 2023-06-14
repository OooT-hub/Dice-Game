#include <stdio.h>
#include <stdlib.h>

int main(){
    int dice1,dice2,to;
    dice1=rand()%6+1;
    dice2=rand()%6+1;
    to=dice1+dice2;
    printf("Rolling dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n",dice1,dice2,to);
}