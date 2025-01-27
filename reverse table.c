# include <stdio.h>

int main () {
    int n;
    printf("enter numebr : ");
    scanf("%d", &n);

    int product;
    for ( int i = 10; i >= 1; i--){
        product = i * n;
        printf("%d\n", product);
    }
    return 0;
}