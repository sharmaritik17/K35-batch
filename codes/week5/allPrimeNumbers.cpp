#include<stdio.h>

int main() {
    printf("Inside Main\n");
    int n;
    printf("Enter value of n:\n");
    scanf("%d",&n);


    for(int i = 2; i <= n; i++) {
        //check if i may come in anyone's else table or divisble by other numbers except 1 and i itself
        bool isPrimeNumber = 1;
        for(int j = 2; j < i; j++) {
            if(i%j == 0) {
                isPrimeNumber = 0;
            }
        }
        if(isPrimeNumber == 1) {
            printf("%d",i);
            printf("\n");
        }
    }
}