//pointers - a variable that stored the memory address of another variable
# include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;   // value at address operator
    int _age = *ptr;     // address of operator
    printf("%d",_age);

    return 0;
}