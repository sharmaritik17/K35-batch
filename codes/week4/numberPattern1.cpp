#include<stdio.h>

int main() {
    int n; //n = 4
    printf("Enter N:\n");
    scanf("%d", &n);

    for(int row = 1; row <= n; row++) { //this is representation of rows like r1, r2 ... rn
       int indiviual_row_starting_value =  row;
        for (int col = 1; col <= row; col++, indiviual_row_starting_value++) {//this is representation of col like c1, c2 ... cn
            printf("%d", indiviual_row_starting_value); //2 3
            
            //indiviual_row_starting_value++;
        }
        printf("\n");
    }
}