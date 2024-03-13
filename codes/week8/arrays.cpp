#include<stdio.h>

void printArray(int arr[]) {
    for (int i = 0; i < 5; i++) {
        printf("\n");
        printf("%d",arr[i]);
    }
}

//array as a pointer
void changeArrayValues(int arr[]) { //int *a
    arr[0] = 1000;
    arr[1] = 2000;
}

int main() {
    int a[5];
    int a[] = {1,2,3,4,5};
    printf("Please prvoide int values:\n");
    for (int i = 0; i < 5; i++ ){
        scanf("%d", &a[i]);
    }
    printf("\n");
    for(auto i : a) {
        printf("\n");
        printf("%d", i);
    }
    printf("size of the array %d", sizeof(a));
    // sizeof calculates based of sizeOfDataType * sizeOfArray

    for (int i = 0; i < 5; i++) {
        printf("\n");
        printf("%d %d %d %d %d %d",i, a[i], i[a],*(a+i), &a[i], *&a[i]);
    }

    printArray(a);
    printf("call is being made to changeArrayValues\n");
    changeArrayValues(a);
    printf("call is completed to changeArrayValues\n");
    printArray(a);
}