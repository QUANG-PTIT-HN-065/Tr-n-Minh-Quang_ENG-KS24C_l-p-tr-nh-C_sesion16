#include<stdio.h>
void swam(int *mun1, int *num2);
int main(){
    int num1 =20;
    int num2 =10;
    swam(&num1,&num2);
    printf("%d\n",num1);
    printf("%d\n",num2);
}
void swam(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}