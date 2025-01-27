# include <stdio.h>

int main() {
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);

    marks > 30 ? printf("PASS \n") : printf("FAIL \n");
    return 0;
}