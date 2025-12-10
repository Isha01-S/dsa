#include<stdio.h>
int Factorial(int n);
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int factorial=Factorial(n);
    printf("Factoria of %d is: %d\n",n,factorial);
    return 0;
}

int Factorial(int n){

    if (n==1 || n==0){
        return 1;
    }
    else{
        return n*Factorial(n-1);
    }
}