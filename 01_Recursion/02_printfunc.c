#include<stdio.h>
int print_func(int n);
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    print_func(n);
    return 0;
}
int print_func(int n){
    int a;
    if (n==0){
        return 0;
    }
    printf("%d\n",n);
    return print_func(n-1);
}