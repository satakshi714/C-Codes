# include <stdio.h>
# include <math.h>

void square(int n);

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    printf("square is : ");
    square(n);
    return 0;
}

void square(int n){
    printf("%f", pow(n, 2));
}