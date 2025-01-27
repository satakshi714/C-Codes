# include <stdio.h>

void printHello(int count);

int main() {
    printHello(1);
    return 0;
}

// recursive function
void printHello (int count) {
    if (count == 11){
        return;
    }
    printf("helloworld\n");
    printHello(count+1);
}
// properties of recursion
//  anything that can be done with iteration, can be done with recursion and vice versa
// recursion can sometimes give the most simple solution
// base case is the condition which stops recursion
// iteration has infinite loop and recursion has stack overflow