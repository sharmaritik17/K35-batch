#include<stdio.h>

int main() {
    printf("Inside Main fn\n");
    int n;
    printf("Enter value of N, please put odd values only:\n");
    scanf("%d",&n);

    int n1 = (int)n/2 + 1;
    int n2 = n/2;

    // let's print upper triangle;
    int r1 = 1;
    while(r1 <= n1) {
        //spaces
        int space = 1;
        while(space <= n1 - r1) { //1 <= 3 - 1
            printf(" ");
            space++;
        }
        //stars
        int stars = 1;
        while(stars <= 2*r1 - 1) {
            printf("*");
            stars++;
        }
        printf("\n");
        r1++;
    }

    //lower triangle
    int r2 = n2;
     while(r2 > 0)  {
        int spaces = 1;
        //spaces
         while(spaces <= n2 - r2 + 1) {
            printf(" ");
            spaces++;
         }
         //stars
         int stars = 1;
         while(stars <= 2*r2 - 1) {
            printf("*");
            stars++;
         }
         printf("\n");
         r2--;
    }
}