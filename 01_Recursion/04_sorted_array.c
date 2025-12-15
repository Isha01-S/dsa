#include<stdio.h>
#define size 5

int sorted(int arr[], int i){
    int count =0;
    if (i==size){
        return count;
    }
    if (arr[i]<arr[i-1]){
        count+=1;
        return count;
    }
    return sorted(arr,i+1);
}

int main(){
    
    int arr[size]= {1,2,6,4,5};
    int count=0,i=1;
    count=sorted(arr,i);
    if (count==0){
    printf("array is sorted\n");
    }
    else{
        printf("array is not sorted.\n");
    }

    return 0;
}