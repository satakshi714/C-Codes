# include <stdio.h>
#include<math.h>

void square(int s);
void rectangle(int a, int b);
void circle(int r);

int main() {
    int s, a, b, r;
    printf("enter side of square : ");
    scanf("%d", &s);
    printf("enter side1 of rectangle : ");
    scanf("%d", &a);
    printf("enter side2 of rectange : ");
    scanf("%d", &b);
    printf("enter radius of circle : ");
    scanf("%d", &r);

    printf("area of square : ");
    square(s);
    printf("area of circle : ");
    circle(r);
    printf("area of rectangle : ");
    rectangle(a, b);
    return 0;
}
void square (int s){
    printf("%d \n", s*s);
}

void rectangle(int a, int b){
    printf("%d\n", a*b);
}

void circle (int r) {
    float pi = 3.14;
    printf("%f\n", pow(r, 2)*pi);
}



