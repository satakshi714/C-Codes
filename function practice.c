# include <stdio.h>

void printHello();
void goodBye();

int main() {
    printHello();
    goodBye();

    return 0;
}

void printHello(){
    printf("Hello\n");
}

void goodBye(){
    printf("Goodbye");
}