# include <stdio.h>

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int fact = 1;
    for( int i = n ; i >= 1; i--){
        fact = fact*i;
    }
    printf("factorial is %d", fact);
    return 0;
}