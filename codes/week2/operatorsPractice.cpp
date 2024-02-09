#include<stdio.h>

int main() {
    printf("Inside main funtion\n");

    printf("ARITHMETIC OPERATORS --- \n");

    int a = 10, b = 20;
    int output = a + b;
    printf("Addition : %d\n", output);

    a = 4, b = 3;
    output = a % b;
    printf("Modulus : %d\n",output);

    printf("Post Increment : %d\n", a++); //4++
    a = 4;
    printf("Pre Increment : %d\n", ++a); //++4

    a = 4;
    printf("Post Decrement : %d\n", a--); //4--
    a = 4;
    printf("Pre Decrement : %d\n", --a); //--4

    printf("RELATIONAL OPERATORS\n");
    printf("Equals: %d\n", a == b); //if they are equals then we get 1 otherwise 0
    a = 100, b = 20;
    printf("Greater than: %d\n", a >= b);

    printf("LOGICAL OPERATORS\n");
    bool flag1 = 1, flag2 = 0;
    printf("Logical AND\n");
    if(flag1 == 1 && flag2 == 1) { //if(flag1 && flag2) {
        printf("both flag1 and flag2 are true\n");
    }

    printf("Logical OR\n");
    if(flag1 == 1 || flag2 == 1) { //if(flag1 && flag2) {
        printf("either flag1, flag2 or both are true\n");
    }
}