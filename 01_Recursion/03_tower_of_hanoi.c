#include <stdio.h>
void tower_of_hanoi(int n, char frompeg, char topeg, char auxpeg){
if (n==1){
    printf("Move disk 1 from peg %c to peg %c", frompeg, topeg);
    return;
}

tower_of_hanoi(n-1,frompeg, auxpeg, topeg);

printf("\n move disk %d from peg %c to peg %c \n", n, frompeg, topeg);

tower_of_hanoi(n-1, auxpeg, topeg, frompeg);
}


int main() {
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    tower_of_hanoi(n, 'A', 'C', 'B');

    return 0;
}
