#include<stdio.h>

void printArray(int *arr) {
    for (int i = 0; i < 5; i++) {
        printf("\n");
        printf("%d",arr[i]);
    }
}

int main() {
    int a[5] = {100,4,9,2,6};
    int n = 5;
    printf("Inside Int Main\n");

    for(int i = 0; i < n - 1; i++) {
        for(int j = i; j < n; j++) {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("print output\n");
    printArray(a);

}