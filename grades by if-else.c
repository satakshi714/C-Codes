# include <stdio.h>

int main() {
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 90){
        printf("A++");
    }
    else if(marks < 90 && marks >= 70){
        printf("A");
    }
    else if(marks < 70 && marks >= 30){
        printf("B");
    }
    else{
        printf("C");
    }
    return 0;
}