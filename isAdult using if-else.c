# include <stdio.h>

int main() {
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    if (age >= 18){
        printf("is Adult \n");
    }
    else if(age > 13 && age <= 18){
        printf("is teenager \n");
    }
    else{
        printf("child \n");
    }
    return 0;

}