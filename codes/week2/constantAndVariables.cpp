#include<stdio.h>
#include<math.h>

int main() {
    printf("Inside Main\n");

    const int amount = 100;
    const float amount1 = 100.2;
    const char testChar = 'a';

    //variables
    char variableValue = 'z';
    char changeVariableValue = 'w';

    printf("%d\n", amount);
    printf("%f\n", amount1);
    printf("%c\n", testChar);
    printf("%c\n", variableValue);
    printf("%c\n", changeVariableValue);
    printf("value got change for a variable\n");
    changeVariableValue = 'u';
    printf("%c\n", changeVariableValue);

    printf("Below is the minimum value that an integer can hold\n");
    printf("%d\n", INT_MIN);
    printf("Below is the maximum value that an integer can hold\n");
    printf("%d\n", INT_MAX);

    int value = 2147483649;
    printf("%d\n", value);
    return 0;
}
