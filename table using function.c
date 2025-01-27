# include <stdio.h>
void table(int n );

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    printf ("table is : "); // argument/ actual parameter
    table (n);
    return 0;
}

void table (int n){ // parameter/ formal parameter
    int product;
    printf("sum is : \n");
    for(int i = 1; i <= 10; i++){
        product= i*n;
        printf("%d \n", product);
    }
}