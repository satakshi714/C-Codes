# include <stdio.h>

int main(){
    float pi = 3.14;
    float radius;

    printf("enter radius: ");
    scanf("%f",&radius);
    printf("area of circle is: %f",pi * radius * radius);
    return 0; 
}