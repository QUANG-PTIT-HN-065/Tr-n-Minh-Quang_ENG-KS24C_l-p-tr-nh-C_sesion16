#include<stdio.h>
void mang(int *arr,int size);
int main(){
    int number[]={1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    mang(number,n);
    return 0;
}
void mang(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
}