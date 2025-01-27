# include <stdio.h>

int main() {
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    int product;

    for(int i = 1; i<=10; ++i) {
        product = i*n;
        printf("%d\n", product);
    }
    return 0;
}