#include<stdio.h>
int searchElement(int *arr,int value){
    for(int i=0;i<10;i++){
        if(arr[i]==value){
            return i;
        }
    }
    return -1;
}
int main(){
    int numbers[]={10,20,30,40,50,60,70,80,90,100};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int valueToFind=50;
    int position=searchElement(numbers,valueToFind);
    if(position!=-1){
        printf("Phan tu %d tim thay tai vi tri: %d\n",valueToFind,position);
    }else{
        printf("Phan tu %d khong tim thay trong mang.\n",valueToFind+1);
    }
    return 0;
}
