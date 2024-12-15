#include<stdio.h>
void sum(int *mun1, int *num2, int *sun);
int main(){
    int num1 = 5;
    int num2 = 5;
    int sun = 0;
    sum(&num1,&num2,&sun);
    printf("%d",sun);
    return 0;
}
void sum(int *num1, int *num2,int *sun){
    *sun = *num1 + *num2;
}