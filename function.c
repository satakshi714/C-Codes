# include <stdio.h>

void printHello(); // function declaration/ prototype
// void , int, etc -return types
//in the bracket - Parameters, Arguments(variables)

int main() {
    printHello(); // function call
    printHello();
    printHello();
    return 0;
}

void printHello() { // function definition
    printf("Hello\n");
}
// properties-
// executuiom always starts from main
// a function gets called directly or indirecctly from main
// there can be multiple functions in a program

// types of fucntions - 
// library function - special functions inbuilt in C
// user defined - declared and defined by programmer

// Passing arguments - function can take value (PARAMETER) and give some value (RETURN VALUE)

// argument vs parameter - 
// arguments - values thah are passed in function call, parameter - values in  function declaration and definition
// arguments - used to send value, parameter - used to recieve value
// argument - actual parameter, parameter - formal parameters

// function can only return one value at a time
// changes to parameters in function don't change the values in calliny function (because a copy of argument is passes to the function)
