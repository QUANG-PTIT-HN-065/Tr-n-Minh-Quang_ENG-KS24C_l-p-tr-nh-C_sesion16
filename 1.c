#include<stdio.h>
int main(){
    int num=2;
    int *pot = &num;
    printf("%d\n",num);
    printf("%d\n",*pot);
    printf("%d\n",pot);
    printf("%d\n",&num);
    return 0;
}