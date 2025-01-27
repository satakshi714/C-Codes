# include <stdio.h>
# include <math.h>

int main() {
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d \n", isSunday && isSnowing);
    
    int isMonday = 0;
    int isRaining = 1;
    printf("%d \n", isMonday || isRaining);
    
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    int num1 = 9;
    int num2 = 100;
    printf("%d \n", num1<num && num2>num);
}